#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <thread>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    // navigation buttons
    connect(ui->exitButton, &QPushButton::clicked, this, &MainWindow::exitButton_clicked);
    connect(ui->nextButton, &QPushButton::clicked, this, &MainWindow::nextButton_clicked);
    connect(ui->prevButton, &QPushButton::clicked, this, &MainWindow::prevButton_clicked);

    // network input radio buttons
    connect(ui->manulaRadioButton, &QPushButton::clicked, this, &MainWindow::radioButton_clicked);
    connect(ui->fileRadioButton, &QPushButton::clicked, this, &MainWindow::radioButton_clicked);
    connect(ui->currentNetRadioButton, &QPushButton::clicked, this, &MainWindow::radioButton_clicked);

    // manual input
    connect(ui->manualNetworkInput, &QLineEdit::textChanged, this, &MainWindow::manualNetwork_change);

    // file dialog
    connect(ui->fileDialogOpenButton, &QPushButton::clicked, this, &MainWindow::fileDialogOpenButton_clicked);

    // scanning type check box
    connect(ui->pingCheckBox, &QCheckBox::stateChanged, this, &MainWindow::pingCheckBox_change);
    connect(ui->arpCheckBox, &QCheckBox::stateChanged, this, &MainWindow::arpCheckBox_change);
    connect(ui->synCheckBox, &QCheckBox::stateChanged, this, &MainWindow::synCheckBox_change);

    this->currentWindow = PageTypes::WelcomePage;
    ui->workSpace->setCurrentIndex(this->currentWindow);
    this->drowWelcomePage();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::openPage(const PageTypes &pageType) {
    auto prevPage = PageTypes(ui->workSpace->currentIndex());

    ui->workSpace->setCurrentIndex(pageType);

    this->currentWindow = pageType;

    // page items controll
    if (pageType == PageTypes::WelcomePage) {
        this->drowWelcomePage();
    }
    else if(pageType == PageTypes::NetworkSelectingPage) {
        this->drowNetworkSelectingPage();
    }
    else if(pageType == PageTypes::ScanningTypePage) {

        if (prevPage == PageTypes::NetworkSelectingPage) {
            // init scanner
            if (this->networkInitializationType == NetworkInitializationTypes::Manual) {
                QString netStr {ui->manualNetworkInput->text()};
                this->scanner.initByNetworksString(netStr);
            }

            if (this->networkInitializationType == NetworkInitializationTypes::File) {
                QString filePath {ui->fileNetworkInput->text()};
                this->scanner.setNetworksFromFile(filePath);
            }

            if (this->networkInitializationType == NetworkInitializationTypes::CurrentNetwork) {
                QString netStr {ui->manualNetworkInput->text()};
                this->scanner.initByCurrentNetworks();
            }
        }

        this->drowScanningTypePage();
    }
    else if(pageType == PageTypes::HostDetectingPage) {
        this->startActiveHostDetection();
    }
}

void MainWindow::drowWelcomePage() {
    ui->nextButton->setDisabled(false);
    ui->prevButton->setDisabled(true);
}

void MainWindow::drowNetworkSelectingPage() {
    // set label and inputs (current networks)
    this->setNetworkInput();

    // navigation buttons
    ui->nextButton->setDisabled(!this->networksIsCorrect);
    ui->prevButton->setDisabled(false);
}

void MainWindow::drowScanningTypePage() {
    ui->nextButton->setDisabled(this->scanningTypes.size() == 0 ? true : false);
    ui->prevButton->setDisabled(false);
}

void drowHostDetectingPage();

void MainWindow::setNetworkInput() {
    ui->currentNetworksLabel->setText(Scanner::currentNetworksToQSting());
    ui->manualNetworkInput->setDisabled(!ui->manulaRadioButton->isChecked());
    ui->fileNetworkInput->setDisabled(!ui->fileRadioButton->isChecked());
    ui->fileDialogOpenButton->setDisabled(!ui->fileRadioButton->isChecked());

}

