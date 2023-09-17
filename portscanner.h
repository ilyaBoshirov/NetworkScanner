#ifndef PORTSCANNER_H
#define PORTSCANNER_H

#include "scanner.h"
#include <QTcpSocket>

enum PortStatus {
    OPEN,
    CLOSE
};


class PortScanner : public Scanner {
    QList<quint32> scanningPorts{};
    QMap<QString,QString> hostsOS{};  // detected active hosts Opereting System

    QMap<QPair<QString,quint32>, PortStatus> hostsPorts{};  // active hosts port status open|close|filtered
    QList<QString> hostsPortsStatus{};  // active hosts port status open|close|filtered


public:
    static const quint32 lastPort {65535};
    static const quint32 firstPort {1};

    PortScanner();
    PortScanner(QList<QString> activeHosts);
    PortScanner(QList<QString> activeHosts, QList<quint32> scanningPorts);

    void initByAllPorts();
    void threadDetectHostOpenPorts();
    void addHostPortStatus(QString host, quint32 port, PortStatus status);

    QString getServiceName(QString ipAddress, quint32 port);

    void run() const = 0;

    QMap<QString,QString> getHostsOS();

signals:
    void portIsComplete(QString hostIP, quint32 port, PortStatus portStatus);
    void portScanningComplete(PortScanner* scanner);
};

#endif // PORTSCANNER_H
