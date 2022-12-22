#ifndef HINT_H
#define HINT_H

#include <QWidget>

namespace Ui {
class hint;
}

class hint : public QWidget
{
    Q_OBJECT

public:
    explicit hint(QWidget *parent = 0);
    ~hint();
private slots:
    void on_action3_clicked();
private:
    Ui::hint *ui;
};

#endif // HINT_H
