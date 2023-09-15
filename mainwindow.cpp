#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <thread>
#include <QRegularExpression>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    // navigation buttons
    connect(ui->exitButton, &QPushButton::clicked, this, &MainWindow::exitButton_clicked);
    connect(ui->nextButton, &QPushButton::clicked, this, &MainWindow::nextButton_clicked);
    connect(ui->prevButton, &QPushButton::clicked, this, &MainWindow::prevButton_clicked);

    // network input page -------------------------------------------------------------------------
    connect(ui->manualRadioButton, &QPushButton::clicked, this, &MainWindow::radioButton_clicked);
    connect(ui->fileRadioButton, &QPushButton::clicked, this, &MainWindow::radioButton_clicked);
    connect(ui->currentNetRadioButton, &QPushButton::clicked, this, &MainWindow::radioButton_clicked);

    // manual input
    connect(ui->manualNetworkInput, &QLineEdit::textChanged, this, &MainWindow::manualNetwork_change);

    // file dialog
    connect(ui->fileDialogOpenButton, &QPushButton::clicked, this, &MainWindow::fileDialogOpenButton_clicked);

    // scanning page -------------------------------------------------------------------------------
    connect(ui->pingRadioButton, &QPushButton::clicked, this, &MainWindow::scanTypeRadioBtn_clicked);
    connect(ui->arpRadioButton, &QPushButton::clicked, this, &MainWindow::scanTypeRadioBtn_clicked);
    connect(ui->synRadioButton, &QPushButton::clicked, this, &MainWindow::scanTypeRadioBtn_clicked);

    ui->threadNumberBox->setMinimum(1);

    // port selection page  ----------------------------------------------------------------------
    ui->firstPortValue->setMinimum(Scanner::firstPort);
    ui->firstPortValue->setMaximum(Scanner::lastPort);

    ui->lastPortValue->setMinimum(Scanner::firstPort);
    ui->lastPortValue->setMaximum(Scanner::lastPort);

    connect(ui->manualPortRadioButton, &QPushButton::clicked, this, &MainWindow::portsInputRadioBtn_clicked);
    connect(ui->rangePortRadioButton, &QPushButton::clicked, this, &MainWindow::portsInputRadioBtn_clicked);
    connect(ui->allPortsRadioButton, &QPushButton::clicked, this, &MainWindow::portsInputRadioBtn_clicked);

    connect(ui->firstPortValue, &QSpinBox::valueChanged, this, &MainWindow::selectPortSpinBox_valueChanged);

    connect(ui->manulPortLineEdit, &QLineEdit::textChanged, this, &MainWindow::manualPorts_change);

    // make welcome page first --------------------------------------------------------------------

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
    else if(pageType == PageTypes::PortsSelectingPage) {
        this->drowPortsSelectingPage();
    }
    else if(pageType == PageTypes::PortsDetectingPage) {
        this->startOpenPortsDetection();
    }
    else if(pageType == PageTypes::ExitPage) {

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
    ui->nextButton->setDisabled(this->scanningType == -1 ? true : false);
    ui->prevButton->setDisabled(false);
}

bool MainWindow::portsIsCheck() {
    return (
        ui->manualRadioButton->isChecked() &&
        ui->rangePortRadioButton->isChecked() &&
        ui->allPortsRadioButton->isChecked()
        );
}

void MainWindow::drowPortsSelectingPage() {
    // set inputs (current networks)
    ui->manulPortLineEdit->setDisabled(!ui->manualPortRadioButton->isChecked());

    ui->firstPortValue->setDisabled(!ui->rangePortRadioButton->isChecked());
    ui->lastPortValue->setDisabled(!ui->rangePortRadioButton->isChecked());

    // navigation buttons
    ui->nextButton->setDisabled(!this->portsIsCheck());
    ui->prevButton->setDisabled(false);
}

void MainWindow::drowExitPage() {
    ui->nextButton->setDisabled(true);
    ui->prevButton->setDisabled(false);
}


void MainWindow::setNetworkInput() {
    ui->currentNetworksLabel->setText(Scanner::currentNetworksToQSting());
    ui->manualNetworkInput->setDisabled(!ui->manualRadioButton->isChecked());
    ui->fileNetworkInput->setDisabled(!ui->fileRadioButton->isChecked());
    ui->fileDialogOpenButton->setDisabled(!ui->fileRadioButton->isChecked());

}

void MainWindow::startActiveHostDetection() {
    // buttons
    ui->nextButton->setDisabled(true);
    ui->prevButton->setDisabled(false);

    // write progress bar
    ui->hostDetectionProgressBar->setMinimum(0);
    ui->hostDetectionProgressBar->setMaximum(this->scanner.getAllHostNumber());

    // start threading

    quint32 threadNumber = ui->threadNumberBox->value();

    if (this->scanningType == ScanningTypes::Ping) {
        this->scanner.detectActiveHostsICMP(threadNumber);
    }
    if (this->scanningType == ScanningTypes::ARP) {
        this->scanner.detectActiveHostsARP(threadNumber);
    }
    if (this->scanningType == ScanningTypes::SYN) {
        this->scanner.detectActiveHostsSYN(threadNumber);
    }

    // waiting for thread
    this->waitingHostDetection();

    // end
    ui->nextButton->setDisabled(false);

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

}

