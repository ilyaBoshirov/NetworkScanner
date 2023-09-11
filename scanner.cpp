#include "scanner.h"

#include <QTcpSocket>

Scanner::Scanner() {}


void Scanner::detectActiveHostsICMP() {

}
void Scanner::detectActiveHostsARP() {

}
void Scanner::detectActiveHostsACK() {

}

QString getServiceName(QString ipAddress, quint32 port) {

    return "TODO";
}

QList<quint32> Scanner::detectHostOpenPorts(QHostAddress ipAddress, QList<quint32> ports) {
    QTcpSocket socket;

    QList<quint32> openPorts{};

    foreach (auto port, ports) {
        socket.connectToHost(ipAddress.toString(), port);
        if(socket.waitForConnected(timeout)){
            openPorts.append(port);
            socket.disconnectFromHost();
        }
    }

    return openPorts;
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

QMap<QString, QString> Scanner::getCurrentNetworks() {
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
                ifacesAddresses[iface.humanReadableName()] = getNetwork(ifaceIP, entry.netmask());
            }
        }
    }

    qDebug() << ifacesAddresses;

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

    return QList<QString>{};
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
