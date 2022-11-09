#include "mainwindowkopytina.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindowKopytina w;
    w.setFixedSize(800,500);
    w.show();

    return a.exec();
}
