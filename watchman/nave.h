#ifndef NAVE_H
#define NAVE_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QGraphicsScene>

class Nave: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Nave(QGraphicsItem * parent = 0);

    QTimer * TimerMove;

    int posx;
    int posy;

    int dir;
public slots:
    void move();

    //QRectF boundingRect() const;
    //void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
};

#endif // NAVE_H
