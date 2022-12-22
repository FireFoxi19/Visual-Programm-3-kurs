#include "rezult.h"
#include "ui_rezult.h"

rezult::rezult(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::rezult)
{
    ui->setupUi(this);
}

rezult::~rezult()
{
    delete ui;
}

void rezult::textTrue()
{
    ui->label->setText("Вопрос1   Верно");
}
void rezult::textFalse()
{
    ui->label->setText("Вопрос 1   Неверно, почему не верно");
}
void rezult::textTrue1()
{
    ui->label_6->setText("Вопрос 2   Верно");
}
void rezult::textFalse1()
{
    ui->label_6->setText("Вопрос 2   Неверно, почему не верно");
}
void rezult::textTrue2()
{
    ui->label_7->setText("Вопрос 3   Верно");
}
void rezult::textFalse2()
{
    ui->label_7->setText("Вопрос 3   Неверно, почему не верно");
}
void rezult::textTrue3()
{
    ui->label_8->setText("Вопрос 4   Верно");
}
void rezult::textFalse3()
{
    ui->label_8->setText("Вопрос 4   Неверно, почему не верно");
}


void rezult::textTrue21()
{
    ui->label->setText("Вопрос1   Верно");
}
void rezult::textFalse21()
{
    ui->label->setText("Вопрос 1   Неверно, почему не верно");
}
void rezult::textTrue22()
{
    ui->label_6->setText("Вопрос 2   Верно");
}
void rezult::textFalse22()
{
    ui->label_6->setText("Вопрос 2   Неверно, почему не верно");
}
void rezult::textTrue23()
{
    ui->label_7->setText("Вопрос 3   Верно");
}
void rezult::textFalse23()
{
    ui->label_7->setText("Вопрос 3   Неверно, почему не верно");
}
