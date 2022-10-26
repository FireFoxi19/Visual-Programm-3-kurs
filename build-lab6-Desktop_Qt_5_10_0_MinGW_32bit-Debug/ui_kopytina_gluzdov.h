/********************************************************************************
** Form generated from reading UI file 'kopytina_gluzdov.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOPYTINA_GLUZDOV_H
#define UI_KOPYTINA_GLUZDOV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kopytina_gluzdov
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *kopytina_gluzdov)
    {
        if (kopytina_gluzdov->objectName().isEmpty())
            kopytina_gluzdov->setObjectName(QStringLiteral("kopytina_gluzdov"));
        kopytina_gluzdov->resize(625, 475);
        textEdit = new QTextEdit(kopytina_gluzdov);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(250, 30, 351, 361));
        label = new QLabel(kopytina_gluzdov);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 80, 180, 210));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Sunken);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        buttonBox = new QDialogButtonBox(kopytina_gluzdov);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(160, 410, 241, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(10);
        buttonBox->setFont(font1);
        buttonBox->setStandardButtons(QDialogButtonBox::Open|QDialogButtonBox::Reset|QDialogButtonBox::Save);

        retranslateUi(kopytina_gluzdov);

        QMetaObject::connectSlotsByName(kopytina_gluzdov);
    } // setupUi

    void retranslateUi(QWidget *kopytina_gluzdov)
    {
        kopytina_gluzdov->setWindowTitle(QApplication::translate("kopytina_gluzdov", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class kopytina_gluzdov: public Ui_kopytina_gluzdov {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KOPYTINA_GLUZDOV_H
