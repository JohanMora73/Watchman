#include "game.h"

Game::Game(int caso_,int level_, QWidget *parent)
{
    aux=1;
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1350,700);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    level=level_;

    if(level==1){
        setBackgroundBrush(QBrush(QImage(":/recursos/imagenes/nivel1.png")));
        setForegroundBrush(QBrush(QImage(":/recursos/imagenes/FondoNivel1.png")));
        time=4000;

    }
    else if(level==2){
        setBackgroundBrush(QBrush(QImage(":/recursos/imagenes/nivel2.png")));
        time=3000;

        nave2 = new Nave(2);
        scene->addItem(nave2);

        nave3 = new Nave(3);
        scene->addItem(nave3);
    }
    setFixedSize(1350,700);

    show();
    alternar=0;

    caso = caso_;

    jugador = new Player();
    jugador->setPos(340,280);
    jugador->setFlag(QGraphicsItem::ItemIsFocusable);
    jugador->setFocus();
    scene->addItem(jugador);

    //multijugador
    if(caso==2){
        jugador2 = new Player2();
        jugador2->setPos(380,280);
        scene->addItem(jugador2);

        Health2=new Vida();
        Health2->setPos(140,20);
        scene->addItem(Health2);
    }

    Health = new Vida();
    Health->setPos(1200,20);
    scene->addItem(Health);

    score = new Puntaje();
    score->setPos(Health->x(),50);
    scene->addItem(score);

    nave = new Nave(1);
    //nave->setPos(nave->posx,nave->posy);
    scene->addItem(nave);

    Time_Enemy = new QTimer();
    QObject::connect(Time_Enemy,SIGNAL(timeout()),this,SLOT(spawn()));
    Time_Enemy->start(time);

    AudioInvasores = new QMediaPlayer();
    AudioInvasores->setMedia(QUrl("qrc:/recursos/sonidos/y2matecom-pepinillo-rick-pickle-rick-doblaje-no-oficial-espanol-latino_dBIW7Ztv.mp3"));

}

void Game::perderElJuego()
{
    lose = new Perder();
    lose->show();
    perdio=true;
    scene->removeItem(jugador);
    delete jugador;
    delete jugador2;
    nave->TimerMove->stop();
    Time_Enemy->stop();
    delete scene;
    //this->close();
}

void Game::JugadorGanador(int player_)
{
    winner = new Ganador(player_);
    winner->show();
    scene->removeItem(jugador);
    scene->removeItem(jugador2);
    delete jugador;
    delete jugador2;
    nave->TimerMove->stop();
    Time_Enemy->stop();
    perdio=true;
    delete scene;

}

void Game::PasarNivel1()
{
    win = new ganar();
    win->show();
    perdio=true;
    scene->removeItem(jugador);
    delete jugador;
    delete jugador2;
    nave->TimerMove->stop();
    Time_Enemy->stop();
    delete scene;

}

void Game::spawn()
{
    //
    //if(aux==1){

    Enemy * enemigo = new Enemy(nave->posx+30,nave->posy+100,alternar);
    scene->addItem(enemigo);  
    if(caso==2) alternar+=1;
    AudioInvasores->play();
    //aux+=1;
    //}
}
