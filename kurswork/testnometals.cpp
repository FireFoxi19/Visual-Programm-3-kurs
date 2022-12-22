#include "testnometals.h"
#include "ui_testnometals.h"

TestNoMetals::TestNoMetals(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestNoMetals)
{
    ui->setupUi(this);
    rez = new rezult();
    connect(ui->pushButton, SIGNAL(clicked()),this, SLOT(OpenResult()));
}

void TestNoMetals::OpenResult()
{
    if(ui->checkBox_2->isChecked())
    {
    rez->textTrue21();
    }
    if(ui->checkBox->isChecked() || ui->checkBox_3->isChecked())
    {
    rez->textFalse21();
    }

    if(ui->checkBox_4->isChecked())
    {
    rez->textTrue22();
    }
    if(ui->checkBox_5->isChecked() || ui->checkBox_6->isChecked())
    {
    rez->textFalse22();
    }

    if(ui->checkBox_8->isChecked())
    {
    rez->textTrue23();
    }
    if(ui->checkBox_7->isChecked() || ui->checkBox_9->isChecked())
    {
    rez->textFalse23();
    }
    rez->show();
}

TestNoMetals::~TestNoMetals()
{
    delete ui;
}
