#include "enemy.h"
#include "game.h"
#include "player.h"

extern Game * juego;

Enemy::Enemy(QGraphicsItem *parent)
{
    fila = 5;
    columna =5;
    pixmap = new QPixmap(":/recursos/imagenes/Pepinillo Rick.png");
    setScale(0.5);
    //dimensiones de cada imagen
    ancho=125;
    alto=160;
    TimerDesp=new QTimer();
    connect(TimerDesp,SIGNAL(timeout()),this,SLOT(desplazamiento()));
    TimerDesp->start(50);
}

int Enemy::getPosx() const
{
    return posx;
}

void Enemy::setPosx(int value)
{
    posx = value;
}

int Enemy::getPosy() const
{
    return posy;
}

void Enemy::setPosy(int value)
{
    posy = value;
}

void Enemy::up()
{
    fila=508;
    posy -= velocidad;
    setPos(posx, posy);
}

void Enemy::down()
{
    fila=175;
    posy += velocidad;
    setPos(posx, posy);
}

void Enemy::left()
{
    fila=340;
    posx -= velocidad;
    setPos(posx, posy);
}

void Enemy::right()
{
    fila=5;
    posx += velocidad;
    setPos(posx, posy);
}

void Enemy::Movimiento()
{
    columna +=130;
    if(columna>=520){
        columna=5;
    }
    this->update(-ancho/2,-alto/2,ancho,alto);

}

void Enemy::Rebotar(int op)
{
    if(op==1){
        posx -= velocidad;
        setPos(posx, posy);
    }
    else if(op==2){
        posx += velocidad;
        setPos(posx, posy);
    }
    if(op==3){
        posy -= velocidad;
        setPos(posx, posy);
    }
    else if(op==4){
        posy += velocidad;
        setPos(posx, posy);
    }
}

void Enemy::desplazamiento()
{
    //QList<QGraphicsItem * >collinding_Items = collidingItems();
    //for(int i = 0; i < collinding_Items.size();i++){
      //  if(typeid (*(collinding_Items[i]))==typeid (Enemy)){
            //scene()->removeItem(collinding_Items[i]);
            //scene()->removeItem(this);
            //delete collinding_Items[i];
            //delete this;
        //}
    //}
    if(x()<juego->jugador->x()){
        right();
        QList<QGraphicsItem * >collinding_Items = collidingItems();
        for(int i = 0; i < collinding_Items.size();i++){
            if(typeid (*(collinding_Items[i]))==typeid (Enemy)){
                Rebotar(1);
            }
        }
    }
    else if(x()>juego->jugador->x()){
        left();
        QList<QGraphicsItem * >collinding_Items = collidingItems();
        for(int i = 0; i < collinding_Items.size();i++){
            if(typeid (*(collinding_Items[i]))==typeid (Enemy)){
                Rebotar(2);
            }
        }
    }
    if(y()<juego->jugador->y()){
        down();
        QList<QGraphicsItem * >collinding_Items = collidingItems();
        for(int i = 0; i < collinding_Items.size();i++){
            if(typeid (*(collinding_Items[i]))==typeid (Enemy)){
                Rebotar(3);
            }
        }
    }
    else if(y()>juego->jugador->y()){
        up();
        QList<QGraphicsItem * >collinding_Items = collidingItems();
        for(int i = 0; i < collinding_Items.size();i++){
            if(typeid (*(collinding_Items[i]))==typeid (Enemy)){
                Rebotar(4);
            }
        }
    }
    Movimiento();

}

QRectF Enemy::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void Enemy::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columna,fila,ancho,alto);
}
