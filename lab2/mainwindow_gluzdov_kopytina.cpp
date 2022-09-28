#include "mainwindow_gluzdov_kopytina.h"
#include "ui_mainwindow_gluzdov_kopytina.h"

MainWindow_Gluzdov_Kopytina::MainWindow_Gluzdov_Kopytina(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_Gluzdov_Kopytina)
{
    ui->setupUi(this);
}

MainWindow_Gluzdov_Kopytina::~MainWindow_Gluzdov_Kopytina()
{
    delete ui;
}
