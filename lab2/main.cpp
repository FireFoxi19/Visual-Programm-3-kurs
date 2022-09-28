#include "startdialog_gluzdov_kopytina.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StartDialog_Gluzdov_Kopytina StartDialog;
    StartDialog.show();

    return a.exec();
}
