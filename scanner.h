#ifndef SCANNER_H
#define SCANNER_H

#include <QList>
#include <QMap>
#include <QtNetwork/QNetworkInterface>  // QHostAddress

#include <mutex>
#include <thread>

#define scanTimeout 10

class Scanner {
    QList<QString> scannedNetworks{};
    QList<QString> scannedHosts{};
    QList<QString> activeHosts{};
    QMap<QString,QString> hostsOS{};
    QMap<QString,QString> hostsPorts{};

    size_t nextScannedHostIndex {0};
    size_t completedHostNumber {0};

    const QList<quint32> defaultSYNPorts = {22, 135, 139, 445};

    std::mutex getNextHostMutex;  // mutex for reading state
    std::mutex addActiveHostMutex;  // mutex for adding solution in structure
    std::mutex incCompletedHostNumberMutex;  // mutex for adding true in vector when thread end working

public:
    Scanner();
    Scanner(const QList<QString>& scannedNetworks);

    QList<QString> getScannedNetworks();
    QList<QString> getActiveHosts();
    QMap<QString,QString> getHostsOS();
    QMap<QString,QString> getHostsPorts();

    void setNetworksFromFile(const QString& filePath);
    void setNetworksFromQString(const QString& filePath);
    void initByCurrentNetworks();
    void initByNetworksString(QString& networksString);

    void detectActiveHostsICMP(size_t threadNumber);
    void detectActiveHostsARP(size_t threadNumber);
    void detectActiveHostsSYN(size_t threadNumber);

    void addActiveHost(QString host);
    QString getNextHost();

    size_t getCompletedHostNumber();
    void incCompletedHostNumber();
    void threadPingCheckHosts();
    void threadArpCheckHosts();
    void threadSynCheckHosts();

    size_t getAllHostNumber();

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
    static QString currentNetworksToQSting();
    static bool networkIsCorrect(QString networkString);
    static bool networksStringIsCorrect(QString networksString);
};

#endif // SCANNER_H
