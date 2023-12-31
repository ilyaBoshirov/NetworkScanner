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

QMap<QString,QString> PortScanner::getHostsOS() {
    return this->hostsOS;
}

void PortScanner::threadDetectHostOpenPorts() {
    QTcpSocket socket;
    PortStatus portStatus;

    foreach (const auto& targetPair, this->targets) {
        foreach(const auto& port, targetPair.second) {
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

void PortScanner::addHostPortStatus(const QString& host, const quint32& port, const PortStatus& status) {
    this->hostsPorts[qMakePair(host, port)] = status;

    // ip|port|status
    QString statusStr("%1|%2|%3");
    this->hostsPortsStatus.append(statusStr.arg(host).arg(port).arg(status == OPEN ? "OPEN" : "CLOSE/FILTERED"));
}

QString PortScanner::getServiceName(const QString& ipAddress, const quint32& port) {
    // todo add
    return "TODO";
}

QString PortScanner::detectHostOS(const QString& ipAddress) {
    // todo
    return "";
}

// static functions -------------------------------------------------------------------------

QList<quint32> PortScanner::getPortsRange(const quint32& first, const quint32& last) {
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

    foreach (const auto& host, activeHosts) {
        targets.append(qMakePair(host, ports));
    }

    return targets;
}

void PortScanner::run() {
    this->threadDetectHostOpenPorts();
    emit portScanningComplete(this->hostsPortsStatus);
}
