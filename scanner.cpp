#include "scanner.h"

#include <QTcpSocket>
#include <QProcess>
#include <QFile>
#include <QTextStream>
#include <QRegularExpression>

#include <thread>


// TODO

void Scanner::detectActiveHostsARP(size_t threadNumber) {

}

QString Scanner::getServiceName(QString ipAddress, quint32 port) {
    QTcpSocket socket;

    socket.connectToHost("172.16.16.192", 22);
    if(socket.waitForConnected(scanTimeout)){
        qDebug() << socket.peerName();
        qDebug() << QString::fromUtf8(socket.read(1024));
    }
    socket.disconnectFromHost();

    return "TODO";
}

// COMPLETE

Scanner::Scanner() {
//    this->scannedNetworks = getCurrentNetworks();
}

Scanner::Scanner(const QList<QString>& scannedNetworks) {
    this->scannedNetworks = scannedNetworks;
}

QList<QString> Scanner::getScannedNetworks() {
    return this->scannedNetworks;
}

QList<QString> Scanner::getActiveHosts() {
    std::lock_guard<std::mutex> lg(this->addActiveHostMutex);
    return this->activeHosts;
}

QList<QString> Scanner::getHostsPortsStatus() {
    std::lock_guard<std::mutex> lg(this->addActiveHostMutex);
    return this->hostsPortsStatus;
}

QMap<QString,QString> Scanner::getHostsOS() {
    return this->hostsOS;
}

QMap<QPair<QString,quint32>, bool> Scanner::getHostsPorts() {
    return this->hostsPorts;
}

void Scanner::setNetworksFromFile(const QString& filePath) {
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Error open file" << filePath;
        return;
    }

    QList<QString> networks{};
    QRegularExpression re("(\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}\\.\\d{1,3})/(\\d{1,2})");
    QRegularExpressionMatchIterator matchIterator;
    QRegularExpressionMatch match;
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        matchIterator = re.globalMatch(line);

        while (matchIterator.hasNext()) {
            match = matchIterator.next();
            QString net = match.captured();
            if(networkIsCorrect(net)) {
                networks.append(net);
            }
        }

    }
    qDebug() << networks;
    this->scannedNetworks = networks;
}

void Scanner::initByCurrentNetworks() {
    this->scannedNetworks = getCurrentNetworks();
}

void Scanner::initByNetworksString(QString& networksString) {
    auto networks = networksString.split(QRegularExpression("[,;\r\n\t ]+"));

    this->scannedNetworks.clear();
    foreach (auto network, networks) {
        if (!networkIsCorrect(network)) {
            this->scannedNetworks.append(network);
        }
    }
}

QList<QString> Scanner::getNetworksHosts() {
    QList<QString> networksHosts{};

    foreach (auto network, this->scannedNetworks) {
        networksHosts += getNetworkIPs(network);
    }

    return networksHosts;
}

void Scanner::incCompletedHostNumber() {
    std::lock_guard<std::mutex> lg(this->incCompletedHostNumberMutex);
    ++this->completedHostNumber;
}

size_t Scanner::getCompletedHostNumber() {
    std::lock_guard<std::mutex> lg(this->incCompletedHostNumberMutex);
    return this->completedHostNumber;
}

void Scanner::detectActiveHostsICMP(size_t threadNumber) {
    this->scannedHosts = this->getNetworksHosts();

    if (threadNumber == 0 || threadNumber == 1) {
        std::thread worker(&Scanner::threadPingCheckHosts, this);
        worker.detach();
    }
    else {
        for (auto i{ 0 }; i < threadNumber; ++i) {
            std::thread worker(&Scanner::threadPingCheckHosts, this);
            worker.detach();
        }
    }
}

void Scanner::threadPingCheckHosts() {
    QString nParameter = "-n";
    QString pingCount = "1"; //(int)
    QString wParameter = "-w";
    QString pingWaitTime = "10"; //(ms)

    while (true) {
        auto host = this->getNextHost();
        if (host == "") {
            break;
        }

        auto exitCode = QProcess::execute("ping", QStringList() << host <<nParameter<<pingCount<<wParameter<<pingWaitTime);

        if (exitCode == 0) {
            this->addActiveHost(host);
//            emit this->hostIsComplete(host, true);
        } else {
//            emit this->hostIsComplete(host, false);
        }

        this->incCompletedHostNumber();
    }
}

void Scanner::detectActiveHostsSYN(size_t threadNumber) {
    this->scannedHosts = this->getNetworksHosts();

    if (threadNumber == 0 || threadNumber == 1) {
        std::thread worker(&Scanner::threadSynCheckHosts, this);
        worker.detach();
    }
    else {
        for (auto i{ 0 }; i < threadNumber; ++i) {
            std::thread worker(&Scanner::threadSynCheckHosts, this);
            worker.detach();
        }
    }
}

