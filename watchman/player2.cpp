#include "player2.h"
#include "game.h"

extern Game * juego;

Player2::Player2(QGraphicsItem * parent)
{
    timer = new QTimer();
    fila = 5;
    columna =5;
    pixmap = new QPixmap(":/recursos/imagenes/Mobile - Pocket Mortys - 050 Biker Morty.png");
    setScale(0.5);
    ancho=125;
    alto=160;
}

void Player2::Movimiento()
{
    columna +=130;
    if(columna>=520){
        columna=5;
    }
    this->update(-ancho/2,-alto/2,ancho,alto);

}

QRectF Player2::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void Player2::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columna,fila,ancho-5,alto);
}
