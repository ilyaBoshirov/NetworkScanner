#ifndef SCANNER_H
#define SCANNER_H

#include <QList>
#include <QMap>
#include <QtNetwork/QNetworkInterface>  // QHostAddress

#define timeout 10

class Scanner {
    QList<QString> scannedNetworks{};
    QList<QString> activeHosts{};
    QMap<QString,QString> hostsOS{};
    QMap<QString,QString> hostsPorts{};

    const QList<quint32> defaultSYNPorts = {22, 135, 139, 445};

public:
    Scanner();
    Scanner(const QList<QString>& scannedNetworks);

    QList<QString> getScannedNetworks();
    QList<QString> getActiveHosts();
    QMap<QString,QString> getHostsOS();
    QMap<QString,QString> getHostsPorts();

    void detectActiveHostsICMP();
    void detectActiveHostsARP();
    void detectActiveHostsSYN();

    QList<quint32> detectHostOpenPorts(QHostAddress ipAddress, QList<quint32> ports);
    QString getServiceName(QString ipAddress, quint32 port);
    QList<QString> getNetworksHosts();

    static QMap<QString, QString> getPhysicalInterfaces();
    static QList<QString> getCurrentNetworks();
    static QMap<QString, QString> getCurrentIPs();
    static QString getNetwork(QHostAddress ip, QHostAddress netmask);
    static QList<QString> getNetworkIPs(QString network);
    static bool isPhysicalInterface(QNetworkInterface interface);
    static quint32 ipToInteger(QString stringIP);
    static QString integerToIp(quint32 integerIP);
};

#endif // SCANNER_H
