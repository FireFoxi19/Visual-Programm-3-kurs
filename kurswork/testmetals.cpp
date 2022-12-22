#include "testmetals.h"
#include "ui_testmetals.h"

TestMetals::TestMetals(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestMetals)
{
    ui->setupUi(this);

    rez = new rezult();

    connect(ui->pushButton, SIGNAL(clicked()),this, SLOT(OpenResult()));
}
void TestMetals::OpenResult()
{

    if(ui->checkBox->isChecked())
    {
    rez->textTrue();
    }
    if(ui->checkBox_2->isChecked() || ui->checkBox_3->isChecked())
    {
    rez->textFalse();
    }

    if(ui->checkBox_4->isChecked())
    {
    rez->textTrue1();
    }
    if(ui->checkBox_5->isChecked() || ui->checkBox_6->isChecked())
    {
    rez->textFalse1();
    }

    if(ui->checkBox_7->isChecked())
    {
    rez->textTrue2();
    }
    if(ui->checkBox_8->isChecked() || ui->checkBox_9->isChecked())
    {
    rez->textFalse2();
    }

    if(ui->checkBox_12->isChecked())
    {
    rez->textTrue3();
    }
    if(ui->checkBox_10->isChecked() || ui->checkBox_11->isChecked())
    {
    rez->textFalse3();
    }

    rez->show();
}
TestMetals::~TestMetals()
{
    delete ui;
}

//void TestMetals::on_pushButton_clicked()
//{
//    if(ui->checkBox->isChecked())
//    {

//    }
//}
