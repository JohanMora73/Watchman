#include "arbol.h"
#include "game.h"
#include "player.h"

extern Game * juego;


arbol::arbol(int x_, int y_, int ancho_, int alto_)
{
    x=x_;
    y=y_;
    ancho=ancho_;
    alto=alto_;

    setRect(x,y,ancho,alto);
    //setBrush(Qt::black);

    Timer_retro = new QTimer();
    connect(Timer_retro,SIGNAL(timeout()),this,SLOT(Retroceso_Player()));
    Timer_retro->start(10);
}

int arbol::colision()
{
    int resp=0;
    QList<QGraphicsItem * >collinding_Items = collidingItems();
    for(int i = 0; i < collinding_Items.size();i++){
        if(typeid (*(collinding_Items[i]))==typeid (Player)){
           resp=1;
        }
    }
    return resp;
}

void arbol::Retroceso_Player()
{
    if(sqrt(pow((x+ancho/2)-(juego->jugador->x()),2)+pow((y+alto/2)-(juego->jugador->y()),2))<=40){
    //if(colision()==1){

        if(juego->jugador->fila==172 && juego->jugador->y()>=y-5){
            juego->jugador->setPos(juego->jugador->x(),juego->jugador->y()-30);
        }
        else if(juego->jugador->fila==505 && juego->jugador->y()<=y+alto){
            juego->jugador->setPos(juego->jugador->x(),juego->jugador->y()+30);
        }

        if(juego->jugador->fila==5 && juego->jugador->x()>=x-5 && juego->jugador->y()<=y+10){
            juego->jugador->setPos(juego->jugador->x()-30,juego->jugador->y());
        }
        else if(juego->jugador->fila==340 && juego->jugador->x()<=x+ancho && juego->jugador->y()<=y+10){
            juego->jugador->setPos(juego->jugador->x()+30,juego->jugador->y());
        }

    }
}
