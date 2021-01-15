#include "player.h"
#include "game.h"

extern Game * juego;

Player::Player(QGraphicsItem * parent)
{
    timer = new QTimer();
    fila = 5;
    columna =5;
    pixmap = new QPixmap(":/recursos/imagenes/Sprit Rick.png");
    setScale(0.5);
    //dimensiones de cada imagen
    ancho=125;
    alto=160;

    //Timer_restar = new QTimer();
    //connect(Timer_restar,SIGNAL(timeout()),this,SLOT(Restar_Vida()));
    //Timer_restar->start(100);
}

void Player::keyPressEvent(QKeyEvent *event)
{

    if(event->key()==Qt::Key_A){
        if(pos().x() > 0){
            setPos(x()-10,y());
            Movimiento();
            fila=340;
        }
    }

    else if(event->key()==Qt::Key_D){
        if(pos().x() + 50 < 2000){
            setPos(x()+10,y());
            Movimiento();
            fila=5;
        }
    }

    else if(event->key()==Qt::Key_W){
        if(pos().y()>0){
            setPos(x(),y()-10);
            Movimiento();
            fila=505;
        }
    }

    else if(event->key()==Qt::Key_S){
        if(pos().y()+50 < 1200){
            setPos(x(),y()+10);
            Movimiento();
            fila=172;
        }
    }

    else if(event->key()==Qt::Key_Space){
        Poder *power =new Poder(fila);
        power->setPos(x()-20,y());
        scene()->addItem(power);

    }
    if(juego->caso==2){
        if(event->key()==Qt::Key_J){
            if(juego->jugador2->pos().x() > 0){
                juego->jugador2->setPos(juego->jugador2->x()-10,juego->jugador2->y());
                juego->jugador2->Movimiento();
                juego->jugador2->fila=340;
            }
        }

        else if(event->key()==Qt::Key_L){
            if(juego->jugador2->pos().x() + 50 < 2000){
                juego->jugador2->setPos(juego->jugador2->x()+10,juego->jugador2->y());
                juego->jugador2->Movimiento();
                juego->jugador2->fila=5;
            }
        }

        else if(event->key()==Qt::Key_I){
            if(juego->jugador2->pos().y()>0){
                juego->jugador2->setPos(juego->jugador2->x(),juego->jugador2->y()-10);
                juego->jugador2->Movimiento();
                juego->jugador2->fila=505;
            }
        }

        else if(event->key()==Qt::Key_K){
            if(juego->jugador2->pos().y()+50 < 1200){
                juego->jugador2->setPos(juego->jugador2->x(),juego->jugador2->y()+10);
                juego->jugador2->Movimiento();
                juego->jugador2->fila=172;
            }
        }

        else if(event->key()==Qt::Key_H){
            Poder *power =new Poder(juego->jugador2->fila);
            power->setPos(juego->jugador2->x()-20,juego->jugador2->y());
            scene()->addItem(power);
        }

    }
}

void Player::Movimiento()
{
    columna +=130;
    if(columna>=520){
        columna=5;
    }
    this->update(-ancho/2,-alto/2,ancho,alto);

}

QRectF Player::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void Player::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columna,fila,ancho,alto);
}
