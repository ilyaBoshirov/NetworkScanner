#ifndef PORTSCANNER_H
#define PORTSCANNER_H

#include "scanner.h"


#include <QTcpSocket>
#include <QThread>


enum PortStatus {
    OPEN,
    CLOSE
};


class PortScanner : public QThread, public Scanner  {
    Q_OBJECT

    QList<QPair<QString, QList<quint32>>> targets{}; // hosts1 - ports1, hosts2 - ports2 ...
    QMap<QString,QString> hostsOS{};  // detected active hosts Opereting System

    QMap<QPair<QString,quint32>, PortStatus> hostsPorts{};  // active hosts port status open|close|filtered
    QList<QString> hostsPortsStatus{};  // active hosts port status open|close|filtered

public:
    static const quint32 lastPort {65535};
    static const quint32 firstPort {1};

    PortScanner();
    PortScanner(const QList<QString>& activeHosts);
    PortScanner(const QList<QString>& activeHosts, const QList<quint32>& scanningPorts);
    PortScanner(const QList<QPair<QString, QList<quint32>>>& targets);

    QMap<QString,QString> getHostsOS();

    void threadDetectHostOpenPorts();
    void addHostPortStatus(const QString& host, const quint32& port, const PortStatus& status);
    QString getServiceName(const QString& ipAddress, const quint32& port);
    QString detectHostOS(const QString& ipAddress);

    static QList<quint32> getPortsRange(const quint32& first, const quint32& last);
    static QList<quint32> getDefaultRange();
    static QList<quint32> getAllPorts();
    static QList<QPair<QString, QList<quint32>>> getTargets(const QList<QString>& activeHosts);
    static QList<QPair<QString, QList<quint32>>> getTargets(const QList<QString>& activeHosts, const QList<quint32>& ports);

private:
    void run() override;

signals:
    void portIsComplete(const QString& hostIP, const quint32& port, const PortStatus& portStatus);
    void portScanningComplete(const QList<QString>& hostsPortsStatus);
};

#endif // PORTSCANNER_H
