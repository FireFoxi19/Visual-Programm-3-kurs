#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1365,767);

    infoWindow = new Info();
    testMe = new TestMetals();
    testNoMe = new TestNoMetals();

    QMenu* menu = new QMenu("&Меню");
    menu->addAction("&Справка", this, SLOT(OpenHint()), QKeySequence("CTRL+O"));
    menu->addAction("&Выход", this, SLOT(close()), QKeySequence("CTRL+S"));
    menuBar()->addMenu(menu);
    windowhint = new hint();
    connect(ui->pushButton_85, SIGNAL(clicked()), testMe, SLOT(show()));
    connect(ui->pushButton_86, SIGNAL(clicked()), testNoMe, SLOT(show()));
    connect(ui->pushButton_2, SIGNAL(clicked()), infoWindow, SLOT(show()));
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
    connect(ui->pushButton_36, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_37, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_38, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_39, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_40, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_41, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_42, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_43, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_44, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_45, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_46, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_47, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_48, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_49, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_50, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_51, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_52, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_53, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_54, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_55, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_56, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_57, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_58, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_59, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_60, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_61, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_62, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_63, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_64, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_65, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_66, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_67, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_68, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_69, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_70, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_71, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_72, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_73, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_74, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_75, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_76, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_77, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_78, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_79, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_80, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_81, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_82, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_83, SIGNAL(clicked()), infoWindow, SLOT(show()));
    connect(ui->pushButton_84, SIGNAL(clicked()), infoWindow, SLOT(show()));

}
void MainWindow::OpenHint()
{

    windowhint->show();
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

void MainWindow::on_pushButton_40_clicked()
{
    infoWindow->model->setFilter("id=37");
}

void MainWindow::on_pushButton_41_clicked()
{
    infoWindow->model->setFilter("id=38");
}

void MainWindow::on_pushButton_42_clicked()
{
    infoWindow->model->setFilter("id=39");
}

void MainWindow::on_pushButton_43_clicked()
{
    infoWindow->model->setFilter("id=40");
}

void MainWindow::on_pushButton_44_clicked()
{
    infoWindow->model->setFilter("id=41");
}

void MainWindow::on_pushButton_45_clicked()
{
    infoWindow->model->setFilter("id=42");
}

void MainWindow::on_pushButton_46_clicked()
{
    infoWindow->model->setFilter("id=43");
}

void MainWindow::on_pushButton_47_clicked()
{
    infoWindow->model->setFilter("id=44");
}

void MainWindow::on_pushButton_48_clicked()
{
    infoWindow->model->setFilter("id=45");
}

void MainWindow::on_pushButton_49_clicked()
{
    infoWindow->model->setFilter("id=46");
}

void MainWindow::on_pushButton_50_clicked()
{
    infoWindow->model->setFilter("id=47");
}

void MainWindow::on_pushButton_51_clicked()
{
    infoWindow->model->setFilter("id=48");
}

void MainWindow::on_pushButton_52_clicked()
{
    infoWindow->model->setFilter("id=49");
}

void MainWindow::on_pushButton_53_clicked()
{
    infoWindow->model->setFilter("id=50");
}

void MainWindow::on_pushButton_54_clicked()
{
    infoWindow->model->setFilter("id=51");
}

void MainWindow::on_pushButton_55_clicked()
{
    infoWindow->model->setFilter("id=52");
}

void MainWindow::on_pushButton_56_clicked()
{
    infoWindow->model->setFilter("id=53");
}

void MainWindow::on_pushButton_57_clicked()
{
    infoWindow->model->setFilter("id=54");
}

void MainWindow::on_pushButton_58_clicked()
{
    infoWindow->model->setFilter("id=55");
}

void MainWindow::on_pushButton_59_clicked()
{
    infoWindow->model->setFilter("id=56");
}

void MainWindow::on_pushButton_60_clicked()
{
    infoWindow->model->setFilter("id=57");
}

void MainWindow::on_pushButton_61_clicked()
{
    infoWindow->model->setFilter("id=58");
}

void MainWindow::on_pushButton_62_clicked()
{
    infoWindow->model->setFilter("id=59");
}

void MainWindow::on_pushButton_63_clicked()
{
    infoWindow->model->setFilter("id=60");
}

void MainWindow::on_pushButton_64_clicked()
{
    infoWindow->model->setFilter("id=61");
}

void MainWindow::on_pushButton_65_clicked()
{
    infoWindow->model->setFilter("id=62");
}

void MainWindow::on_pushButton_66_clicked()
{
    infoWindow->model->setFilter("id=63");
}

void MainWindow::on_pushButton_67_clicked()
{
    infoWindow->model->setFilter("id=64");
}

void MainWindow::on_pushButton_2_clicked()
{
    infoWindow->model->setFilter("id=65");
}

void MainWindow::on_pushButton_68_clicked()
{
    infoWindow->model->setFilter("id=66");
}

void MainWindow::on_pushButton_69_clicked()
{
    infoWindow->model->setFilter("id=67");
}

void MainWindow::on_pushButton_70_clicked()
{
    infoWindow->model->setFilter("id=68");
}

void MainWindow::on_pushButton_71_clicked()
{
    infoWindow->model->setFilter("id=69");
}

void MainWindow::on_pushButton_72_clicked()
{
    infoWindow->model->setFilter("id=70");
}

void MainWindow::on_pushButton_73_clicked()
{
    infoWindow->model->setFilter("id=71");
}

void MainWindow::on_pushButton_74_clicked()
{
    infoWindow->model->setFilter("id=72");
}

void MainWindow::on_pushButton_75_clicked()
{
    infoWindow->model->setFilter("id=73");
}

void MainWindow::on_pushButton_76_clicked()
{
    infoWindow->model->setFilter("id=74");
}

void MainWindow::on_pushButton_77_clicked()
{
    infoWindow->model->setFilter("id=75");
}

void MainWindow::on_pushButton_78_clicked()
{
    infoWindow->model->setFilter("id=76");
}

void MainWindow::on_pushButton_79_clicked()
{
    infoWindow->model->setFilter("id=77");
}

void MainWindow::on_pushButton_80_clicked()
{
    infoWindow->model->setFilter("id=78");
}

void MainWindow::on_pushButton_81_clicked()
{
    infoWindow->model->setFilter("id=79");
}

void MainWindow::on_pushButton_82_clicked()
{
    infoWindow->model->setFilter("id=80");
}

void MainWindow::on_pushButton_83_clicked()
{
    infoWindow->model->setFilter("id=81");
}

void MainWindow::on_pushButton_84_clicked()
{
    infoWindow->model->setFilter("id=82");
}

void MainWindow::on_pushButton_85_clicked()
{

}

void MainWindow::on_pushButton_86_clicked()
{

}

MainWindow::~MainWindow()
{
    delete ui;
}
