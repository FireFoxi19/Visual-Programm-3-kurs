#include "info.h"
#include "ui_info.h"

Info::Info(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Info)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/vizualka/build-kurswork-Desktop_Qt_5_10_0_MinGW_32bit-Debug/InfoDB.db");
    if (db.open())
    {
        qDebug("Open!");
    }
    else
    {
        qDebug("No open!");
    }
    query = new QSqlQuery(db);
    model = new QSqlTableModel(this, db);
    model->setTable("ChemicalElements");
    model->select();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableView->setModel(model);
    ui->tableView->setColumnHidden(0, true);
}

Info::~Info()
{
    delete ui;
}
