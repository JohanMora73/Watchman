#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPainter>
#include <math.h>
#include <QDebug>

class Enemy: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Enemy(QGraphicsItem * parent = 0);
    //int Direccion();
    //void Movimiento();



    QPixmap *pixmap;
    QTimer *timer;

    float fila,columna;
    float ancho,alto;

    int posx=50,posy=50;
    /*int getPosx() const;
    void setPosx(int px);
    int getPosy() const;
    void setPosy(int py);*/



    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
};
#endif // ENEMY_H
