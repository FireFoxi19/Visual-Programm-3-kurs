#include "mainwindowkopytina.h"
#include "ui_mainwindowkopytina.h"

MainWindowKopytina::MainWindowKopytina(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowKopytina)
{
    ui->setupUi(this);
    graphicsKopytina* scene = new graphicsKopytina;
    ui->graphicsView->setScene(scene);
}

MainWindowKopytina::~MainWindowKopytina()
{
    delete ui;
}
