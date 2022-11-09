#include "graphicskopytina.h"

void graphicsKopytina::Init(){

    QPolygon poligoneTube;
    poligoneTube << QPoint(0, 0) << QPoint(40, 0)<<QPoint(40, 60)<<QPoint(0, 60);
    QGraphicsPolygonItem* tube = addPolygon(poligoneTube, QPen(Qt::black), QBrush(QColor(171,232,0)));
    tube->setPos(400, 100);
    tube->setFlags(QGraphicsItem::ItemIsMovable);
    tube->setData(0, "House");

    QPolygon poligoneHouse;
    poligoneHouse << QPoint(0, 0) << QPoint(250, 0)<<QPoint(250, 200)<<QPoint(0, 200);
    QGraphicsPolygonItem* house = addPolygon(poligoneHouse, QPen(Qt::black), QBrush(QColor(255, 20, 147)));
    house->setPos(25, 300);
    house->setFlags(QGraphicsItem::ItemIsMovable);
    house->setData(0, "House");

    QPolygon poligoneRoof;
    poligoneRoof << QPoint(-150,60) << QPoint(0,-60) << QPoint(150,60) ;
    QGraphicsPolygonItem* roof = addPolygon(poligoneRoof, QPen(Qt::black), QBrush(QColor(210, 180, 140)));
    roof->setPos(200, 200);
    roof->setFlags(QGraphicsItem::ItemIsMovable);
    roof->setData(0, "House");

    QPolygon poligoneStar;
    poligoneStar << QPoint(-9,2) << QPoint (-3,3)<<QPoint(0,8)<<QPoint (3,3) << QPoint(9,2) << QPoint (5,-3)<<QPoint(6,-9)<<QPoint (0,-7)<< QPoint (-6,-9)<<QPoint(-5,-3)<<QPoint (-9,2) ;
    QGraphicsPolygonItem* star = addPolygon(poligoneStar, QPen(Qt::black), QBrush(QColor(138, 43, 226)));
    star->setPos(130, 30);
    star->setFlags(QGraphicsItem::ItemIsMovable);
    star->setData(0, "House");

    QPixmap newImage;
    if (!newImage.load(QStringLiteral("C:/vizualka/lab7/img/palm.png"))) {
        return;
    }

    QGraphicsPixmapItem* window[2];
    for(int i=0; i<1; i++){
            window[i] = addPixmap(newImage);
            window[i]->setPos(350,200);
            window[i]->setScale(0.15);
            window[i]->setData(0, "House");
            window[i]->setFlags(QGraphicsItem::ItemIsMovable);
        };


    if (!newImage.load(QStringLiteral("C:/vizualka/lab7/img/monkey.png"))) {
        return;
    }
    mouse = addPixmap(newImage);
    mouse->setScale(0.15);
    mouse->setPos(500, 400);
    mouse->setData(0, "mouse");

    walls[0] = addRect(QRectF(0,0,10,500),QPen(Qt::black), QBrush(QColor(220, 20, 60)));
    walls[1] = addRect(QRectF(800,0,10,500), QPen(Qt::black), QBrush(QColor(220, 20, 60)));
    walls[2] = addRect(QRectF(0,0,800,10), QPen(Qt::black), QBrush(QColor(220, 20, 60)));
    walls[3] = addRect(QRectF(0,500,800,10), QPen(Qt::black), QBrush(QColor(220, 20, 60)));

    for(int i=0; i<4; i++)
            walls[i]->setData(0,"Wall");
}

void graphicsKopytina::MoveMouse(){
    QTransform transform = mouse->transform();
    transform.translate(dx,dy);
    mouse->setTransform(transform);
    QGraphicsItem* barrier = itemCollidesWith(mouse);
    transform=mouse->transform();
    if(barrier){
        if(barrier->data(0)=="Wall" || barrier->data(0)=="House"){
            dx=-dx;
            dy=-dy;
        }
    }
}


graphicsKopytina::graphicsKopytina(QObject* parent):QGraphicsScene (parent)
{
    Init();
    dx = 1;
    dy = 1;
    speed = 1;
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    QTimer* timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(MoveMouse()));
    timer->start(10);

}


QGraphicsItem * graphicsKopytina::itemCollidesWith(QGraphicsItem *item)
{
    QList<QGraphicsItem *> collisions = collidingItems(item);
    foreach (QGraphicsItem *it, collisions){
        if(it == item)
            continue;
        return it;
    }
    return nullptr;
}
