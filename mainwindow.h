#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

enum PageTypes {
    welcomePage,
    hostSelectingPage,
    hostDetectingPage
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void exitButton_clicked();
    void nextButton_clicked();
    void prevButton_clicked();

private:
    Ui::MainWindow *ui;

    quint32 currentWindow = PageTypes::welcomePage;
};
#endif // MAINWINDOW_H
