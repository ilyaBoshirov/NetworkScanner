#ifndef SCANNER_H
#define SCANNER_H

#include <QList>
#include <QMap>
#include <QtNetwork/QNetworkInterface>  // QHostAddress

#define scanTimeout 10

class Scanner {

    QList<QString> scannedNetworks{};  // networks for detection

protected:
    QList<QString> scannedHosts{};  // hosts for detection
    QList<QString> activeHosts{};  // detected active hosts

public:

    Scanner();
    Scanner(const QList<QString>& scannedNetworks);

    QList<QString> getScannedNetworks();
    QList<QString> getActiveHosts();

    void addActiveHost(QString hostIp);

    void initByCurrentNetworks();
    void initByFile(const QString& filePath);
    void initByNetworksString(QString& networksString);
    size_t getAllHostNumber();

    virtual void run() = 0;

    // static methods
    static QList<QString> getNetworksHosts(QList<QString> networks);
    static QList<QString> getNetworksFromString(QString& networksString);
    static QList<QString> getNetworksFromFile(const QString& filePath);
    static QMap<QString, QString> getPhysicalInterfaces();  // get all interfase physical
    static QList<QString> getCurrentNetworks();    // PC networks
    static QMap<QString, QString> getCurrentIPs();      // PC IP addresses
    static QString getNetwork(QHostAddress ip, QHostAddress netmask);  // ip + mask = ip/mask
    static QList<QString> getNetworkIPs(QString network);  // get all hosts ip of network
    static bool isPhysicalInterface(QNetworkInterface interface);   // detect is interfase physical
    static quint32 ipToInteger(QString stringIP);  // convert ip str to integer
    static QString integerToIp(quint32 integerIP);  // convert to integer ip str
    static QString currentNetworksToQSting();  // convert current networks to str
    static bool networkIsCorrect(QString networkString);  // check is network correct
    static bool networksStringIsCorrect(QString networksString);  // check array of networks for correctness
    static bool ipInNetwork(QString ip, QString network);  // check if ip is in network
};

#endif // SCANNER_H
