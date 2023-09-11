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
    QMap<QString,QString> hostsPorst{};

public:
    Scanner();

    void detectActiveHostsICMP();
    void detectActiveHostsARP();
    void detectActiveHostsACK();

    QList<quint32> detectHostOpenPorts(QHostAddress ipAddress, QList<quint32> ports);
    QString getServiceName(QString ipAddress, quint32 port);

    static QMap<QString, QString> getCurrentNetworks();
    static QMap<QString, QString> getCurrentIPs();
    static QString getNetwork(QHostAddress ip, QHostAddress netmask);
    static QList<QString> getNetworkIPs(QString network);
    static bool isPhysicalInterface(QNetworkInterface interface);
    static quint32 ipToInteger(QString stringIP);
    static QString integerToIp(quint32 integerIP);
};

#endif // SCANNER_H
