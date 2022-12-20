#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>
#include <QSplashScreen>

//void loadModules(QSplashScreen* psplash)
//{
//    QTime time;
//    time.start();

//    for (int i = 0; i<100; )
//    {
//        if (time.elapsed()>30)
//        {
//            time.start();
//            ++i;
//        }
//        psplash->showMessage("Loading madules: "
//                             +QString::number(i)+"%",
//                             Qt::AlignCenter|Qt::AlignCenter,
//                             Qt::black);
//        qApp->processEvents();
//    }

//}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QSplashScreen splash(QPixmap("C:/vizualka/kurswork/img/экран.jpg"));
//    splash.show();
    MainWindow w;
//    loadModules(&splash);
//    splash.finish(&w);
    w.show();

    return a.exec();
}
