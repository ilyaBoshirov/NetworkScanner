#include "mainwindow.h"

#include <QApplication>
#include "scanner.h"


int main(int argc, char *argv[]) {
    Scanner::networksStringIsCorrect("172.16.19.0/24,192.123.0.1/11");

    QApplication a(argc, argv);

       MainWindow w;
        w.show();
        return a.exec();
}
