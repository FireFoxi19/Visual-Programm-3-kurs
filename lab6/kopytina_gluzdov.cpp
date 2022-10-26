#include "kopytina_gluzdov.h"
#include "ui_kopytina_gluzdov.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextEdit>
#include <QTextStream>

kopytina_gluzdov::kopytina_gluzdov(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::kopytina_gluzdov)
{
    ui->setupUi(this);
}

kopytina_gluzdov::~kopytina_gluzdov()
{
    delete ui;
}

void kopytina_gluzdov::recieveData(QString str)
{
    QStringList lst = str.split("*");
    ui->textEdit->setText(lst.at(1)+"\n"+lst.at(0));
if(lst.size()>1)
    {
    QImage image1(lst.at(0));
    ui->label->setPixmap(QPixmap::fromImage(image1));
    }
}

void kopytina_gluzdov::on_buttonBox_clicked(QAbstractButton *button)
{
    if (button->text() == "Reset") {
            ui->textEdit->clear();
            ui->label->clear();
        } else if (button->text() == "Save") {
            QString filename = QFileDialog::getSaveFileName(nullptr, "Сохранить как", QDir::currentPath());
            QFile file(filename);
            if (file.open(QIODevice::WriteOnly)) {
                QTextStream(&file) << ui->textEdit->toPlainText();
                file.close();
                QMessageBox::information(this, "Файл сохранен", "Файл успешно сохранен");

            }
        } else if (button->text() == "Open") {
            QString filename = QFileDialog::getOpenFileName(nullptr, "Открыть", QDir::currentPath());
            QFile file(filename);
            if (file.open(QIODevice::ReadOnly)) {
                QTextStream stream(&file);
                ui->textEdit->setText(stream.readAll());
                file.close();
            }
            QStringList inf = ui->textEdit->toPlainText().split("\n");
            QImage image2(inf.at(5));
            ui->label->setPixmap(QPixmap::fromImage(image2));
        }

}
