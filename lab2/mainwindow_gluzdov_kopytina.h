#ifndef MAINWINDOW_GLUZDOV_KOPYTINA_H
#define MAINWINDOW_GLUZDOV_KOPYTINA_H

#include <QMainWindow>

namespace Ui {
class MainWindow_Gluzdov_Kopytina;
}

class MainWindow_Gluzdov_Kopytina : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_Gluzdov_Kopytina(QWidget *parent = 0);
    ~MainWindow_Gluzdov_Kopytina();

private:
    Ui::MainWindow_Gluzdov_Kopytina *ui;
};

#endif // MAINWINDOW_GLUZDOV_KOPYTINA_H
