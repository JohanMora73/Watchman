#include "poder.h"
#include "game.h"
#include "enemy.h"

extern Game * juego;

Poder::Poder(int caso_)
{
    caso=caso_;

    setPixmap(QPixmap(":/recursos/imagenes/poder.png"));
    setScale(0.1);

    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}

int Poder::getCaso()
{
    return caso;
}

void Poder::move()
{

    if(caso==505){
        setPos(x(),y()-10);
    }
    else if(caso==172){
        setPos(x(),y()+10);
    }
    else if(caso==340){
        setPos(x()-10,y());
    }
    else if(caso==5){
        setPos(x()+10,y());
    }
    //if(pos().y() + 50 < 0){
    if(y()<-20){
        scene()->removeItem(this);
        delete this;
    }
    if(y()>720){
        scene()->removeItem(this);
        delete this;
    }
    if(x()<-20){
        scene()->removeItem(this);
        delete this;
    }
    if(x()>1370){
        scene()->removeItem(this);
        delete this;
    }
}
