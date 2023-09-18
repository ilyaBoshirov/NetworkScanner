#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <thread>
#include <QRegularExpression>
#include <QMessageBox>


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
    ui->firstPortValue->setMinimum(PortScanner::firstPort);
    ui->firstPortValue->setMaximum(PortScanner::lastPort);

    ui->lastPortValue->setMinimum(PortScanner::firstPort);
    ui->lastPortValue->setMaximum(PortScanner::lastPort);

    connect(ui->manualPortRadioButton, &QPushButton::clicked, this, &MainWindow::portsInputRadioBtn_clicked);
    connect(ui->rangePortRadioButton, &QPushButton::clicked, this, &MainWindow::portsInputRadioBtn_clicked);
    connect(ui->allPortsRadioButton, &QPushButton::clicked, this, &MainWindow::portsInputRadioBtn_clicked);

    connect(ui->firstPortValue, &QSpinBox::valueChanged, this, &MainWindow::selectPortSpinBox_valueChanged);
    connect(ui->lastPortValue, &QSpinBox::valueChanged, this, &MainWindow::selectPortSpinBox_valueChanged);

    connect(ui->manualPortLineEdit, &QLineEdit::textChanged, this, &MainWindow::manualPorts_change);

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
        return;
    }
    else if(pageType == PageTypes::NetworkSelectingPage) {
        this->drowNetworkSelectingPage();
        return;
    }
    else if(pageType == PageTypes::ScanningTypePage) {
        this->drowScanningTypePage();
        return;
    }
    else if(pageType == PageTypes::HostDetectingPage) {
        if (prevPage == PageTypes::PortsSelectingPage) {
            this->drowDetectingHostsPage();
            return;
        }
        this->startActiveHostDetection();
        return;
    }
    else if(pageType == PageTypes::PortsSelectingPage) {
        this->drowPortsSelectingPage();
    }
    else if(pageType == PageTypes::PortsDetectingPage) {
        if (prevPage == PageTypes::ExitPage) {
            this->drowScanningPortsPage();
            return;
        }
        this->startOpenPortsDetection();
        return;
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
    ui->nextButton->setDisabled(!this->networkInputTypeIsCorrect());
    ui->prevButton->setDisabled(false);
}

void MainWindow::drowScanningTypePage() {
    ui->nextButton->setDisabled(this->scanningType == -1 ? true : false);
    ui->prevButton->setDisabled(false);
}

void MainWindow::drowDetectingHostsPage() {
    ui->nextButton->setDisabled(false);
    ui->prevButton->setDisabled(false);
}

void MainWindow::drowScanningPortsPage() {
    ui->nextButton->setDisabled(false);
    ui->prevButton->setDisabled(false);
}

bool MainWindow::portsIsCheck() {
    return (
        ui->manualRadioButton->isChecked() &&
        ui->rangePortRadioButton->isChecked() &&
        ui->allPortsRadioButton->isChecked()
        );
}

void MainWindow::setPortsInputs() {
    ui->manualPortLineEdit->setDisabled(!ui->manualPortRadioButton->isChecked());
    ui->firstPortValue->setDisabled(!ui->rangePortRadioButton->isChecked());
    ui->lastPortValue->setDisabled(!ui->rangePortRadioButton->isChecked());
}

