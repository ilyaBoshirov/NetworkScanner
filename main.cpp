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
    qInfo() << scanner.getServiceName("1", 1);
//    scanner.detectActiveHostsSYN();
//    qInfo() << scanner.getActiveHosts();
//    scanner.getCurrentNetworks();

    return 0;
}

//int main(int argc, char *argv[]) {
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
//    return a.exec();
//}
