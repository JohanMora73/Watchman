#include "enemy.h"
#include "game.h"
#include "player.h"

extern Game * juego;

Enemy::Enemy(int posx_, int posy_, int alternate_)
{
    fila = 175;
    columna =5;

    alternate=alternate_;

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
    retroceder=0;
    dir=0;
    caer=1;
    VY=0;

    t=0;


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
    connect(TimerCaida,SIGNAL(timeout()),this,SLOT(CaidaLibre()));
    TimerCaida->start(80);

    health_player = new QTimer();
    connect(health_player,SIGNAL(timeout()),this,SLOT(Rest_Vida_Player()));
    health_player->start(100);
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

int Enemy::Colision_enemy()
{
    int resp=0;
    QList<QGraphicsItem * >collinding_Items = collidingItems();
    for(int i = 0; i < collinding_Items.size();i++){
        if(typeid (*(collinding_Items[i]))==typeid (Enemy)){
           resp=1;
        }
    }
    return resp;
}

void Enemy::Retroceso()
{
    if(retroceder==1 && dt<=4){
        if(dir==1){

            ax = 0;
            ay = g/2;
            vy=vy+ay*dt;
            posx=posx-vx*dt;
            posy=posy-vy*dt;//+ay*(dt*dt)/2;
            setPos(posx,posy);
            dt+=1;

        }
        else if(dir==2){
            ax = 0;
            ay = g/2;
            vy=vy+ay*dt;
            posx=posx+vx*dt;
            posy=posy-vy*dt;//+ay*(dt*dt)/2;
            setPos(posx,posy);
            dt+=1;
        }
        else if(dir == 3){
            ax = 0;
            ay = g/2;
            vy+=ay*dt;
            posy-=vy*dt+vx*dt;
            setPos(posx,posy);
            dt+=1;
        }
        else if(dir==4){
            ax = 0;
            ay = g/2;
            vy+=ay*dt;
            posy-=vy*dt-vx*dt;
            setPos(posx,posy);
            dt+=1;
        }
    }
    else{
        retroceder=0;
        dir=0;
        dt=0;
        vy=vt*sin(3.14/4);
    }
}

void Enemy::CaidaLibre()
{
    if (caer==1 && t<=2){
        ay = -g;
        VY+=ay*t;
        posx=juego->nave->x()+50;
        posy+=VY*t+ay*(t*t)/2;
        setPos(posx,posy);
        t+=0.5;
    }
    else {
        caer=0;
    }
}

void Enemy::Rest_Vida_Player()
{
    if(alternate%2==0)
    {
        if(sqrt(pow(posx-juego->jugador->x(),2)+pow(posy-juego->jugador->y(),2))<=7){
            //qDebug () << " -1 " ;
            juego->Health->decrease();
            if(juego->Health->getHealth()<=0){
                if(juego->caso==2) {juego->JugadorGanador(2);}
                else {juego->perderElJuego();}
                //juego->perderElJuego();
            }
            if(fila==5){
                juego->jugador->setPos(juego->jugador->x()+30,juego->jugador->y());
            }
            if(fila==340){
                juego->jugador->setPos(juego->jugador->x()-30,juego->jugador->y());
            }
            if(fila==175){
                juego->jugador->setPos(juego->jugador->x(),juego->jugador->y()+30);
            }
            if(fila==508){
                juego->jugador->setPos(juego->jugador->x(),juego->jugador->y()-30);
            }

        }
    }
    else
    {
        if(sqrt(pow(posx-juego->jugador2->x(),2)+pow(posy-juego->jugador2->y(),2))<=7){
            //qDebug () << " -1 " ;
            juego->Health2->decrease();
            if(juego->Health2->getHealth()==0){
                juego->JugadorGanador(1);
            }
            if(fila==5){
                juego->jugador2->setPos(juego->jugador2->x()+30,juego->jugador2->y());
            }
            if(fila==340){
                juego->jugador2->setPos(juego->jugador2->x()-30,juego->jugador2->y());
            }
            if(fila==175){
                juego->jugador2->setPos(juego->jugador2->x(),juego->jugador2->y()+30);
            }
            if(fila==508){
                juego->jugador2->setPos(juego->jugador2->x(),juego->jugador2->y()-30);
            }

        }
    }
}

void Enemy::PausarEnemigos()
{
    scene()->removeItem(this);
    delete this;
    //TimerCaida->stop();
    //TimerRetro->stop();
    //TimerDesp->stop();
    //TimerLife->stop();
    //health_player->stop();

}

void Enemy::desplazamiento()
{
    if(juego->perdio==true){
        PausarEnemigos();
    }
    else{
        if (caer==0)
        {
            if(alternate % 2 == 0)
            {
                if(x()<juego->jugador->x()){
                    if(dir==0) {dir=1;}
                    right();
                    int resp = Colision_enemy();
                    if(resp==1)Rebotar(1);

                }
                else if(x()>juego->jugador->x()){
                    if(dir==0) {dir=2;}
                    left();
                    int resp= Colision_enemy();
                    if(resp==1)Rebotar(2);

                }
                if(y()<juego->jugador->y()){
                    if(dir==0) {dir=3;}
                    down();
                    int resp= Colision_enemy();
                    if(resp==1)Rebotar(3);
                }

                else if(y()>juego->jugador->y()){
                    if(dir==0) {dir=4;}
                    up();
                    int resp= Colision_enemy();
                    if(resp==1)Rebotar(4);
                }
            }
            else
            {
                if(x()<juego->jugador2->x()){
                    if(dir==0) {dir=1;}
                    right();
                    int resp = Colision_enemy();
                    if(resp==1)Rebotar(1);

                }
                else if(x()>juego->jugador2->x()){
                    if(dir==0) {dir=2;}
                    left();
                    int resp= Colision_enemy();
                    if(resp==1)Rebotar(2);

                }
                if(y()<juego->jugador2->y()){
                    if(dir==0) {dir=3;}
                    down();
                    int resp= Colision_enemy();
                    if(resp==1)Rebotar(3);
                }

                else if(y()>juego->jugador2->y()){
                    if(dir==0) {dir=4;}
                    up();
                    int resp= Colision_enemy();
                    if(resp==1)Rebotar(4);
                }
            }

            Movimiento();
        }
    }
}

void Enemy::Restar_Vida()
{
    QList<QGraphicsItem * >collinding_Items = collidingItems();
    for(int i = 0; i < collinding_Items.size();i++){
        if(typeid (*(collinding_Items[i]))==typeid (Poder)){
            scene()->removeItem(collinding_Items[i]);
            delete collinding_Items[i];
            life-=1;
            retroceder=1;
            if(life==0){
                scene()->removeItem(this);
                delete this;
                juego->score->increase();
                if(juego->score->getScore()==10){
                    juego->PasarNivel1();
                }
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
