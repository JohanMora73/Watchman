#ifndef PODERENEMY_H
#define PODERENEMY_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <math.h>

class PoderEnemy: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    float a=0.1;
    int v=10;
    int posx;
    int posy;
    int dt=0;
    int n;

public:
    PoderEnemy(int x_, int y_, int nave_);

    void eliminar();

public slots:
    void move();
};

#endif // PODERENEMY_H
