#ifndef KOPYTINA_GLUZDOV_H
#define KOPYTINA_GLUZDOV_H

#include <QWidget>
#include <QAbstractButton>

namespace Ui {
class kopytina_gluzdov;
}

class kopytina_gluzdov : public QWidget
{
    Q_OBJECT

public:
    explicit kopytina_gluzdov(QWidget *parent = 0);
    ~kopytina_gluzdov();

public slots:
    void recieveData(QString str);

private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::kopytina_gluzdov *ui;
};

#endif // KOPYTINA_GLUZDOV_H