void MainWindow::addScanningType(ScanningTypes type) {
    this->scanningTypes.append(type);
    ui->nextButton->setDisabled(this->scanningTypes.size() == 0 ? true : false);
}

void MainWindow::removeScanningType(ScanningTypes type) {
    this->scanningTypes.removeAll(type);
    ui->nextButton->setDisabled(this->scanningTypes.size() == 0 ? true : false);
}

void MainWindow::startActiveHostDetection() {
    // buttons
    ui->nextButton->setDisabled(true);
    ui->prevButton->setDisabled(false);

    // write progress bar
    ui->hostDetectionProgressBar->setMinimum(0);
    ui->hostDetectionProgressBar->setMaximum(this->scanner.getAllHostNumber());

    // start threading
    this->scanner.detectActiveHostsSYN(1);

    // waiting for thread
    this->waitingHostDetection();

    qDebug() << this->scanner.getActiveHosts();

    // end

}

void MainWindow::waitingHostDetection() {
//    if (this->threadNumber != 0) {
    size_t allHostsNumber = this->scanner.getAllHostNumber();
    size_t index{0};

    QList<QString> hosts{};
    while (this->scanner.getCompletedHostNumber() < allHostsNumber) {
        ui->hostDetectionProgressBar->setValue(this->scanner.getCompletedHostNumber());

        hosts = this->scanner.getActiveHosts();

        auto hostsLength = hosts.size();
        for (; index < hostsLength; ++index) {
            ui->activeHostBrowser->append(hosts.at(index) + " is ACTIVE;\n");
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    };
    ui->hostDetectionProgressBar->setValue(this->scanner.getCompletedHostNumber());
//    }

     qDebug() << "\rComplete 100%";
}

// slots realization

void MainWindow::exitButton_clicked(){
    qDebug() << "ILYA click exit";
}

void MainWindow::nextButton_clicked() {
    this->openPage(PageTypes(this->currentWindow + 1));
}

void MainWindow::prevButton_clicked() {
    this->openPage(PageTypes(this->currentWindow - 1));
}

void MainWindow::radioButton_clicked() {
    this->setNetworkInput();

    if(ui->manulaRadioButton->isChecked()) {
        this->networkInitializationType = NetworkInitializationTypes::Manual;
    }

    if(ui->fileRadioButton->isChecked()) {
        this->networkInitializationType = NetworkInitializationTypes::File;
    }

    if(ui->currentNetRadioButton->isChecked()) {
        this->networkInitializationType = NetworkInitializationTypes::CurrentNetwork;

        ui->nextButton->setDisabled(false);
    }


}

void MainWindow::fileDialogOpenButton_clicked() {
    auto fileName = QFileDialog::getOpenFileName(
                        this,
                        tr("Open File"),
                        QApplication::applicationFilePath(),
                        "All fils (*.*);;Text files (*.txt)"
                    );

    ui->fileNetworkInput->setText(fileName);
    this->scanner.setNetworksFromFile(fileName);

    if (this->scanner.getScannedNetworks().size() == 0) {
        ui->nextButton->setDisabled(true);
    } else {
        ui->nextButton->setDisabled(false);
    }

}

void MainWindow::manualNetwork_change() {
    if (Scanner::networkIsCorrect(ui->manualNetworkInput->text())) {
        ui->nextButton->setDisabled(false);
    } else {
        ui->nextButton->setDisabled(true);
    }
}

void MainWindow::pingCheckBox_change(int state) {
    if (state == 0) {
        this->removeScanningType(ScanningTypes::Ping);
    }
    if (state == 2) {
        this->addScanningType(ScanningTypes::Ping);
    }
}

void MainWindow::arpCheckBox_change(int state) {
    if (state == 0) {
        this->removeScanningType(ScanningTypes::ARP);
    }
    if (state == 2) {
        this->addScanningType(ScanningTypes::ARP);
    }
}

void MainWindow::synCheckBox_change(int state) {
    if (state == 0) {
        this->removeScanningType(ScanningTypes::SYN);
    }
    if (state == 2) {
        this->addScanningType(ScanningTypes::SYN);
    }
}

