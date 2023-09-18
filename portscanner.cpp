#include "portscanner.h"


PortScanner::PortScanner() : QThread(), Scanner() {}

PortScanner::PortScanner(const QList<QString>& activeHosts) : QThread(), Scanner() {
    this->targets = PortScanner::getTargets(activeHosts);
}

PortScanner::PortScanner(const QList<QString>& activeHosts, const QList<quint32>& scanningPorts) : QThread(), Scanner() {
    this->targets = PortScanner::getTargets(activeHosts, scanningPorts);
}

PortScanner::PortScanner(const QList<QPair<QString, QList<quint32>>>& targets) : QThread(), Scanner() {
    this->targets = targets;
}

QList<quint32> PortScanner::getPortsRange(quint32 first, quint32 last) {
    QList<quint32> ports{};
    ports.resize(last - first + 1);
    std::iota(ports.begin(), ports.end(), firstPort);

    return ports;
}

QList<quint32> PortScanner::getDefaultRange() {
    return PortScanner::getPortsRange(1, 10000);
}

QList<quint32> PortScanner::getAllPorts() {
    return PortScanner::getPortsRange(PortScanner::firstPort, PortScanner::lastPort);
}

QList<QPair<QString, QList<quint32>>> PortScanner::getTargets(const QList<QString>& activeHosts) {
    return PortScanner::getTargets(activeHosts, PortScanner::getDefaultRange());
}

QList<QPair<QString, QList<quint32>>> PortScanner::getTargets(const QList<QString>& activeHosts, const QList<quint32>& ports) {
    QList<QPair<QString, QList<quint32>>> targets{};

    foreach (const auto host, activeHosts) {
        targets.append(qMakePair(host, ports));
    }

    return targets;
}

void PortScanner::threadDetectHostOpenPorts() {
    QTcpSocket socket;
    PortStatus portStatus;

    foreach (auto targetPair, this->targets) {
        foreach(auto& port, targetPair.second) {
            portStatus = PortStatus::CLOSE;
            socket.connectToHost(targetPair.first, port);

            if(socket.waitForConnected(scanTimeout)){
                socket.disconnectFromHost();
                portStatus = PortStatus::OPEN;
                this->addHostPortStatus(targetPair.first, port, portStatus);
            }
            socket.disconnectFromHost();

            emit portIsComplete(targetPair.first, port, portStatus);
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

void PortScanner::run() {
    this->threadDetectHostOpenPorts();
    emit portScanningComplete();
}

QMap<QString,QString> PortScanner::getHostsOS() {
    return this->hostsOS;
}
