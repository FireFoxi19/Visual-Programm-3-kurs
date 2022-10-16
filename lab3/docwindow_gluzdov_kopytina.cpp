#include "docwindow_gluzdov_kopytina.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QDialog>
#include <QColorDialog>
#include <QtWidgets>

DocWindow_Gluzdov_Kopytina::DocWindow_Gluzdov_Kopytina(QWidget* pwgt): QTextEdit(pwgt)
{

}
void DocWindow_Gluzdov_Kopytina::slotLoad()
{
    QString str = QFileDialog::getOpenFileName();
    if (str.isEmpty())
    {
        return;
    }
    QFile file(str);
    if (file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);
        setPlainText(stream.readAll());
        file.close();
        m_strFileName=str;
        emit changeWindowTitle(m_strFileName);
    }
}

void DocWindow_Gluzdov_Kopytina::slotSaveAs()
{
    QString str = QFileDialog::getSaveFileName(0, m_strFileName);
    if (!str.isEmpty())
    {
        m_strFileName = str;
        slotSave();
    }
}

void DocWindow_Gluzdov_Kopytina::slotSave()
{
    if(m_strFileName.isEmpty())
    {
        slotSaveAs();
        return;
    }
    QFile file(m_strFileName);
    if (file.open(QIODevice::WriteOnly))
    {
        QTextStream(&file)<<toPlainText();
        file.close();
        emit changeWindowTitle(m_strFileName);

        QMessageBox::information(0, "info", "Save is ok!");
        setTextColor(Qt::blue);

        //setTextBackgroundColor(Qt::blue);
    }
}

void DocWindow_Gluzdov_Kopytina::slotColor()
{
    auto color = QColorDialog::getColor();
    if (color.isValid())
    {
        setTextColor(color);
    }
}
