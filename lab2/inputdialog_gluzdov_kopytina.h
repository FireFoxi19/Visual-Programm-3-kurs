#ifndef INPUTDIALOG_GLUZDOV_KOPYTINA_H
#define INPUTDIALOG_GLUZDOV_KOPYTINA_H

#include <QDialog>
#include <QLineEdit>

class InputDialog_Gluzdov_Kopytina: public QDialog
{
    Q_OBJECT
private:
    QLineEdit* m_ptxtFirstName;
    QLineEdit* m_ptxtLastName;
public:
    InputDialog_Gluzdov_Kopytina(QWidget* pwgt = 0);

    QString firstName() const;
    QString lastName() const;
};

#endif // INPUTDIALOG_GLUZDOV_KOPYTINA_H
