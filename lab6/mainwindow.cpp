#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myform = new kopytina_gluzdov();
    connect(ui->pushButton_2, SIGNAL(clicked()), myform, SLOT(show()));
    connect(this, SIGNAL(sendData(QString)), myform, SLOT(recieveData
    (QString)));
    connect(ui->pushButton, SIGNAL(clicked()),this, SLOT(onButtonSend()));
}

void MainWindow::on_pushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(0, "Выберите файл", QDir::currentPath(),"*.png *.jpg *.jpeg");
    ui->lineEdit_4->setText(filename);
    QImage image1(filename);
    ui->label_5->setPixmap(QPixmap::fromImage(image1));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onButtonSend()
{
    if (ui->lineEdit->text() == "" or ui->lineEdit_4->text() == "" or ui->lineEdit_3->text() == "" or ui->lineEdit_2->text() == "") {
            QMessageBox::information(this, "Заполните все поля", "Заполните все поял прежде чем продолжить");
            return;
        } else {
            this->myform->show();
        }
    QString st = ui->lineEdit_4->text()+"*"+ui->lineEdit->text()+"\n"+ui->lineEdit_2->text()+"\n"+ui->lineEdit_3->text()+"\n"+ui->dateEdit->text();
    if (ui->radioButton->isChecked()==true)
        st+="\nПол мужской";
    else
        st+="\nПол женский";
    emit sendData(st);

}
