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
        Arboles();
        setBackgroundBrush(QBrush(QImage(":/recursos/imagenes/nivel1.png")));
        //setForegroundBrush(QBrush(QImage(":/recursos/imagenes/nivel1_fondo3.png")));

    }
    else if(level==2){
        setBackgroundBrush(QBrush(QImage(":/recursos/imagenes/escenario2.png")));
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

    nave = new Nave();
    //nave->setPos(nave->posx,nave->posy);
    scene->addItem(nave);

    Time_Enemy = new QTimer();
    QObject::connect(Time_Enemy,SIGNAL(timeout()),this,SLOT(spawn()));
    Time_Enemy->start(5000);

    AudioInvasores = new QMediaPlayer();
    AudioInvasores->setMedia(QUrl("qrc:/recursos/sonidos/y2matecom-pepinillo-rick-pickle-rick-doblaje-no-oficial-espanol-latino_dBIW7Ztv.mp3"));

}

void Game::perderElJuego()
{
    lose = new Perder();
    lose->show();
    scene->removeItem(jugador);
    delete jugador;
    delete jugador2;
    nave->TimerMove->stop();
    Time_Enemy->stop();
    perdio=true;
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

void Game::Arboles()
{
    a1 = new arbol(1230,270,45,35);
    scene->addItem(a1);

    a2 = new arbol(1330,605,17,32);
    scene->addItem(a2);

    a3 = new arbol(742,360,27,25);
    scene->addItem(a3);

    a4 = new arbol(753,573,18,34);
    scene->addItem(a4);

    a5 = new arbol(250,260,40,38);
    scene->addItem(a5);

    a6 = new arbol(34,650,49,41);
    scene->addItem(a6);
}

void Game::spawn()
{
    if(aux==1){

    Enemy * enemigo = new Enemy(nave->posx+30,nave->posy+100,alternar);
    scene->addItem(enemigo);  
    if(caso==2) alternar+=1;
    AudioInvasores->play();
    aux+=1;
    }
}
