#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include "dbmanager.h"
#include "portscanner.h"
#include "hostdetector.h"

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

enum PageTypes {
    WelcomePage,
    NetworkSelectingPage,
    ScanningTypePage,
    HostDetectingPage,
    PortsSelectingPage,
    PortsDetectingPage,
    ExitPage
};

enum NetworkInitializationTypes {
    Manual,
    File,
    CurrentNetwork
};

class MainWindow : public QMainWindow {
    Q_OBJECT

    Ui::MainWindow *ui; // graphics

    quint32 currentWindow{};  // current open window
    qint32 networkInitializationType{ -1 };
    bool networksIsCorrect { false };
    bool progressSaved { false };
    qint32 scanningType { -1 };
    QVector<HostDetector*> hostDetectorThreads{};  // container for threads
    QVector<PortScanner*> portScannersThreads{};  // container for threads
    QList<QString> activeHosts{};  // detect active hosts results repositories
    QList<QString> portsInfo{};  // get ports info results repositories
    DBManager dbManager{};  // object for saving in database

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // work with pages
    void openPage(const PageTypes &pageType);
    void drowWelcomePage();
    void drowNetworkSelectingPage();
    void drowScanningTypePage();
    void drowDetectingHostsPage();
    void drowPortsSelectingPage();
    void drowScanningPortsPage();
    void drowExitPage();

    // work with extra windows
    int runWarningMsgBox(const QString& text, const QString& infoText);
    void drowAboutPage();  // todo

    // functions for updating some of ui components
    void setNetworkInput();
    void setPortsInputs();

    // check correctness of user inputs and choice
    bool networkInputTypeIsCorrect();
    bool portInputTypeIsCorrect();
    bool portsIsCheck();
    bool portsStrIsCorrect();

    // functions for getting value from ui
    QList<quint32> getPortsForScan();

    // scanning
    void startActiveHostDetection();
    void startOpenPortsDetection();
    void stopScanning();
    bool scanIsRunning();

    // saving results
    QJsonObject getJsonReport();
    void saveToDb();

    // static functions
    static QList<quint32> portsStrToQList(const QString& portsStr);
    static QList<size_t> tastsForThreads(const size_t& allTasksNumber, const size_t& threadsNumber);
    static QList<QList<QPair<QString, QList<quint32>>>> splitHostsAndPortsForThread(const QList<QString>& activeHosts, const QList<quint32>& ports, const size_t& threadsNumber);

private slots:
    void exitButton_clicked();
    void nextButton_clicked();
    void prevButton_clicked();
    void radioButton_clicked();
    void fileDialogOpenButton_clicked();
    void manualNetwork_change();
    void scanTypeRadioBtn_clicked();
    void portsInputRadioBtn_clicked();
    void selectPortSpinBox_valueChanged();
    void manualPorts_change();
    // exit page
    void newScan_clicked();
    void saveToJson_clicked();
    void saveToDb_clicked();
    void exitWithoutSave_clicked();
    // for host scanner (updating progress bar and accumulate result)
    void hostDetectionIsComplete(const QString& hostIP, bool isActive);
    void threadCompleteHostsDetection(const QList<QString>& activeHosts);
    // for port scanner (updating progress bar and accumulate result)
    void portDetectionIsComplete(const QString& hostIP, const quint32& port, const PortStatus& portStatus);
    void threadCompletePortsDetection(const QList<QString>& hostsPortsStatus);
};
#endif // MAINWINDOW_H
