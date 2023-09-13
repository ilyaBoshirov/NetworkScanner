#include "mainwindow.h"
#include "ui_mainwindow.h"

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

    // scanning type check box
//    connect(ui->prevButton, &QPushButton::clicked, this, &MainWindow::prevButton_clicked);

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
            this->scanner;
        }

        this->drowScanningTypePage();
    }
    else if(pageType == PageTypes::HostDetectingPage) {
        ui->nextButton->setDisabled(true);
        ui->prevButton->setDisabled(false);
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
    ui->nextButton->setDisabled(this->networkInitializationType == -1 ? true : false);
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
    ui->fileChoiseButton->setDisabled(!ui->fileRadioButton->isChecked());

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
    }

    ui->nextButton->setDisabled(this->networkInitializationType == -1 ? true : false);
}

