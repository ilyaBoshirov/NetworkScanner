#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "dbmanager.h"
#include "scanner.h"

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

enum ScanningTypes {
    Ping,
    ARP,
    SYN
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
    void drowPortsSelectingPage();
    void drowExitPage();
    void setNetworkInput();

    void startActiveHostDetection();
    void waitingHostDetection();

    bool portsIsCheck();
    bool portsStrIsCorrect();
    QList<quint32> getPortsForScan();
    void startOpenPortsDetection();
    void waitingOpenPortsDetection();

    static QList<quint32> portsStrToQList(QString portsStr);

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

private:
    Ui::MainWindow *ui;

    quint32 currentWindow{};
    qint32 networkInitializationType{ -1 };
    bool networksIsCorrect {false};
    qint32 scanningType{-1};

    Scanner scanner{};
    DBManager dbManager{};
};
#endif // MAINWINDOW_H
