#ifndef PLAYER2_H
#define PLAYER2_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QMediaPlayer>
#include <QTimer>
#include <QPainter>
#include <QDebug>
#include "poder.h"

class Player2 : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Player2(QGraphicsItem * parent = 0);
    void Movimiento();

    QTimer *timer;
    QPixmap *pixmap;

    QTimer *Timer_restar;

    float fila,columna;
    float ancho,alto;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
};

#endif // PLAYER2_H
