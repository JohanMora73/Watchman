#include "nave.h"

Nave::Nave(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/recursos/imagenes/nave.png"));
    setScale(0.5);
    dir=1;

    posx=20;
    posy=20;

    setPos(posx,posy);
    TimerMove = new QTimer();
    connect(TimerMove,SIGNAL(timeout()),this,SLOT(move()));
    TimerMove->start(50);
}

void Nave::move()
{
    if(posx==20) dir=1;
    else if(posx==1300) dir=2;

    if(dir==1){
        posx+=10;
        setPos(posx,posy);
    }
    else if(dir==2){
        posx-=10;
        setPos(posx,posy);
    }
}
