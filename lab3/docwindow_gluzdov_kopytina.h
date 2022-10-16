#ifndef DOCWINDOW_GLUZDOV_KOPYTINA_H
#define DOCWINDOW_GLUZDOV_KOPYTINA_H

#include <QTextEdit>
#include <QMainWindow>

class DocWindow_Gluzdov_Kopytina: public QTextEdit
{
    Q_OBJECT
private:
    QString m_strFileName;

public:
    DocWindow_Gluzdov_Kopytina(QWidget* pwgt = nullptr);
signals:
    void changeWindowTitle(const QString&);

public slots:
    void slotLoad();
    void slotSave();
    void slotSaveAs();
    void slotColor();
};

#endif // DOCWINDOW_GLUZDOV_KOPYTINA_H