bool MainWindow::portsStrIsCorrect() {
    auto ports = ui->manulPortLineEdit->text().split(QRegularExpression("[,;\r\n\t ]+"));

    QRegularExpression re("^(\\d{1,5})$");
    QRegularExpressionMatch match;

    foreach (auto port, ports) {
        match = re.match(port);

        if (!match.hasMatch()) {
            return false;
        }

        auto intPort = match.captured(0).toInt();
        if (intPort < 1 || intPort > 65535) {
            return false;
        }
    }

    return true;
}

QList<quint32> MainWindow::portsStrToQList(QString portsStr) {
    auto ports = portsStr.split(QRegularExpression("[,;\r\n\t ]+"));

    QList<quint32> intPorts{};
    foreach (auto port, ports) {
        intPorts.append(port.toInt());
    }

    return intPorts;
}

QList<quint32> MainWindow::getPortsForScan() {
    QList<quint32> ports{};
    if(ui->manualPortRadioButton->isChecked()) {
        return portsStrToQList(ui->manulPortLineEdit->text());
    }

    if(ui->rangePortRadioButton->isChecked()) {
        auto firstPort = ui->firstPortValue->value();
        auto lastPort = ui->lastPortValue->value();

        ports.resize(lastPort - firstPort + 1);
        std::iota(ports.begin(), ports.end(), firstPort);
        return ports;
    }

    if(ui->allPortsRadioButton->isChecked()) {
        ports.resize(Scanner::lastPort);
        std::iota(ports.begin(), ports.end(), Scanner::firstPort);
        return ports;
    }

    return QList<quint32>{};
}

void MainWindow::startOpenPortsDetection() {
    // buttons
    ui->nextButton->setDisabled(true);
    ui->prevButton->setDisabled(false);

    auto portsForScan = this->getPortsForScan();

    // write progress bar
    ui->portsDetectionProgressBar->setMinimum(0);
    ui->portsDetectionProgressBar->setMaximum(this->scanner.getActiveHosts().size());

    // start threading

    quint32 threadNumber = ui->threadNumberBox->value();

    this->scanner.detectActiveHostsOpenPorts(portsForScan, threadNumber);

    // waiting for thread
    this->waitingOpenPortsDetection();

    // end
    ui->nextButton->setDisabled(false);

}

void MainWindow::waitingOpenPortsDetection() {
    size_t allHostsNumber = this->scanner.getActiveHosts().size();
    size_t index{0};

    QList<QString> hostStatus{};
    while (this->scanner.getCompletedHostNumber() < allHostsNumber) {
        ui->portsDetectionProgressBar->setValue(this->scanner.getCompletedHostNumber());

        hostStatus = this->scanner.getHostsPortsStatus();

        auto hostsLength = hostStatus.size();
        for (; index < hostsLength; ++index) {
            ui->openPortsBrowser->append(hostStatus.at(index) + "\n");
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    };

    ui->portsDetectionProgressBar->setValue(this->scanner.getCompletedHostNumber());
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
    
    if(ui->manualRadioButton->isChecked()) {
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

void MainWindow::scanTypeRadioBtn_clicked() {
    this->setNetworkInput();

    if(ui->pingRadioButton->isChecked()) {
        this->scanningType = ScanningTypes::Ping;
    }

    if(ui->arpRadioButton->isChecked()) {
        this->scanningType = ScanningTypes::ARP;
    }

    if(ui->synRadioButton->isChecked()) {
        this->scanningType = ScanningTypes::SYN;
    }

    ui->nextButton->setDisabled(false);
}

void MainWindow::portsInputRadioBtn_clicked() {
    ui->manulPortLineEdit->setDisabled(!ui->manualPortRadioButton->isChecked());
    ui->firstPortValue->setDisabled(!ui->rangePortRadioButton->isChecked());
    ui->lastPortValue->setDisabled(!ui->rangePortRadioButton->isChecked());
    ui->nextButton->setDisabled(false);
    if(ui->rangePortRadioButton->isChecked()) {
        if (ui->lastPortValue->value() < ui->firstPortValue->value()){
            ui->nextButton->setDisabled(true);
        }
    }
    if(ui->manualPortRadioButton->isChecked()) {
        this->manualPorts_change();
    }
}

void MainWindow::selectPortSpinBox_valueChanged() {
    if (ui->lastPortValue->value() < ui->firstPortValue->value()){
        ui->nextButton->setDisabled(true);
    } else {
        ui->nextButton->setDisabled(false);
    }
}

void MainWindow::manualPorts_change() {
    if (this->portsStrIsCorrect()) {
        ui->nextButton->setDisabled(false);
    } else {
        ui->nextButton->setDisabled(true);
    }
}
