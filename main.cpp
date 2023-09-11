//#include "mainwindow.h"

#include <QApplication>

#include "dbmanager.h"
#include "scanner.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

//    DBManager dbManager{};
//    dbManager.chooseTable("test");
//    dbManager.addNewIP("192.168.1.1");

    Scanner scanner{};
//    scanner.getCurrentNetworks();

    QString ip = "255.255.34.109";

    qInfo() << Scanner::integerToIp(Scanner::ipToInteger(ip));

    return 0;
}

//int main(int argc, char *argv[]) {
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
//    return a.exec();
//}
