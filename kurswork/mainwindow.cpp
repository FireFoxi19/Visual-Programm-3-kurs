#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1365,767);

    infoWindow = new Info();

    connect(ui->pushButton_3, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_4, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_5, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_6, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_7, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_8, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_9, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_10, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_11, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_12, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_13, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_14, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_15, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_16, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_17, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_18, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_19, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_20, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_21, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_22, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_23, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_24, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_25, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_26, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_27, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_28, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_29, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_30, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_31, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_32, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_33, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_34, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_35, SIGNAL(clicked()), infoWindow, SLOT(show()));


}
void MainWindow::on_pushButton_3_clicked()
{
   infoWindow->model->setFilter("id=1");
}

void MainWindow::on_pushButton_4_clicked()
{
    infoWindow->model->setFilter("id=1");
}

void MainWindow::on_pushButton_5_clicked()
{
    infoWindow->model->setFilter("id=2");
}

void MainWindow::on_pushButton_6_clicked()
{
    infoWindow->model->setFilter("id=3");
}

void MainWindow::on_pushButton_7_clicked()
{
    infoWindow->model->setFilter("id=4");
}

void MainWindow::on_pushButton_8_clicked()
{
    infoWindow->model->setFilter("id=5");
}

void MainWindow::on_pushButton_9_clicked()
{
    infoWindow->model->setFilter("id=6");
}

void MainWindow::on_pushButton_10_clicked()
{
    infoWindow->model->setFilter("id=7");
}

void MainWindow::on_pushButton_11_clicked()
{
    infoWindow->model->setFilter("id=8");
}

void MainWindow::on_pushButton_12_clicked()
{
    infoWindow->model->setFilter("id=9");
}

void MainWindow::on_pushButton_13_clicked()
{
    infoWindow->model->setFilter("id=10");
}

void MainWindow::on_pushButton_14_clicked()
{
    infoWindow->model->setFilter("id=11");
}


void MainWindow::on_pushButton_15_clicked()
{
    infoWindow->model->setFilter("id=12");
}

void MainWindow::on_pushButton_16_clicked()
{
    infoWindow->model->setFilter("id=13");
}

void MainWindow::on_pushButton_17_clicked()
{
    infoWindow->model->setFilter("id=14");
}

void MainWindow::on_pushButton_18_clicked()
{
    infoWindow->model->setFilter("id=15");
}

void MainWindow::on_pushButton_19_clicked()
{
    infoWindow->model->setFilter("id=16");
}

void MainWindow::on_pushButton_20_clicked()
{
    infoWindow->model->setFilter("id=17");
}

void MainWindow::on_pushButton_21_clicked()
{
    infoWindow->model->setFilter("id=18");
}

void MainWindow::on_pushButton_22_clicked()
{
    infoWindow->model->setFilter("id=19");
}

void MainWindow::on_pushButton_23_clicked()
{
    infoWindow->model->setFilter("id=20");
}

void MainWindow::on_pushButton_24_clicked()
{
    infoWindow->model->setFilter("id=21");
}

void MainWindow::on_pushButton_25_clicked()
{
    infoWindow->model->setFilter("id=22");
}

void MainWindow::on_pushButton_26_clicked()
{
    infoWindow->model->setFilter("id=23");
}

void MainWindow::on_pushButton_27_clicked()
{
    infoWindow->model->setFilter("id=24");
}

void MainWindow::on_pushButton_28_clicked()
{
    infoWindow->model->setFilter("id=25");
}

void MainWindow::on_pushButton_29_clicked()
{
    infoWindow->model->setFilter("id=26");
}

void MainWindow::on_pushButton_30_clicked()
{
    infoWindow->model->setFilter("id=27");
}

void MainWindow::on_pushButton_31_clicked()
{
    infoWindow->model->setFilter("id=28");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_32_clicked()
{
    infoWindow->model->setFilter("id=29");
}

void MainWindow::on_pushButton_33_clicked()
{
    infoWindow->model->setFilter("id=30");
}

void MainWindow::on_pushButton_34_clicked()
{
    infoWindow->model->setFilter("id=31");
}

void MainWindow::on_pushButton_35_clicked()
{
    infoWindow->model->setFilter("id=32");
}

void MainWindow::on_pushButton_36_clicked()
{
    infoWindow->model->setFilter("id=33");
}

void MainWindow::on_pushButton_37_clicked()
{
    infoWindow->model->setFilter("id=34");
}

void MainWindow::on_pushButton_38_clicked()
{
    infoWindow->model->setFilter("id=35");
}

void MainWindow::on_pushButton_39_clicked()
{
    infoWindow->model->setFilter("id=36");
}
