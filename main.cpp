//#include "mainwindow.h"

#include <QApplication>
#include <QtNetwork/QNetworkInterface>
#include <QTextStream>
#include <QTcpSocket>

#define timeout 10

void arpIsHostActive(QHostAddress ipAddress) {

}

void pingIsHostActive(QHostAddress ipAddress) {

}

QMap<QString, QPair<QHostAddress, QHostAddress>> getNetworks() {
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


QList<quint32> getOpenPorts(QHostAddress ipAddress, quint32 firstPort = 1, quint32 lastPort = 10000) {
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

    socket.write("hello[pkqopwkeqwekjqweqwnjei");
    socket.waitForBytesWritten();

    qDebug() << socket.bytesAvailable();
    qDebug() << socket.readAll();

    socket.close();



    return "";
}


int main() {
    auto networks = getNetworks();

//    auto q = getOpenPorts(networks["Ethernet"].first);

    auto name = getServiceName(networks["Ethernet"].first, 5040);

    return 0;
}

//int main(int argc, char *argv[]) {
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
//    return a.exec();
//}
