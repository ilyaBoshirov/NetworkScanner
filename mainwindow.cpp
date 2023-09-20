#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <thread>
#include <QRegularExpression>
#include <QMessageBox>
#include <QSet>
#include <QMap>
#include <QDate>
#include <QColor>
#include <QStringList>
#include <QTableWidgetItem>
#include <QSet>

#include <algorithm>

#include "portservice.h"


// constructors ----------------------------------------------------------------------------------------

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    // navigation buttons
    connect(ui->exitButton, &QPushButton::clicked, this, &MainWindow::exitButton_clicked);
    connect(ui->nextButton, &QPushButton::clicked, this, &MainWindow::nextButton_clicked);
    connect(ui->prevButton, &QPushButton::clicked, this, &MainWindow::prevButton_clicked);

    // menu bar buttons

    connect(ui->aboutButton, &QMenu::aboutToShow, this, &MainWindow::aboutButton_clicked);

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

    ui->portThread->setMinimum(1);

    connect(ui->manualPortRadioButton, &QPushButton::clicked, this, &MainWindow::portsInputRadioBtn_clicked);
    connect(ui->rangePortRadioButton, &QPushButton::clicked, this, &MainWindow::portsInputRadioBtn_clicked);
    connect(ui->allPortsRadioButton, &QPushButton::clicked, this, &MainWindow::portsInputRadioBtn_clicked);

    connect(ui->firstPortValue, &QSpinBox::valueChanged, this, &MainWindow::selectPortSpinBox_valueChanged);
    connect(ui->lastPortValue, &QSpinBox::valueChanged, this, &MainWindow::selectPortSpinBox_valueChanged);

    connect(ui->manualPortLineEdit, &QLineEdit::textChanged, this, &MainWindow::manualPorts_change);

    // exit page --------------------------------------------------------------------

    connect(ui->showResultsButton, &QPushButton::clicked, this, &MainWindow::showResultsButton_clicked);
    connect(ui->newScanButton, &QPushButton::clicked, this, &MainWindow::newScan_clicked);
    connect(ui->saveToJsonButton, &QPushButton::clicked, this, &MainWindow::saveToJson_clicked);
    connect(ui->saveToDbButton, &QPushButton::clicked, this, &MainWindow::saveToDb_clicked);
    connect(ui->exitWithoutSaveButton, &QPushButton::clicked, this, &MainWindow::exitWithoutSave_clicked);

    // make welcome page first --------------------------------------------------------------------

    this->currentWindow = PageTypes::WelcomePage;
    ui->workSpace->setCurrentIndex(this->currentWindow);
    this->drowWelcomePage();
}

MainWindow::~MainWindow() {
    delete ui;
}

