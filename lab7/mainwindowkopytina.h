#ifndef MAINWINDOWKOPYTINA_H
#define MAINWINDOWKOPYTINA_H

#include <QMainWindow>
#include "graphicskopytina.h"

namespace Ui {
class MainWindowKopytina;
}

class MainWindowKopytina : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowKopytina(QWidget *parent = nullptr);
    ~MainWindowKopytina();

private:
    Ui::MainWindowKopytina *ui;
};

#endif // MAINWINDOWKOPYTINA_H
