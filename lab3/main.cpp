#include "sdiprogramm_gluzdov_kopytina.h"
#include <QApplication>
#include <QtWidgets>

void loadModules(QSplashScreen* psplash)
{
    QTime time;
    time.start();

    for (int i = 0; i<100; )
    {
        if (time.elapsed()>40)
        {
            time.start();
            ++i;
        }
        psplash->showMessage("Loading madules: "
                             +QString::number(i)+"%",
                             Qt::AlignCenter|Qt::AlignCenter,
                             Qt::black);
        qApp->processEvents();
    }

}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen splash(QPixmap("1.png"));
    splash.show();
    SDIProgramm_Gluzdov_Kopytina w;
    loadModules(&splash);
    splash.finish(&w);
    w.show();

    return a.exec();
}
