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
    void Restar_Vida();
    void Retroceso();
    void CaidaLibre();
    void Rest_Vida_Player();
    void PausarEnemigos();

public:
    Enemy(int posx_,int posy_);

    QPixmap *pixmap;
    QTimer *TimerDesp;

    QTimer *TimerLife;

    QTimer *health_player;

    QTimer *TimerRetro;

    QTimer *TimerCaida;

    float fila,columna;
    float ancho,alto;
    float escala;

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
    void Retroceso(int op);

    int posx;
    int posy;
    int life=5;
    int masa;
    int vx;
    int vy;
    int ax;
    int ay;
    float dt;
    float g;
    float k;
    float e;
    float vt;
    int angulo;
    int retroceder;

    int VY;
    float t;

    //float prov;
    int dir;
    int caer;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
};
#endif // ENEMY_H
