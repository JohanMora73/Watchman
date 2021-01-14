#include "game.h"

Game::Game(int caso_, QWidget *parent)
{
    aux=1;
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1350,700);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    setBackgroundBrush(QBrush(QImage(":/recursos/imagenes/nivel1.png")));

    setFixedSize(1350,700);

    show();

    //setForegroundBrush(QBrush(QImage(":/recursos/imagenes/fore2.png")));

    caso = caso_;

    jugador = new Player();
    jugador->setPos(340,280);
    jugador->setFlag(QGraphicsItem::ItemIsFocusable);
    jugador->setFocus();
    scene->addItem(jugador);

    if(caso==2){
        jugador2 = new Player2();
        jugador2->setPos(380,280);
        scene->addItem(jugador2);
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
    nave->TimerMove->stop();
    Time_Enemy->stop();
    perdio=true;
    delete scene;


}

void Game::spawn()
{
    //if(aux==1){
    Enemy * enemigo = new Enemy(nave->posx+30,nave->posy+100);
    scene->addItem(enemigo);  
    //AudioInvasores->play();
    //aux+=1;
    //}
}
