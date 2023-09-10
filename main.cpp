//#include "mainwindow.h"

#include <QApplication>
#include <QtNetwork/QNetworkInterface>
#include <QTextStream>
#include <QTcpSocket>
#include <winsock.h>
#include <string>


#define timeout 10

void arpIsHostActive(QHostAddress ipAddress) {

}

void pingIsHostActive(QHostAddress ipAddress) {

}

QMap<QString, QPair<QHostAddress, QHostAddress>> getCurrentNetworks() {
    QMap<QString, QPair<QHostAddress, QHostAddress>> ifacesAddresses;

    QTextStream cout(stdout);
    auto ifaces = QNetworkInterface::allInterfaces();

    foreach (auto iface, ifaces) {
        auto ifaceFlags = iface.flags();

        if ((bool)(ifaceFlags & iface.IsLoopBack) == true) {
            continue;
        }

        if ((bool)(ifaceFlags & iface.IsRunning) != true) {
            continue;
        }

        auto ifaceName = iface.humanReadableName();

        if (ifaceName.contains("VMware")) {
            continue;
        }

        if (ifaceName.contains("Virtualbox")) {
            continue;
        }

        auto addressEntries = iface.addressEntries();

        foreach (auto entry, addressEntries) {
            auto ifaceIP = entry.ip();

            if (QAbstractSocket::IPv4Protocol == ifaceIP.protocol()) {
                ifacesAddresses[ifaceName] = qMakePair(ifaceIP, entry.netmask());
            }
        }
    }

    return ifacesAddresses;
}


QList<quint32> getHostOpenPorts(QHostAddress ipAddress, quint32 firstPort = 1, quint32 lastPort = 10000) {
    QTcpSocket socket;

    QList<quint32> openPorts{};
    for(auto i = firstPort; i < lastPort; ++i){
        socket.connectToHost(ipAddress.toString(), i);
        if(socket.waitForConnected(timeout)){
            openPorts.append(i);
            socket.disconnectFromHost();
        }
    }

    return openPorts;
}


QString getServiceName(QHostAddress ipAddress, quint32 port) {
    QTcpSocket socket;
    socket.connectToHost(ipAddress.toString(), port);
    if(!socket.waitForConnected(timeout)){
        return "PORT CLOSE";
    }
    socket.close();

//    std::string serviceName = "NA";
//    struct servent* serviceInfo;
//    serviceInfo = getservbyport(htons(445),  NULL);
//    if(serviceInfo != NULL)
//        serviceName =  std::string(serviceInfo->s_name);


    return "";
}


int main() {

    auto networks = getCurrentNetworks();

    foreach(auto network, networks) {
        qDebug() << getHostOpenPorts(network.first);
     }

//    qDebug() << networks["Беспроводная сеть 2"].first << networks["Беспроводная сеть 2"].second;

//    auto q = getOpenPorts(networks["Ethernet"].first);

//    auto name = getServiceName(networks["Ethernet"].first, 5040);

    return 0;
}

//int main(int argc, char *argv[]) {
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
//    return a.exec();
//}
