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
    Nave(int n_, QGraphicsItem * parent = 0);

    QTimer * TimerMove;
    QTimer *Timepower;

    int posx;
    int posy;
    int n;

    int dir;
    int dir2;
    int dir3;

public slots:
    void move();
    void spawn();
};

#endif // NAVE_H
