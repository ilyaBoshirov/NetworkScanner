#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    connect(ui->exitButton, &QPushButton::clicked, this, &MainWindow::exitButton_clicked);
    connect(ui->nextButton, &QPushButton::clicked, this, &MainWindow::nextButton_clicked);
    connect(ui->prevButton, &QPushButton::clicked, this, &MainWindow::prevButton_clicked);

    ui->prevButton->setDisabled(true);
}

MainWindow::~MainWindow() {
    delete ui;
}

// slots realization

void MainWindow::exitButton_clicked(){
    qDebug() << "ILYA click exit";
}

void MainWindow::nextButton_clicked() {
    if (this->currentWindow == PageTypes::welcomePage) {
        ui->workSpace->setCurrentIndex(PageTypes::hostSelectingPage);
        this->currentWindow = PageTypes::hostSelectingPage;
        ui->prevButton->setDisabled(false);
    }
    else if (this->currentWindow == (this->currentWindow == PageTypes::hostSelectingPage)) {
        ui->workSpace->setCurrentIndex(PageTypes::hostDetectingPage);
        this->currentWindow = PageTypes::hostDetectingPage;
        ui->nextButton->setDisabled(true);
    }
}

void MainWindow::prevButton_clicked() {
    if (this->currentWindow == PageTypes::hostSelectingPage) {
        ui->workSpace->setCurrentIndex(PageTypes::welcomePage);
        this->currentWindow = PageTypes::welcomePage;
        ui->prevButton->setDisabled(true);
    }
    else if (this->currentWindow == PageTypes::hostDetectingPage) {
        ui->workSpace->setCurrentIndex(PageTypes::hostSelectingPage);
        this->currentWindow = PageTypes::hostSelectingPage;
        ui->nextButton->setDisabled(false);
    }
}

