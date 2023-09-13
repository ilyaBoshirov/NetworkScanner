#include "mainwindow.h"

#include <QApplication>
#include "scanner.h"


int main(int argc, char *argv[]) {
    Scanner scanner{};
    scanner.setNetworksFromFile("D:\\Projects\\QtProjects\\NetworkScanner\\input.txt");

    QApplication a(argc, argv);

       MainWindow w;
        w.show();
        return a.exec();
}