void MainWindow::drowPortsSelectingPage() {
    // set inputs (current networks)
    this->setPortsInputs();

    // navigation buttons
    ui->nextButton->setDisabled(!this->portInputTypeIsCorrect());
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

QList<size_t> MainWindow::tastsForThreads(size_t allTasksNumber, size_t threadsNumber) {
    size_t hostPerThr = allTasksNumber / threadsNumber;
    size_t extraHostsNumber = allTasksNumber % threadsNumber;

    QList<size_t> hostsNumbers(threadsNumber, hostPerThr);
    for(auto i{0}; i < extraHostsNumber; ++i) {
        hostsNumbers[i] += 1;
    }

    return hostsNumbers;
}

void MainWindow::startActiveHostDetection() {
    // buttons
    ui->nextButton->setDisabled(true);
    ui->prevButton->setDisabled(false);

    QList<QString> hostsForDetecion{};

    if (this->networkInitializationType == NetworkInitializationTypes::Manual) {
        QString networksStr = ui->manualNetworkInput->text();
        hostsForDetecion = Scanner::getNetworksHosts(Scanner::getNetworksFromString(networksStr));

    }
    if (this->networkInitializationType == NetworkInitializationTypes::File) {
        hostsForDetecion = Scanner::getNetworksHosts(Scanner::getNetworksFromFile(ui->fileNetworkInput->text()));
    }
    if (this->networkInitializationType == NetworkInitializationTypes::CurrentNetwork) {
        hostsForDetecion = Scanner::getNetworksHosts(Scanner::getCurrentNetworks());
    }

    // set progress bar
    ui->hostDetectionProgressBar->setMinimum(0);
    ui->hostDetectionProgressBar->setMaximum(hostsForDetecion.size());
    ui->hostDetectionProgressBar->setValue(0);

    // set text browser
    ui->activeHostBrowser->clear();

    // start threading
    quint32 threadNumber = ui->threadNumberBox->value();

    auto hostsForThreadsNumbers = MainWindow::tastsForThreads(hostsForDetecion.size(), threadNumber);

    this->hostDetectorThreads.clear();

    size_t hostCounter = 0;
    for(auto i = 0; i < threadNumber; ++i) {
        if (hostsForThreadsNumbers[i] == 0) {
            break;
        }
        this->hostDetectorThreads.push_back(new HostDetector(hostsForDetecion.mid(hostCounter, hostsForThreadsNumbers[i]), ScanningTypes(this->scanningType)));
        hostCounter += hostsForThreadsNumbers[i];

        // add connections
        connect(this->hostDetectorThreads[i], SIGNAL(hostIsComplete(QString, bool)), this,  SLOT(hostDetectionIsComplete(QString, bool)));
        connect(this->hostDetectorThreads[i], SIGNAL(completeDetection(QList<QString>)), this, SLOT(threadCompleteHostsDetection(QList<QString>)));

        this->hostDetectorThreads[i]->start();
    }
}

void MainWindow::hostDetectionIsComplete(QString hostIP, bool isActive) {
    if (isActive) {
        ui->activeHostBrowser->append(hostIP + " is ACTIVE;\n");
    }
    auto currentPgrogressBarValue = ui->hostDetectionProgressBar->value();
    ui->hostDetectionProgressBar->setValue(currentPgrogressBarValue + 1);
}

void MainWindow::threadCompleteHostsDetection(QList<QString> activeHosts) {
    this->activeHosts += activeHosts;

    auto allIsComplete = true;

    foreach(auto thread, this->hostDetectorThreads) {
        if (!thread->isFinished()) {
            allIsComplete = false;
            break;
        }
    }

    if (allIsComplete) {
        ui->nextButton->setDisabled(false);
    }
}

bool MainWindow::portsStrIsCorrect() {
    auto ports = ui->manualPortLineEdit->text().split(QRegularExpression("[,;\r\n\t ]+"));

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
        return portsStrToQList(ui->manualPortLineEdit->text());
    }

    if(ui->rangePortRadioButton->isChecked()) {
        auto firstPort = ui->firstPortValue->value();
        auto lastPort = ui->lastPortValue->value();

        ports.resize(lastPort - firstPort + 1);
        std::iota(ports.begin(), ports.end(), firstPort);
        return ports;
    }

    if(ui->allPortsRadioButton->isChecked()) {
        ports.resize(PortScanner::lastPort);
        std::iota(ports.begin(), ports.end(), PortScanner::firstPort);
        return ports;
    }

    return QList<quint32>{};
}

QList<QList<QPair<QString, QList<quint32>>>> MainWindow::splitHostsAndPortsForThread(QList<QString> activeHosts, QList<quint32> ports, size_t threadsNumber) {
    auto activeHostsSize = activeHosts.size();
    auto portsSize = ports.size();

    // number of tasks for threads
    QList<size_t> threadsConnections = MainWindow::tastsForThreads(activeHostsSize * portsSize, threadsNumber);

    QList<QList<QPair<QString, QList<quint32>>>> tasksForAllThreads{};
    QList<QPair<QString, QList<quint32>>> treadTasks{};

    QList<quint32> tempPorts{};
    size_t threadConnectionsNumber{0};
    size_t threadIndex{0};

    for(auto i{0}; i < activeHostsSize; ++i) {
        for(auto j{0}; j < portsSize; ++j) {
            if (threadConnectionsNumber == threadsConnections[threadIndex]) {
                treadTasks.append(qMakePair(activeHosts[i], tempPorts));
                tasksForAllThreads.append(treadTasks);
                treadTasks.clear();

                tempPorts.clear();
                ++threadIndex;
                threadConnectionsNumber = 0;
            }
            tempPorts.append(ports[j]);
            threadConnectionsNumber += 1;
        }

        treadTasks.append(qMakePair(activeHosts[i], tempPorts));
        tempPorts.clear();
    }

    tasksForAllThreads.append(treadTasks);

    return tasksForAllThreads;
}

void MainWindow::startOpenPortsDetection() {
    // buttons
    ui->nextButton->setDisabled(true);
    ui->prevButton->setDisabled(false);

    auto portsForScan = this->getPortsForScan();

    // write progress bar
    ui->portsDetectionProgressBar->setMinimum(0);
    ui->portsDetectionProgressBar->setValue(0);
    ui->portsDetectionProgressBar->setMaximum(this->activeHosts.size() * portsForScan.size());

    // text browser
    ui->openPortsBrowser->clear();

    // start threading

    quint32 threadNumber = ui->threadNumberBox->value();  // todo add thread number to page

    auto targetsForThread = MainWindow::splitHostsAndPortsForThread(this->activeHosts, portsForScan, threadNumber);

    this->portScannersThreads.clear();

    for(auto i{0}; i < threadNumber; ++i) {
        this->portScannersThreads.push_back(new PortScanner(targetsForThread[i]));

        // add connections
        connect(this->portScannersThreads[i], SIGNAL(portIsComplete(QString, quint32, PortStatus)), this,  SLOT(portDetectionIsComplete(QString, quint32, PortStatus)));
        connect(this->portScannersThreads[i], SIGNAL(portScanningComplete()), this, SLOT(threadCompletePortsDetection()));

        this->portScannersThreads[i]->start();
    }
    // end
    ui->nextButton->setDisabled(false);
}

