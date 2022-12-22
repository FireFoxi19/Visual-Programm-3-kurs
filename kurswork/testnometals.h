#ifndef TESTNOMETALS_H
#define TESTNOMETALS_H

#include <QWidget>
#include <rezult.h>

namespace Ui {
class TestNoMetals;
}

class TestNoMetals : public QWidget
{
    Q_OBJECT

public:
    explicit TestNoMetals(QWidget *parent = 0);
    ~TestNoMetals();
    rezult *rez;
private slots:
    void OpenResult();
private:
    Ui::TestNoMetals *ui;
};

#endif // TESTNOMETALS_H
