#ifndef HOSTDETECTOR_H
#define HOSTDETECTOR_H

#include "scanner.h"

enum ScanningTypes {
    Ping,
    ARP,
    SYN
};

class HostDetector : public Scanner {
    const QList<quint32> defaultSYNPorts = {22, 135, 139, 445};

    ScanningTypes scanType{Ping};
public:
    HostDetector();
    HostDetector(ScanningTypes scanType);
    HostDetector(const QList<QString>& networks, ScanningTypes scanType);

    void threadPingCheckHosts();
    void threadArpCheckHosts();
    void threadSynCheckHosts();

    void run() const = 0;

signals:
    void hostIsComplete(QString hostIP, bool isActive);
    void completeDetection(HostDetector *detector);
};

#endif // HOSTDETECTOR_H