void MainWindow::portDetectionIsComplete(QString hostIP, quint32 port, PortStatus portStatus) {
    if (portStatus == PortStatus::OPEN) {
        ui->openPortsBrowser->append(hostIP + QString(":%1").arg(port) +  + " --- OPEN;\n");
    }
    auto currentPgrogressBarValue = ui->portsDetectionProgressBar->value();
    ui->portsDetectionProgressBar->setValue(currentPgrogressBarValue + 1);
}

void MainWindow::threadCompletePortsDetection() {
    auto allIsComplete = true;

    foreach(auto thread, this->portScannersThreads) {
        if (!thread->isFinished()) {
            allIsComplete = false;
            break;
        }
    }

    if (allIsComplete) {
        ui->nextButton->setDisabled(false);
    }
}

bool MainWindow::networkInputTypeIsCorrect() {
    if(ui->manualRadioButton->isChecked()) {
        QString str = ui->manualNetworkInput->text();
        qDebug() << Scanner::getNetworksFromString(str).size();
        if (Scanner::getNetworksFromString(str).size() > 0 && str.length() > 0) {
            return true;
        } else {
            return false;
        }
    }

    if(ui->fileRadioButton->isChecked()) {
        if (Scanner::getNetworksFromFile(ui->fileNetworkInput->text()).size() > 0) {
            return true;
        } else {
            return false;
        }
    }

    if(ui->currentNetRadioButton->isChecked()) {
        return true;
    }

    return false;
}

bool MainWindow::portInputTypeIsCorrect() {
    if(ui->manualPortRadioButton->isChecked()) {
        if (this->portsStrIsCorrect()) {
            return true;
        } else {
            return false;
        }
    }

    if(ui->rangePortRadioButton->isChecked()) {
        if (ui->lastPortValue->value() < ui->firstPortValue->value()){
            return false;
        } else {
            return true;
        }
    }

    if(ui->allPortsRadioButton->isChecked()) {
        return true;
    }

    return false;
}

void MainWindow::stopScanning() {
    size_t threadsNumber = (this->currentWindow == PageTypes::HostDetectingPage) ? this->hostDetectorThreads.size() : this->portScannersThreads.size();
    for (auto i{0}; i < threadsNumber; ++i) {
        if (this->currentWindow == PageTypes::HostDetectingPage) {
            this->hostDetectorThreads[i]->quit();
            continue;
        }
        this->portScannersThreads[i]->quit();
    }
}

bool MainWindow::scanIsRunning() {

    bool scanIsRunnig = false;
    size_t threadsNumber = (this->currentWindow == PageTypes::HostDetectingPage) ? this->hostDetectorThreads.size() : this->portScannersThreads.size();

    if (this->currentWindow == PageTypes::HostDetectingPage) {
        for (auto i{0}; i < threadsNumber; ++i) {
            scanIsRunnig = scanIsRunnig || this->hostDetectorThreads[i]->isRunning();
        }
    } else {
        for (auto i{0}; i < threadsNumber; ++i) {
            scanIsRunnig = scanIsRunnig || this->portScannersThreads[i]->isRunning();
        }
    }

    return scanIsRunnig;
}

// slots realization

void MainWindow::exitButton_clicked(){
    QMessageBox msgBox;
    msgBox.setText("Exit program");
    msgBox.setInformativeText("Are you sure you want to exit the programm?");
    msgBox.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
    int ret = msgBox.exec();

    if (ret == QMessageBox::No) {
        return;
    }
    if (ret == QMessageBox::Yes) {
        QApplication::exit(2);
    }
}

void MainWindow::nextButton_clicked() {
    this->openPage(PageTypes(this->currentWindow + 1));
}

void MainWindow::prevButton_clicked() {

    if ((this->currentWindow == PageTypes::HostDetectingPage || this->currentWindow == PageTypes::PortsDetectingPage) && this->scanIsRunning()) {
        QMessageBox msgBox;
        msgBox.setText("Exit scanning");
        msgBox.setInformativeText("Are you sure you want to abort the scan?");
        msgBox.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
        int ret = msgBox.exec();

        if (ret == QMessageBox::No) {
            return;
        }
        if (ret == QMessageBox::Yes) {
            this->stopScanning();
        }
    }

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


    }
    ui->nextButton->setDisabled(!this->networkInputTypeIsCorrect());
}

void MainWindow::fileDialogOpenButton_clicked() {
    auto fileName = QFileDialog::getOpenFileName(
                        this,
                        tr("Open File"),
                        QApplication::applicationFilePath(),
                        "All fils (*.*);;Text files (*.txt)"
                    );

    ui->fileNetworkInput->setText(fileName);

    if (Scanner::getNetworksFromFile(fileName).size() == 0) {
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
    this->setPortsInputs();
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
