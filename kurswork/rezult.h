#ifndef REZULT_H
#define REZULT_H

#include <QWidget>

namespace Ui {
class rezult;
}

class rezult : public QWidget
{
    Q_OBJECT

public:
    explicit rezult(QWidget *parent = 0);
    ~rezult();
    Ui::rezult *ui;
    void textTrue();
    void textFalse();
    void textTrue1();
    void textFalse1();
    void textTrue2();
    void textFalse2();
    void textTrue3();
    void textFalse3();

    void textTrue21();
    void textFalse21();
    void textTrue22();
    void textFalse22();
    void textTrue23();
    void textFalse23();
};

#endif // REZULT_H
