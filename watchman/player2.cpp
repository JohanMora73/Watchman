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
    //dimensiones de cada imagen
    ancho=125;
    alto=160;
}

void Player2::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "paso del player2";

    if(event->key()==Qt::Key_J){
        if(pos().x() > 0){
            setPos(x()-10,y());
            Movimiento();
            fila=340;
        }
    }

    else if(event->key()==Qt::Key_L){
        if(pos().x() + 50 < 2000){
            setPos(x()+10,y());
            Movimiento();
            fila=5;
        }
    }

    else if(event->key()==Qt::Key_I){
        if(pos().y()>0){
            setPos(x(),y()-10);
            Movimiento();
            fila=505;
        }
    }

    else if(event->key()==Qt::Key_K){
        if(pos().y()+50 < 1200){
            setPos(x(),y()+10);
            Movimiento();
            fila=172;
        }
    }

    else if(event->key()==Qt::Key_H){
        Poder *power =new Poder(fila);
        power->setPos(x()-20,y());
        scene()->addItem(power);

    }
    qDebug() << "paso";
}

void Player2::Movimiento()
{
    columna +=130;
    if(columna>=520){
        columna=5;
    }
    this->update(-ancho/2,-alto/2,ancho,alto);

}
/*
void Player::Restar_Vida()
{
    //qDebug() << "shit";
    QList<QGraphicsItem * >collinding_Items = collidingItems();
    for(int i = 0; i < collinding_Items.size();i++){
        if(typeid (*(collinding_Items[i]))==typeid (Enemy)){
            qDebug() <<-1;
        }
    }
}

*/

QRectF Player2::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void Player2::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columna,fila,ancho,alto);
}
