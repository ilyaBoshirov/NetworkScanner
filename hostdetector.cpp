#include "hostdetector.h"

#include <QProcess>

HostDetector::HostDetector() : Scanner() {
    this->scanType = ScanningTypes::Ping;
}

HostDetector::HostDetector(ScanningTypes scanType) : Scanner() {
    this->scanType = scanType;
}

HostDetector::HostDetector(const QList<QString>& networks, ScanningTypes scanType) : Scanner(networks) {
    this->scanType = scanType;
}

void HostDetector::threadPingCheckHosts() {
    QString nParameter = "-n";
    QString pingCount = "1"; //(int)
    QString wParameter = "-w";
    QString pingWaitTime = "10"; //(ms)

    bool hostIsActive;

    foreach (const auto host, this->scannedHosts) {
        auto exitCode = QProcess::execute("ping", QStringList() << host <<nParameter<<pingCount<<wParameter<<pingWaitTime);
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

    foreach (const auto host, this->scannedHosts) {
        hostIsActive = false;

        foreach(const auto port, this->defaultSYNPorts) {
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

bool HostDetector::threadArpCheckHost() {

}

void HostDetector::run() const {
    this->scannedHosts = Scanner::getNetworksHosts(this->scannedHosts);

    if (this->scanType == ScanningTypes::Ping) {
        this->threadPingCheckHosts();
    }

    if (this->scanType == ScanningTypes::ARP) {
        this->threadArpCheckHosts();
    }

    if (this->scanType == ScanningTypes::SYN) {
        this->threadSynCheckHosts();
    }

    emit completeDetection(this);
}