void Scanner::threadSynCheckHosts() {
    QTcpSocket socket;

    bool hostIsActive;
    while (true) {
        auto host = this->getNextHost();
        if (host == "") {
            break;
        }
        hostIsActive = false;

        foreach(const auto& port, this->defaultSYNPorts) {
            socket.connectToHost(host, port);
            if(socket.waitForConnected(scanTimeout)){
                socket.disconnectFromHost();
                this->addActiveHost(host);
                hostIsActive = true;

                break;
            }
            socket.disconnectFromHost();
        }

        emit this->hostIsComplete(host, hostIsActive);

        this->incCompletedHostNumber();
    }
}

QString Scanner::getNextHost() {
    std::lock_guard<std::mutex> lg(this->getNextHostMutex);
    return (this-> nextScannedHostIndex < this->scannedHosts.size() ? this->scannedHosts.at(this-> nextScannedHostIndex++) : "");
}

void Scanner::addActiveHost(QString host) {
    std::lock_guard<std::mutex> lg(this->addActiveHostMutex);
    this->activeHosts.append(host);
}

bool threadArpCheckHost();

void Scanner::detectActiveHostsOpenPorts(QList<quint32> ports, size_t threadNumber) {
    this->nextScannedHostIndex = 0;
    this->completedHostNumber = 0;

    if (threadNumber == 0 || threadNumber == 1) {
        std::thread worker(&Scanner::threadDetectHostOpenPorts, this, std::ref(ports));
        worker.detach();
    }
    else {
        for (auto i{ 0 }; i < threadNumber; ++i) {
            std::thread worker(&Scanner::threadDetectHostOpenPorts, this, std::ref(ports));
            worker.detach();
        }
    }
}

QString Scanner::getNextActiveHost() {
    std::lock_guard<std::mutex> lg(this->getNextHostMutex);
    return (this-> nextScannedHostIndex < this->activeHosts.size() ? this->activeHosts.at(this-> nextScannedHostIndex++) : "");
}

void Scanner::addHostPortStatus(QString host, quint32 port, bool status) {
    std::lock_guard<std::mutex> lg(this->addActiveHostMutex);
    this->hostsPorts[qMakePair(host, port)] = true;

    QString statusStr("Host %1 port %2 is %3");
    this->hostsPortsStatus.append(statusStr.arg(host).arg(port).arg(status ? "OPEN" : "CLOSE/FILTERED"));
}

void Scanner::threadDetectHostOpenPorts(QList<quint32>& ports) {
    QList<quint32> openPorts{};

    QTcpSocket socket;

    while (true) {
        auto host = this->getNextActiveHost();
        if (host == "") {
            break;
        }

        foreach(const auto& port, ports) {
            socket.connectToHost(host, port);
            if(socket.waitForConnected(scanTimeout)){
                socket.disconnectFromHost();
                this->addHostPortStatus(host, port, true);
            }
            socket.disconnectFromHost();
        }

        this->incCompletedHostNumber();
    }
}

size_t Scanner::getAllHostNumber() {
    size_t allHostNumber{0};

    if (this->scannedNetworks.size() == 0) {
        return allHostNumber;
    }

    foreach (auto net, this->getScannedNetworks()) {
        auto mask = net.split("/")[1].toInt();

        allHostNumber += size_t(1 << (32 - mask)) - 2;
    }
    return allHostNumber;
}

// static methods -------------------------------------------------------------------------------------

QMap<QString, QString> Scanner::getPhysicalInterfaces() {
    QMap<QString, QString> ifacesAddresses{};
    auto ifaces = QNetworkInterface::allInterfaces();

    foreach (auto iface, ifaces) {

        if (!isPhysicalInterface(iface)) {
            continue;
        }

        auto addressEntries = iface.addressEntries();

        foreach (auto entry, addressEntries) {
            auto ifaceIP = entry.ip();

            if (QAbstractSocket::IPv4Protocol == ifaceIP.protocol()) {
                ifacesAddresses[iface.humanReadableName()] = getNetwork(ifaceIP, entry.netmask());
            }
        }
    }

    return ifacesAddresses;
}

QList<QString> Scanner::getCurrentNetworks() {
    QList<QString> networks{};
    auto ifaces = QNetworkInterface::allInterfaces();

    foreach (auto iface, ifaces) {

        if (!isPhysicalInterface(iface)) {
            continue;
        }

        auto addressEntries = iface.addressEntries();

        foreach (auto entry, addressEntries) {
            auto ifaceIP = entry.ip();

            if (QAbstractSocket::IPv4Protocol == ifaceIP.protocol()) {
                networks.append(getNetwork(ifaceIP, entry.netmask()));
            }
        }
    }

    return networks;
}

QMap<QString, QString> Scanner::getCurrentIPs() {
    QMap<QString, QString> ifacesAddresses;

    auto ifaces = QNetworkInterface::allInterfaces();

    foreach (auto iface, ifaces) {

        if (!isPhysicalInterface(iface)) {
            continue;
        }

        auto addressEntries = iface.addressEntries();

        foreach (auto entry, addressEntries) {
            auto ifaceIP = entry.ip();

            if (QAbstractSocket::IPv4Protocol == ifaceIP.protocol()) {
                ifacesAddresses[iface.humanReadableName()] = ifaceIP.toString();
            }
        }
    }

    return ifacesAddresses;
}

