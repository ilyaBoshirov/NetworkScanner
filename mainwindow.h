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

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void openPage(const PageTypes &pageType);
    void drowWelcomePage();
    void drowNetworkSelectingPage();
    void drowScanningTypePage();
    void drowDetectingHostsPage();
    void drowPortsSelectingPage();
    void drowScanningPortsPage();
    void drowExitPage();
    int runWarningMsgBox(QString text, QString infoText);
    void setNetworkInput();
    void setPortsInputs();
    bool networkInputTypeIsCorrect();
    bool portInputTypeIsCorrect();

    void startActiveHostDetection();
    void waitingHostDetection();

    bool portsIsCheck();
    bool portsStrIsCorrect();
    QList<quint32> getPortsForScan();
    void startOpenPortsDetection();
    void waitingOpenPortsDetection();

    void stopScanning();
    bool scanIsRunning();

    QJsonObject getJsonReport();

    static QList<quint32> portsStrToQList(QString portsStr);
    static QList<size_t> tastsForThreads(size_t allTasksNumber, size_t threadsNumber);
    static QList<QList<QPair<QString, QList<quint32>>>> splitHostsAndPortsForThread(QList<QString> activeHosts, QList<quint32> ports, size_t threadsNumber);

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

    // for host scanner
    void hostDetectionIsComplete(QString hostIP, bool isActive);
    void threadCompleteHostsDetection(QList<QString> activeHosts);

    // for port scanner
    void portDetectionIsComplete(QString hostIP, quint32 port, PortStatus portStatus);
    void threadCompletePortsDetection(QList<QString> hostsPortsStatus);

    // exit page
    void newScan_clicked();
    void saveToJson_clicked();
    void saveToDb_clicked();
    void exitWithoutSave_clicked();

private:
    Ui::MainWindow *ui;

    quint32 currentWindow{};
    qint32 networkInitializationType{ -1 };
    bool networksIsCorrect {false};
    qint32 scanningType{-1};

    QVector<HostDetector*> hostDetectorThreads{};
    QVector<PortScanner*> portScannersThreads{};

    // results repositories
    QList<QString> activeHosts{};
    QList<QString> portsInfo{};
    // saving
    DBManager dbManager{};
};
#endif // MAINWINDOW_H
