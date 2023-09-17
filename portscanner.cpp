#include "portscanner.h"

PortScanner::PortScanner() : Scanner() {
    this->activeHosts = {};
    this->initByAllPorts();
}

PortScanner::PortScanner(QList<QString> activeHosts) : Scanner() {
    this->activeHosts = activeHosts;
    this->initByAllPorts();
}

PortScanner::PortScanner(QList<QString> activeHosts, QList<quint32> scanningPorts) : Scanner() {
    this->activeHosts = activeHosts;
    this->scanningPorts = scanningPorts;
}

void PortScanner::initByAllPorts() {
    QList<quint32> ports{};
    ports.resize(lastPort - firstPort + 1);
    std::iota(ports.begin(), ports.end(), firstPort);

    this->scanningPorts = ports{};
}

void PortScanner::threadDetectHostOpenPorts() {
    QTcpSocket socket;
    PortStatus portStatus;

    foreach (const auto host, this->activeHosts) {
        foreach(const auto& port, this->scanningPorts) {
            portStatus = PortStatus::CLOSE;
            socket.connectToHost(host, port);

            if(socket.waitForConnected(scanTimeout)){
                socket.disconnectFromHost();
                portStatus = PortStatus::OPEN;
                this->addHostPortStatus(host, port, portStatus);
            }
            socket.disconnectFromHost();

            emit portIsComplete(host, port, portStatus);
        }
    }
}

void PortScanner::addHostPortStatus(QString host, quint32 port, PortStatus status) {
    this->hostsPorts[qMakePair(host, port)] = status;

    QString statusStr("Host %1 port %2 is %3");
    this->hostsPortsStatus.append(statusStr.arg(host).arg(port).arg(status == OPEN ? "OPEN" : "CLOSE/FILTERED"));
}

QString PortScanner::getServiceName(QString ipAddress, quint32 port) {
    QTcpSocket socket;

    socket.connectToHost("172.16.16.192", 22);
    if(socket.waitForConnected(scanTimeout)){
        qDebug() << socket.peerName();
        qDebug() << QString::fromUtf8(socket.read(1024));
    }
    socket.disconnectFromHost();

    return "TODO";
}

void PortScanner::run() const {
    this->threadDetectHostOpenPorts();
    emit portIsComplete(host, port, portStatus);
}

QMap<QString,QString> Scanner::getHostsOS() {
    return this->hostsOS;
}
