#include "enemy.h"
#include "game.h"
#include "player.h"

extern Game * juego;

Enemy::Enemy(int posx_, int posy_)
{
    fila = 5;
    columna =5;

    posx=posx_;
    posy=posy_;
    g=-9.8;
    k=0.08;
    e=0.5;
    vt=30;
    vx=vt*cos(3.141592/4);
    vy=vt*sin(3.141592/4);
    ax=0;
    ay=g;
    dt=0;
    angulo=45;
    retroceder=false;
    dir=0;
    caer=1;
    VY=0;

    pixmap = new QPixmap(":/recursos/imagenes/Pepinillo Rick.png");
    setScale(0.5);
    //dimensiones de cada imagen
    ancho=125;
    alto=160;
    TimerDesp=new QTimer();
    connect(TimerDesp,SIGNAL(timeout()),this,SLOT(desplazamiento()));
    TimerDesp->start(50);

    TimerLife =new QTimer();
    connect(TimerLife,SIGNAL(timeout()),this,SLOT(Restar_Vida()));
    TimerLife->start(50);

    TimerRetro = new QTimer();
    connect(TimerRetro,SIGNAL(timeout()),this,SLOT(Retroceso()));
    TimerRetro->start(80);

    TimerCaida = new QTimer();
    //connect(TimerCaida,SIGNAL(timeout()),this,SLOT(CaidaLibre()));
    //TimerCaida->start(50);

    //escala=scale();
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

void Enemy::Retroceso()
{
    //int op=1;
    if(retroceder==true && dt<=4){
        velocidad=0;
        if(dir==1){

            ax = 0;
            ay = g/2;
            vy=vy+ay*dt;
            posx=posx-vx*dt;
            posy=posy-vy*dt;//+ay*(dt*dt)/2;
            setPos(posx,posy);
            dt+=1;
            //qDebug() <<"posx: " << posx <<" posy: " << posy << "dt" << dt;

        }
        else if(dir==2){
            ax = 0;
            ay = g/2;
            vy=vy+ay*dt;
            posx=posx+vx*dt;
            posy=posy-vy*dt;//+ay*(dt*dt)/2;
            setPos(posx,posy);
            dt+=1;
            //qDebug() <<"posx: " << posx <<" posy: " << posy << "dt" << dt;
        }
        else if(dir == 3){
            ax = 0;
            ay = g/2;
            vy+=ay*dt;
            //posx-=vx*dt;
            posy-=vy*dt+vx*dt;//+ay*(dt*dt)/2+vx*dt;
            setPos(posx,posy);
            dt+=1;
            //qDebug() <<"posx: " << posx <<" posy: " << posy << "dt" << dt;
        }
        else if(dir==4){
            ax = 0;
            ay = g/2;
            vy+=ay*dt;
            //posx-=vx*dt;
            posy-=vy*dt-vx*dt;//+ay*(dt*dt)/2-vx*dt;
            setPos(posx,posy);
            dt+=1;
            qDebug() <<"posx: " << posx <<" posy: " << posy << "dt" << dt;
        }
    }
    else{
        retroceder=false;
        velocidad=5;
        dir=0;
        dt=0;
        vy=vt*sin(3.14/4);
    }
}

void Enemy::CaidaLibre()
{
    if (caer==1 && dt<=1){
        velocidad=0;
        ay = -g;
        //VY+=ay*dt;
        //posy+=VY*dt+ay*(dt*dt)/2;
        //setPos(posx,posy);
        dt+=0.2;
        qDebug() <<" Cayendo "<< "posx: " << posx <<" posy: " <<posy << " caer: " <<caer <<" dt: "<<dt;
    }
    else {
        caer=0;
        velocidad=5;
        dt=0;
        qDebug() <<"Termino de caer";
    }
}

void Enemy::desplazamiento()
{
    if(x()<juego->jugador->x()){
        if(dir==0) {dir=1;}
        right();
        QList<QGraphicsItem * >collinding_Items = collidingItems();
        for(int i = 0; i < collinding_Items.size();i++){
            if(typeid (*(collinding_Items[i]))==typeid (Enemy)){
                Rebotar(1);
            }
        }
    }
    else if(x()>juego->jugador->x()){
        if(dir==0) {dir=2;}
        left();
        QList<QGraphicsItem * >collinding_Items = collidingItems();
        for(int i = 0; i < collinding_Items.size();i++){
            if(typeid (*(collinding_Items[i]))==typeid (Enemy)){
                Rebotar(2);
            }
        }
    }
    if(y()<juego->jugador->y()){
        if(dir==0) {dir=3;}
        down();
        QList<QGraphicsItem * >collinding_Items = collidingItems();
        for(int i = 0; i < collinding_Items.size();i++){
            if(typeid (*(collinding_Items[i]))==typeid (Enemy)){
                Rebotar(3);
            }
        }
    }
    else if(y()>juego->jugador->y()){
        if(dir==0) {dir=4;}
        up();
        QList<QGraphicsItem * >collinding_Items = collidingItems();
        for(int i = 0; i < collinding_Items.size();i++){
            if(typeid (*(collinding_Items[i]))==typeid (Enemy)){
                Rebotar(4);
            }
        }
    }
    Movimiento();
    //qDebug() << "fila : " <<fila;


}

void Enemy::Restar_Vida()
{
    QList<QGraphicsItem * >collinding_Items = collidingItems();
    for(int i = 0; i < collinding_Items.size();i++){
        if(typeid (*(collinding_Items[i]))==typeid (Poder)){
            scene()->removeItem(collinding_Items[i]);
            delete collinding_Items[i];
            life-=1;
            retroceder=true;
            if(life==0){
                scene()->removeItem(this);
                delete this;
            }
        }
    }
}

QRectF Enemy::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void Enemy::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columna,fila,ancho,alto);
}
