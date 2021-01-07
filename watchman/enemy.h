#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPainter>
#include <math.h>
#include <QDebug>
#include <QTimer>

class Enemy: public QObject, public QGraphicsItem
{
    Q_OBJECT
    int velocidad = 5;

public slots:

    void desplazamiento();

public:
    Enemy(QGraphicsItem * parent = 0);

    QPixmap *pixmap;
    QTimer *TimerDesp;

    float fila,columna;
    float ancho,alto;

    int posx=50,posy=50;

    int getPosx() const;
    void setPosx(int px);
    int getPosy() const;
    void setPosy(int py);

    void up();
    void down();
    void left();
    void right();

    void Movimiento();
    void Rebotar(int op);

    int life=3;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
};
#endif // ENEMY_H
