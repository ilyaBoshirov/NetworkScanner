#include "hostdetector.h"

#include <QProcess>
#include <QTcpSocket>

HostDetector::HostDetector() : QThread(), Scanner() {
    this->scanType = ScanningTypes::Ping;
}

HostDetector::HostDetector(const ScanningTypes& scanType) : QThread(), Scanner() {
    this->scanType = scanType;
}

HostDetector::HostDetector(const QList<QString>& hosts, const ScanningTypes& scanType) : QThread(), Scanner() {
    this->scannedHosts = hosts;
    this->scanType = scanType;
}

void HostDetector::threadPingCheckHosts() {
    QString nParameter = "-n";
    QString pingCount = "1"; //(int)
    QString wParameter = "-w";
    QString pingWaitTime = "10"; //(ms)

    bool hostIsActive;

    foreach (const auto& host, this->scannedHosts) {
        auto exitCode = QProcess::execute("ping", QStringList() << host << nParameter << pingCount << wParameter << pingWaitTime);
        hostIsActive = false;
        if (exitCode == 0) {
            this->addActiveHost(host);
            hostIsActive = true;
        }
        emit this->hostIsComplete(host, hostIsActive);
    }
}

void HostDetector::threadSynCheckHosts() {
    QTcpSocket socket;
    bool hostIsActive;

    foreach (const auto& host, this->scannedHosts) {
        hostIsActive = false;

        foreach(const auto& port, this->defaultSYNPorts) {
            socket.connectToHost(host, port);
            if(socket.waitForConnected(scanTimeout)){
                socket.disconnectFromHost();
                this->addActiveHost(host);
                hostIsActive = true;
                break;
            }
            socket.disconnectFromHost();
        }

        emit this->hostIsComplete(host, hostIsActive);
    }
}

void HostDetector::threadArpCheckHosts() {
    QString ipParameter = "--ip"; //
    QString timeoutParameter = "-t";
    QString timeoutValue = "0.05";  // seconds

    bool hostIsActive;

    foreach (const auto& host, this->scannedHosts) {
        qDebug() << HostDetector::getArpScriptPath();
        auto exitCode = QProcess::execute(HostDetector::getArpScriptPath(), QStringList() << ipParameter << host << timeoutParameter << timeoutValue);
        hostIsActive = false;
        if (exitCode == 0) {
            this->addActiveHost(host);
            hostIsActive = true;
        }
        emit this->hostIsComplete(host, hostIsActive);
    }
}

void HostDetector::run() {

    if (this->scanType == ScanningTypes::Ping) {
        this->threadPingCheckHosts();
    }

    if (this->scanType == ScanningTypes::ARP) {
        this->threadArpCheckHosts();
    }

    if (this->scanType == ScanningTypes::SYN) {
        this->threadSynCheckHosts();
    }

    emit completeDetection(this->getActiveHosts());
}

QString HostDetector::getArpScriptPath() {
    return QApplication::applicationDirPath() +  HostDetector::arpScriptName;
}

QString HostDetector::getArpScriptName() {
    return HostDetector::arpScriptName;
}
