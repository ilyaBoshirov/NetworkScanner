#ifndef HOSTDETECTOR_H
#define HOSTDETECTOR_H

#include "scanner.h"

#include <QApplication>
#include <QDir>
#include <QThread>


enum ScanningTypes {
    Ping,
    ARP,
    SYN
};

class HostDetector : public QThread, public Scanner  {
    Q_OBJECT

    const QList<quint32> defaultSYNPorts = {22, 135, 139, 445};
    ScanningTypes scanType{Ping};
    inline static const QString arpScriptName{QString(QDir::separator()) + "scripts" + QString(QDir::separator()) + "ARPConnector.exe"};

public:
    HostDetector();
    HostDetector(const ScanningTypes& scanType);
    HostDetector(const QList<QString>& hosts, const ScanningTypes& scanType);

    static QString getArpScriptPath();
    static QString getArpScriptName();

    void threadPingCheckHosts();
    void threadArpCheckHosts();
    void threadSynCheckHosts();

private:
    void run() override;

signals:
    void hostIsComplete(const QString& hostIP, bool isActive);
    void completeDetection(const QList<QString>& activeHosts);
};

#endif // HOSTDETECTOR_H
