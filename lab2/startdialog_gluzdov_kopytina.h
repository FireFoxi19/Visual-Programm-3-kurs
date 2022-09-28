#ifndef STARTDIALOG_GLUZDOV_KOPYTINA_H
#define STARTDIALOG_GLUZDOV_KOPYTINA_H

#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include "inputdialog_gluzdov_kopytina.h"

class StartDialog_Gluzdov_Kopytina: public QPushButton
{
    Q_OBJECT
public:
    StartDialog_Gluzdov_Kopytina(QWidget* pwgt = 0): QPushButton("Нажми", pwgt)
    {
        connect(this, SIGNAL(clicked()),SLOT(slotButtonClicked()));
    }
signals:

public slots:
    void slotButtonClicked()
    {
        InputDialog_Gluzdov_Kopytina* pInputDialog = new InputDialog_Gluzdov_Kopytina;
        if (pInputDialog->exec()== QDialog::Accepted)
        {
            QMessageBox::information(0,
                                     "Ваша информация: ",
                                     "Имя: "
                                     + pInputDialog->firstName()
                                     + "\nФамилия: "
                                     + pInputDialog->lastName()
                                     );
        }
        delete pInputDialog;
    }
};
#endif // STARTDIALOG_GLUZDOV_KOPYTINA_H
