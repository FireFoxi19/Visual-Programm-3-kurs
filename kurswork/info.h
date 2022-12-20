#ifndef INFO_H
#define INFO_H

#include <QWidget>
#include <QSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QStyle>
#include <QtGui>

namespace Ui {
class Info;
}

class Info : public QWidget
{
    Q_OBJECT

public:
    explicit Info(QWidget *parent = 0);
    ~Info();

    Ui::Info *ui;
    QSqlDatabase db;
    QSqlQuery* query;
    QSqlTableModel* model;
};

#endif // INFO_H