QString Scanner::getNetwork(QHostAddress ip, QHostAddress netmask) {
    auto ipOctets = ip.toString().split(".");
    auto netmaskOctets = netmask.toString().split(".");

    QString network{""};
    network.append(QString::number(ipOctets[0].toInt() & netmaskOctets[0].toInt()));
    network.append(".");

    network.append(QString::number(ipOctets[1].toInt() & netmaskOctets[1].toInt()));
    network.append(".");

    network.append(QString::number(ipOctets[2].toInt() & netmaskOctets[2].toInt()));
    network.append(".");

    network.append(QString::number(ipOctets[3].toInt() & netmaskOctets[3].toInt()));
    network.append("/");

    quint32 digitNetmask = 0;

    foreach (auto octet, netmaskOctets) {
        quint32 dOctet = octet.toInt();
        for(auto i = 7; i >= 0; --i) {
            if (((dOctet >> i) & 0x1) == 1) {
                ++digitNetmask;
            }
            else {
                break;
            }
        }
    }

    network.append(QString::number(digitNetmask));

    return network;
}

QList<QString> Scanner::getNetworkIPs(QString network) {
    // network in format "192.168.0.0/24"

    auto networkParts = network.split("/");

    auto start = ipToInteger(networkParts[0]);
    auto mask = networkParts[1].toInt();

    if (mask == 32) {
        return QList<QString>{};
    }

    auto hostNumber = (1 << (32 - networkParts[1].toInt())) - 1;

    QList<QString> hosts{};
    for(auto i{1}; i < hostNumber; ++i) {
        hosts.append(integerToIp(start + i));
    }

    return hosts;
}

bool Scanner::isPhysicalInterface(QNetworkInterface interface) {
    auto ifaceFlags = interface.flags();

    if ((bool)(ifaceFlags & interface.IsLoopBack) == true) {
        return false;
    }

    if ((bool)(ifaceFlags & interface.IsRunning) != true) {
        return false;
    }

    auto ifaceName = interface.humanReadableName();

    if (ifaceName.contains("VMware")) {
        return false;
    }

    if (ifaceName.contains("Virtualbox")) {
        return false;
    }

    return true;
}

quint32 Scanner::ipToInteger(QString stringIP) {
    auto ipOctets = stringIP.split(".");

    quint32 integerIP {0};

    foreach (auto octet, ipOctets) {
        integerIP = integerIP << 8;
        integerIP ^= octet.toInt();
    }

    return integerIP;
}

QString Scanner::integerToIp(quint32 integerIP) {
    QString stringIP{""};

    stringIP.append(QString::number((integerIP >> 24) & 0xff));
    stringIP.append(".");

    stringIP.append(QString::number((integerIP >> 16) & 0xff));
    stringIP.append(".");

    stringIP.append(QString::number((integerIP >> 8) & 0xff));
    stringIP.append(".");

    stringIP.append(QString::number(integerIP & 0xff));

    return stringIP;
}

QString Scanner::currentNetworksToQSting() {
    auto currentNetworks = getCurrentNetworks();

    QString networksString{""};

    foreach (const auto network, currentNetworks) {
        networksString.append(network);
        networksString.append(";");
    }

    return networksString;
}

bool Scanner::networkIsCorrect(QString networkString) {
    auto networkParts = networkString.split("/");

    if (networkParts.size() != 2) {
        return false;
    }

    auto ipOctets = networkParts[0].split(".");
    auto mask = networkParts[1].toInt();

    if (mask > 32 || mask < 1) {
        return false;
    }

    if (ipOctets.size() != 4) {
        return false;
    }

    foreach (auto octet, ipOctets) {
        auto intOctet = octet.toInt();

        if (intOctet > 255 || intOctet < 0) {
            return false;
        }
    }

    return true;
}

bool Scanner::networksStringIsCorrect(QString networksString) {

    auto networks = networksString.split(QRegularExpression("[,;\r\n\t ]+"));

    foreach (auto network, networks) {
        if (!networkIsCorrect(network)) {
            return false;
        }
    }

    return true;
}

// -------------------------------------------------------------------------------------


//QString getServiceName(QHostAddress ipAddress, quint32 port) {
//    QTcpSocket socket;
//    socket.connectToHost(ipAddress.toString(), port);
//    if(!socket.waitForConnected(timeout)){
//        return "PORT CLOSE";
//    }
//    socket.close();

//    //    std::string serviceName = "NA";
//    //    struct servent* serviceInfo;
//    //    serviceInfo = getservbyport(htons(445),  NULL);
//    //    if(serviceInfo != NULL)
//    //        serviceName =  std::string(serviceInfo->s_name);


//    return "";
//}