// work with pages ---------------------------------------------------------------------------------------

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
        this->drowExitPage();

        if (prevPage == PageTypes::ResultsPage) {
            ui->nextButton->setHidden(false);
            ui->exitButton->setHidden(false);
        }
    }
    else if(pageType == PageTypes::ResultsPage) {
        this->drowResultsPage();
        ui->nextButton->setHidden(true);
        ui->exitButton->setHidden(true);
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

bool comparator(const QString &v1, const QString &v2) {
    return v1.toInt() < v2.toInt();
}

void MainWindow::drowResultsPage() {
    ui->resultsTable->setColumnCount(3);
    ui->resultsTable->setShowGrid(true);

    QStringList header{};
    header << "ID" << "IP Address" << "OS Version" << "Open ports";

    ui->resultsTable->setHorizontalHeaderLabels(header);
    ui->resultsTable->horizontalHeader()->setStretchLastSection(true);

    auto hostsInfo = this->getResultInTableView();

    auto rowCounter{0};
    for(const auto& ipInfo : hostsInfo.toStdMap()) {
        auto ip = ipInfo.first;
        auto ports = ipInfo.second.split(',').toList();
        std::sort(ports.begin(), ports.end(), comparator);
        QString portStr{""};
        QString onePortInfoStr{"%1 (%2), "};

        QList<QString> completePorts{};
        foreach (const auto& port, ports) {
            if (port == "" || completePorts.contains(port) == true) {
                continue;
            }
            portStr.append(onePortInfoStr.arg(port).arg(getPortNumberInfoStatic(port.toInt())));
            completePorts.append(port);
        }

        ui->resultsTable->insertRow(rowCounter);
        ui->resultsTable->setItem(rowCounter,0, new QTableWidgetItem(ip));
        ui->resultsTable->setItem(rowCounter,1, new QTableWidgetItem("Not now :)"));
        ui->resultsTable->setItem(rowCounter,2, new QTableWidgetItem(portStr));

        ++rowCounter;
    }
}

// work with pages ---------------------------------------------------------------------------------------

int MainWindow::runWarningMsgBox(const QString& text, const QString& infoText) {
    QMessageBox msgBox;
    msgBox.setText(text);
    msgBox.setInformativeText(infoText);
    msgBox.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
    return msgBox.exec();
}

void MainWindow::drowAboutPage(){
    QMessageBox msgBox;
    msgBox.setText("This application was create by Ilya Boshirov");
    msgBox.setInformativeText("Version: 1.0\ngit: https://github.com/ilyaBoshirov");
    msgBox.setWindowTitle("ABOUT");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
}

// some functions for updating some of ui components -------------------------------------------------------

void MainWindow::setNetworkInput() {
    ui->currentNetworksLabel->setText(Scanner::currentNetworksToQSting());
    ui->manualNetworkInput->setDisabled(!ui->manualRadioButton->isChecked());
    ui->fileNetworkInput->setDisabled(!ui->fileRadioButton->isChecked());
    ui->fileDialogOpenButton->setDisabled(!ui->fileRadioButton->isChecked());
}

void MainWindow::setPortsInputs() {
    ui->manualPortLineEdit->setDisabled(!ui->manualPortRadioButton->isChecked());
    ui->firstPortValue->setDisabled(!ui->rangePortRadioButton->isChecked());
    ui->lastPortValue->setDisabled(!ui->rangePortRadioButton->isChecked());
}

// check correctness of user inputs and choice ------------------------------------------------------------------

bool MainWindow::networkInputTypeIsCorrect() {
    if(ui->manualRadioButton->isChecked()) {
        QString str = ui->manualNetworkInput->text();
        if (Scanner::networksStringIsCorrect(str)) {
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

bool MainWindow::portsIsCheck() {
    return (
        ui->manualRadioButton->isChecked() &&
        ui->rangePortRadioButton->isChecked() &&
        ui->allPortsRadioButton->isChecked()
        );
}

bool MainWindow::portsStrIsCorrect() {
    auto ports = ui->manualPortLineEdit->text().split(QRegularExpression("[,;\r\n\t ]+"));

    QRegularExpression re("^(\\d{1,5})$");
    QRegularExpressionMatch match;

    foreach (const auto& port, ports) {
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

// functions for getting value from ui ----------------------------------------------------------------------------

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

// scanning ----------------------------------------------------------------------------------------------------

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
    for(auto i { 0 }; i < threadNumber; ++i) {
        if (hostsForThreadsNumbers[i] == 0) {
            break;
        }
        this->hostDetectorThreads.push_back(new HostDetector(hostsForDetecion.mid(hostCounter, hostsForThreadsNumbers[i]), ScanningTypes(this->scanningType)));
        hostCounter += hostsForThreadsNumbers[i];

        // add connections
        connect(this->hostDetectorThreads[i], &HostDetector::hostIsComplete, this, &MainWindow::hostDetectionIsComplete);
        connect(this->hostDetectorThreads[i], &HostDetector::completeDetection, this, &MainWindow::threadCompleteHostsDetection);

        this->hostDetectorThreads[i]->start();
    }
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

    quint32 threadNumber = ui->portThread->value();  // todo add thread number to page

    auto targetsForThread = MainWindow::splitHostsAndPortsForThread(this->activeHosts, portsForScan, threadNumber);

    this->portScannersThreads.clear();

    for(auto i{0}; i < threadNumber; ++i) {
        this->portScannersThreads.push_back(new PortScanner(targetsForThread[i]));

        // add connections
        connect(this->portScannersThreads[i], &PortScanner::portIsComplete, this, &MainWindow::portDetectionIsComplete);
        connect(this->portScannersThreads[i], &PortScanner::portScanningComplete, this, &MainWindow::threadCompletePortsDetection);

        this->portScannersThreads[i]->start();
    }
    // end
    ui->nextButton->setDisabled(false);
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

// saving results realization ----------------------------------------------------------------------------

QJsonObject MainWindow::getJsonReport() {
    /*
     * Generating a report in json format
    */

    QList<QString> scannedNetworks{};
    if (this->networkInitializationType == NetworkInitializationTypes::Manual) {
        QString networksStr = ui->manualNetworkInput->text();
        scannedNetworks = Scanner::getNetworksFromString(networksStr);
    }
    if (this->networkInitializationType == NetworkInitializationTypes::File) {
        scannedNetworks = Scanner::getNetworksFromFile(ui->fileNetworkInput->text());
    }
    if (this->networkInitializationType == NetworkInitializationTypes::CurrentNetwork) {
        scannedNetworks = Scanner::getCurrentNetworks();
    }

    // process the report
    QMap<QString, QList<QPair<QString, QString>>> resultHostInfo{};
    QMap<QString, size_t> activeHostNumber{};
    QSet<QString> uniqueIp{};

    foreach(const auto& infoStr, this->portsInfo) {
        auto parts = infoStr.split("|");
        auto ip = parts[0];
        auto port = parts[1];
        auto info = parts[2];

        if (resultHostInfo.find(ip) == resultHostInfo.end()) {
            resultHostInfo[ip] = QList<QPair<QString, QString>>{};
        }

        resultHostInfo[ip].append(qMakePair(port, info));

        foreach (const auto& net, scannedNetworks) {
            if(Scanner::ipInNetwork(ip, net)) {
                if(activeHostNumber.find(net) == activeHostNumber.end()) {
                    activeHostNumber[net] = 0;
                }
                if (uniqueIp.find(ip) == uniqueIp.end()) {
                    activeHostNumber[net] = activeHostNumber[net] + 1;
                    uniqueIp.insert(ip);
                    break;
                }
            }
        }
    }

    // create json object report
    QJsonObject jsonReport;
    size_t netCounter = 1;
    QList<QString> keysForDelete{};

    foreach (auto net, scannedNetworks) {
        QJsonObject netJsonObject;
        netJsonObject["NetworkIp"] = net;
        netJsonObject["HostNumber"] = Scanner::getNetworkIPs(net).size();
        netJsonObject["ActiveHostNumber"] = QString::number(activeHostNumber[net]);

        QJsonObject netHostsJsonObject;
        for(auto ipInfo : resultHostInfo.toStdMap()) {
            auto ip = ipInfo.first;
            auto portAndInfoList = ipInfo.second;

            if (!Scanner::ipInNetwork(ip, net)) {
                continue;
            }

            QJsonObject hostJsonObject;
            hostJsonObject["ip"] = ip;

            QJsonObject portJsonObject;
            foreach (auto item, portAndInfoList) {
                auto port = item.first;
                auto info = item.second;
                portJsonObject[port] = info;
            }
            hostJsonObject["ports"] = portJsonObject;

            keysForDelete.append(ip);

            netHostsJsonObject[ip] = hostJsonObject;
        }
        netJsonObject["Hosts"] = netHostsJsonObject;

        jsonReport[QString("Network%1").arg(netCounter)] = netJsonObject;
        netCounter += 1;

        foreach (auto key, keysForDelete) {
            resultHostInfo.remove(key);
        }
        keysForDelete.clear();
    }

    return jsonReport;
}

QString getCurrentDate() {
    /*
     * Some auxiliary function
    */
    return QDate::currentDate().toString("yyyyMMdd");
}

QMap<QString, QString> MainWindow::getResultInTableView() {
    QMap<QString, QString> result{}; // ip -> str with info
    foreach (const auto& infoStr, this->portsInfo) {
        auto parts = infoStr.split("|");
        auto ip = parts[0];
        auto port = parts[1];
        auto info = parts[2];

        if(result.find(ip) == result.end()) {
            result[ip] = "";
        }
        result[ip] += QString("%1,").arg(port);
    }

    return result;
}

bool MainWindow::saveToDb() {
    QList<QString> scannedNetworks{};
    if (this->networkInitializationType == NetworkInitializationTypes::Manual) {
        QString networksStr = ui->manualNetworkInput->text();
        scannedNetworks = Scanner::getNetworksFromString(networksStr);
    }
    if (this->networkInitializationType == NetworkInitializationTypes::File) {
        scannedNetworks = Scanner::getNetworksFromFile(ui->fileNetworkInput->text());
    }
    if (this->networkInitializationType == NetworkInitializationTypes::CurrentNetwork) {
        scannedNetworks = Scanner::getCurrentNetworks();
    }

    auto successSave{true};

    // accumulate ip resulst
    auto  resultIpsInfo = this->getResultInTableView();

    // create tables for scanning networks
    size_t counter = 1;
    QList<QString> keysForDelete{};
    foreach (const auto& network, scannedNetworks) {
        QString newNet{network};
        newNet = newNet.replace('.', '_');
        newNet = newNet.replace('/', '_');
        auto tableName = QString("Net_%1_%2_%3").arg(newNet).arg(getCurrentDate()).arg(counter);
        while(true) {
            if (this->dbManager.tableisExist(tableName)) {
                ++counter;
                tableName = QString("Net_%1_%2_%3").arg(newNet).arg(getCurrentDate()).arg(counter);
            } else {
                counter = 0;
                break;
            }
        }

        if(!this->dbManager.createNewTable(tableName)) {
            qInfo() << "Cant create table";
            successSave = false;
            return successSave;;
        }

        // add row to table
        for(auto ipInfo : resultIpsInfo.toStdMap()) {
            auto ip = ipInfo.first;
            auto ports = ipInfo.second;

            if (Scanner::ipInNetwork(ip, network)) {
                successSave = successSave && this->dbManager.addNewIP(ip, ports);
                keysForDelete.append(ip);
            }
        }

        // delete processed data
        foreach(const auto& key, keysForDelete){
            resultIpsInfo.remove(key);
        }
        keysForDelete.clear();
    }

    return successSave;
}

// static functions ---------------------------------------------------------------------------------------

QList<quint32> MainWindow::portsStrToQList(const QString& portsStr) {
    auto ports = portsStr.split(QRegularExpression("[,;\r\n\t ]+"));

    QList<quint32> intPorts{};
    foreach (const auto& port, ports) {
        intPorts.append(port.toInt());
    }

    return intPorts;
}

QList<size_t> MainWindow::tastsForThreads(const size_t& allTasksNumber, const size_t& threadsNumber) {
    /*
     * Calculating the number of tasks for each thread
    */
    size_t hostPerThr = allTasksNumber / threadsNumber;
    size_t extraHostsNumber = allTasksNumber % threadsNumber;

    QList<size_t> hostsNumbers(threadsNumber, hostPerThr);
    for(auto i{0}; i < extraHostsNumber; ++i) {
        hostsNumbers[i] += 1;
    }

    return hostsNumbers;
}

QList<QList<QPair<QString, QList<quint32>>>> MainWindow::splitHostsAndPortsForThread(const QList<QString>& activeHosts, const QList<quint32>& ports, const size_t& threadsNumber) {
    /*
     * Divide the task for threads
     * Number of all tasks: host_number * ports_numbers
     * Here were for all thread give task:   host, [port_1,...,port_n]
    */

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

// slots realization -----------------------------------------------------------------------------------------------------

void MainWindow::exitButton_clicked() {
    auto ret = this->runWarningMsgBox("Exit program", "Are you sure you want to exit the programm?");

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
        auto ret = this->runWarningMsgBox("Exit scanning", "Are you sure you want to abort the scan?");

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
                        QApplication::applicationDirPath(),
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
    if (Scanner::networksStringIsCorrect(ui->manualNetworkInput->text())) {
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

void MainWindow::newScan_clicked(){
    if(this->progressSaved == false) {
        auto ret = this->runWarningMsgBox("New scan", "Are you sure you want to run new scan without saving?");

        if (ret == QMessageBox::No) {
            return;
        }
    }

    this->activeHosts.clear();
    this->portsInfo.clear();
    this->openPage(PageTypes::NetworkSelectingPage);
}

void MainWindow::saveToJson_clicked() {
    auto fileName = QFileDialog::getSaveFileName(
        this,
        tr("Save File"),
        QApplication::applicationDirPath(),
        "JSON (*.json)"
        );


    auto jsonObject = this->getJsonReport();

    QJsonDocument jsonDoc(jsonObject);

    QFile jsonFile(fileName);
    jsonFile.open(QFile::WriteOnly);
    jsonFile.write(jsonDoc.toJson());

    this->progressSaved = true;
    ui->statusBrowser->setTextColor(QColor(37, 156, 109));
    ui->statusBrowser->setText(QString("Save in JSON file %1 is SUCCESS").arg(fileName));
}

void MainWindow::saveToDb_clicked() {
    auto isSuccess = this->saveToDb();

    if (isSuccess) {
        this->progressSaved = true;
        ui->statusBrowser->setTextColor(QColor(37, 156, 109));
        ui->statusBrowser->setText(QString("Save in database %1 is SUCCESS").arg(this->dbManager.getDbName()));
    } else {
        ui->statusBrowser->setTextColor(QColor(148, 14, 45));
        ui->statusBrowser->setText(QString("Failed while saving in database %1. Try later").arg(this->dbManager.getDbName()));
    }
}

void MainWindow::exitWithoutSave_clicked() {
    QApplication::exit(0);
}

void MainWindow::hostDetectionIsComplete(const QString& hostIP, bool isActive) {
    if (isActive) {
        ui->activeHostBrowser->append(hostIP + " is ACTIVE;\n");
    }
    auto currentPgrogressBarValue = ui->hostDetectionProgressBar->value();
    ui->hostDetectionProgressBar->setValue(currentPgrogressBarValue + 1);
}

void MainWindow::threadCompleteHostsDetection(const QList<QString>& activeHosts) {
    this->activeHosts += activeHosts;

    auto allIsComplete = true;

    foreach(const auto& thread, this->hostDetectorThreads) {
        if (!thread->isFinished()) {
            allIsComplete = false;
            break;
        }
    }

    if (allIsComplete) {
        ui->nextButton->setDisabled(false);
    }
}

void MainWindow::portDetectionIsComplete(const QString& hostIP, const quint32& port, const PortStatus& portStatus) {
    if (portStatus == PortStatus::OPEN) {
        ui->openPortsBrowser->append(hostIP + QString(":%1").arg(port) +  + " --- OPEN;\n");
    }

    auto currentPgrogressBarValue = ui->portsDetectionProgressBar->value();
    ui->portsDetectionProgressBar->setValue(currentPgrogressBarValue + 1);
}

void MainWindow::threadCompletePortsDetection(const QList<QString>& hostsPortsStatus) {
    this->portsInfo += hostsPortsStatus;
    auto allIsComplete = true;

    foreach(const auto& thread, this->portScannersThreads) {
        if (!thread->isFinished()) {
            allIsComplete = false;
            break;
        }
    }

    if (allIsComplete) {
        ui->nextButton->setDisabled(false);
    }
}

void MainWindow::aboutButton_clicked() {
    this->drowAboutPage();
}

void MainWindow::showResultsButton_clicked() {
    this->openPage(PageTypes::ResultsPage);
}
