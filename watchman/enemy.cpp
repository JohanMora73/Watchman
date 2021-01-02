#include "enemy.h"

Enemy::Enemy(QGraphicsItem *parent)
{
    fila = 5;
    columna =5;
    pixmap = new QPixmap(":/recursos/Pepinillo Rick.png");
    setScale(0.5);
    //dimensiones de cada imagen
    ancho=125;
    alto=160;
}

QRectF Enemy::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void Enemy::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columna,fila,ancho,alto);
}
