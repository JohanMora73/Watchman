#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QMediaPlayer>
#include <QTimer>
#include <QPainter>
#include <QDebug>
#include "poder.h"

class Player: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Player(QGraphicsItem * parent = 0);
    void keyPressEvent(QKeyEvent *event);
    void Movimiento();
    int Colisionar_arbol();

    QTimer *timer;
    QPixmap *pixmap;

    QTimer *Timer_restar;

    float fila,columna;
    float ancho,alto;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

public slots:
    //void Restar_Vida();

};

#endif // PLAYER_H
