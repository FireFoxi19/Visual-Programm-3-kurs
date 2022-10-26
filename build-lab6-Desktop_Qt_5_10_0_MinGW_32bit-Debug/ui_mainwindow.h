/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QDateEdit *dateEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLineEdit *lineEdit_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(601, 495);
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextOnly);
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(420, 30, 141, 20));
        lineEdit->setFrame(true);
        lineEdit->setCursorPosition(0);
        lineEdit->setDragEnabled(false);
        lineEdit->setReadOnly(false);
        lineEdit->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit->setClearButtonEnabled(false);
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(420, 80, 141, 20));
        dateEdit = new QDateEdit(centralWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(420, 180, 141, 22));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 80, 81, 20));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 130, 47, 16));
        label_3->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(300, 180, 111, 21));
        label_4->setFont(font);
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(420, 130, 141, 20));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 20, 180, 210));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);
        label_5->setFrameShape(QFrame::Panel);
        label_5->setFrameShadow(QFrame::Raised);
        label_5->setLineWidth(3);
        label_5->setMidLineWidth(0);
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(390, 260, 82, 17));
        radioButton->setFont(font);
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(480, 260, 82, 17));
        radioButton_2->setFont(font);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 250, 75, 23));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        pushButton->setFont(font2);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 370, 75, 23));
        QFont font3;
        font3.setFamily(QStringLiteral("Times New Roman"));
        font3.setPointSize(11);
        pushButton_2->setFont(font3);
        pushButton_2->setAcceptDrops(false);
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 35, 47, 13));
        QFont font4;
        font4.setFamily(QStringLiteral("Times New Roman"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        label->setFont(font4);
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(420, 320, 151, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 601, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        pushButton->setDefault(true);
        pushButton_2->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\240\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "               \320\244\320\236\320\242\320\236", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "\320\234", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "\320\226", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
#ifndef QT_NO_STATUSTIP
        pushButton_2->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\223\320\276\321\202\320\276\320\262\320\276", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\244\320\230\320\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
