#include "poderenemy.h"
#include "game.h"

extern Game *juego;

PoderEnemy::PoderEnemy(int x_, int y_, int nave_)
{
    n=nave_;
    posx=x_;
    posy=y_;
    setPixmap(QPixmap(":/recursos/imagenes/poder_2.png"));
    setScale(0.2);

    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(100);
}

void PoderEnemy::eliminar()
{

    if(sqrt(pow(posx-juego->jugador->x(),2)+pow(posy-juego->jugador->y(),2))<=50){
        scene()->removeItem(this);
        delete this;
        juego->Health->decrease();
        if(juego->Health->getHealth()<=0){
            juego->perderElJuego();
        }
    }
}

void PoderEnemy::move()
{
    if(n==2){
        if(dt<=9){
            v=v+a*dt;
            posx=posx+v*dt;
        }
        else{
            posx+=80;
        }
        setPos(posx,posy);
        dt+=1;

    }


    else if(n==3){
        if(dt<=9){
            v=v+a*dt;
            posx=posx-v*dt;
        }
        else{
            posx-=80;
        }
        setPos(posx,posy);
        dt+=1;
    }

    if(x()<-20){
        scene()->removeItem(this);
        delete this;
    }
    if(x()>1370){
        scene()->removeItem(this);
        delete this;
    }
    eliminar();
}
