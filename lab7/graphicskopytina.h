#ifndef GRAPHICSKOPYTINA_H
#define GRAPHICSKOPYTINA_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsEllipseItem>
#include <QTime>
#include <QTimer>

class graphicsKopytina : public QGraphicsScene
{
    Q_OBJECT
public:
    graphicsKopytina(QObject* parent= nullptr);
    QGraphicsItem* itemCollidesWith(QGraphicsItem* item);
    void Init();
private:
    QGraphicsRectItem* walls[4];
    QGraphicsPixmapItem* mouse;

    int speed;
    double dx, dy;
public slots:
    void MoveMouse();
};
#endif // GRAPHICSKOPYTINA_H
