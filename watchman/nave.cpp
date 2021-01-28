#include "nave.h"
#include "game.h"

extern Game * juego;

Nave::Nave(int n_, QGraphicsItem *parent)
{
    n=n_;
    if (n==1){
        setPixmap(QPixmap(":/recursos/imagenes/nave_princ.png"));
        posx=20;
        posy=-10;
        setScale(0.8);
    }
    else if(n==2){
        setPixmap(QPixmap(":/recursos/imagenes/nave.png"));
        posx=0;
        posy=350;
        setScale(0.5);
    }
    else if(n==3){
        setPixmap(QPixmap(":/recursos/imagenes/nave2.png"));
        posx=1200;
        posy=350;
        setScale(0.5);
    }
    dir=1;
    dir2=1;
    dir3=2;



    setPos(posx,posy);
    TimerMove = new QTimer();
    connect(TimerMove,SIGNAL(timeout()),this,SLOT(move()));
    TimerMove->start(50);

    Timepower = new QTimer();
    connect(Timepower,SIGNAL(timeout()),this,SLOT(spawn()));
    Timepower->start(3000);
}

void Nave::move()
{
    if(n==1){
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
    else if(n==2){

        if(posy==50) dir2=1;
        else if (posy==650) dir2=2;

        if(juego->perdio==true){
            scene()->removeItem(this);
            delete this;
        }

        else{
            if(dir2==1){
                posy+=10;
            }
            else if(dir2==2){
                posy-=10;
            }
            setPos(posx,posy);
        }
    }

    else if(n==3){

        if(posy==50) dir3=1;
        else if (posy==650) dir3=2;

        if(juego->perdio==true){
            scene()->removeItem(this);
            delete this;
        }

        else{
            if(dir3==1){
                posy+=10;
            }
            else if(dir3==2){
                posy-=10;
            }
            setPos(posx,posy);
        }
    }
}

void Nave::spawn()
{
    if(n==2){
        PoderEnemy *power = new PoderEnemy(posx,posy,2);
        power->setPos(x(),y());
        scene()->addItem(power);
    }
    if(n==3){
        PoderEnemy *power = new PoderEnemy(posx,posy,3);
        power->setPos(x(),y());
        scene()->addItem(power);
    }

}
