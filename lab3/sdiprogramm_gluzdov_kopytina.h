#ifndef SDIPROGRAMM_GLUZDOV_KOPYTINA_H
#define SDIPROGRAMM_GLUZDOV_KOPYTINA_H

#include <QMainWindow>
#include <QtWidgets>
#include "docwindow_gluzdov_kopytina.h"
#include "sdiprogramm_gluzdov_kopytina.h"

class SDIProgramm_Gluzdov_Kopytina: public QMainWindow
{
    Q_OBJECT

public:
    SDIProgramm_Gluzdov_Kopytina(QWidget *pwgt = 0): QMainWindow(pwgt)
    {
        QMenu* pmnuFile = new QMenu("&File");
        QMenu* pmnuHelp = new QMenu("&Help");
        DocWindow_Gluzdov_Kopytina* pdoc = new DocWindow_Gluzdov_Kopytina;


        pmnuFile->addAction("&Open...", pdoc, SLOT(slotLoad()), QKeySequence("CTRL+O"));
        pmnuFile->addAction("&Save...", pdoc, SLOT(slotSave()), QKeySequence("CTRL+S"));
        pmnuFile->addAction("&SaveAs...", pdoc, SLOT(slotSaveAs()));
        pmnuFile->addAction("&Color...", pdoc, SLOT(slotColor()));

        pmnuFile->addSeparator();
        pmnuFile->addAction("&Quit", qApp, SLOT(quit()), QKeySequence("CTRL+Q"));
        pmnuHelp->addAction("&About", this, SLOT(slotAbout()), Qt::Key_F1);

        menuBar()->addMenu(pmnuFile);
        menuBar()->addMenu(pmnuHelp);

        setCentralWidget(pdoc);

        connect(pdoc, SIGNAL(changeWindowTitle(const QString&)), SLOT(slotChangeWindowTitle(const QString&)));
        statusBar()->showMessage("Ready",2000);
    }
public slots:
    void slotAbout()
    {
        QMessageBox::about(this, "Application", "Группа ИП_013\nАвтор: Копытина Татьяна\nАвтор: Глуздов Егор");
    }

    void slotChangeWindowTitle(const QString& str)
    {
        setWindowTitle(str);
    }
};
#endif // SDIPROGRAMM_GLUZDOV_KOPYTINA_H
