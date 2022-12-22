#ifndef TESTMETALS_H
#define TESTMETALS_H

#include <QWidget>
#include <rezult.h>

namespace Ui {
class TestMetals;
}

class TestMetals : public QWidget
{
    Q_OBJECT

public:
    explicit TestMetals(QWidget *parent = 0);
    ~TestMetals();
    rezult *rez;

private slots:
    void on_pushButton_clicked();
    void OpenResult();

private:
    Ui::TestMetals *ui;
};

#endif // TESTMETALS_H
