#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QMediaPlayer>
#include <QTimer>
#include <QPainter>
#include <QDebug>
#include "enemy.h"
#include "poder.h"

class Player: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Player(QGraphicsItem * parent = 0);
    void keyPressEvent(QKeyEvent *event);
    void Movimiento();

    QTimer *timer;
    QPixmap *pixmap;

    float fila,columna;
    float ancho,alto;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

signals:
public slots: //Funciones que trabaja por si sola sin necesidad de yo estarla llamando
    //void spawn();

};
#endif // PLAYER_H
