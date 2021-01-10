#include "game.h"

Game::Game(QWidget *parent)
{
    aux=1;
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1350,700);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    setBackgroundBrush(QBrush(QImage(":/recursos/imagenes/escenario2.png")));

    setFixedSize(1350,700);

    show();

    //setForegroundBrush(QBrush(QImage(":/recursos/imagenes/fore2.png")));

    jugador = new Player();
    jugador->setPos(340,280);
    jugador->setFlag(QGraphicsItem::ItemIsFocusable);
    jugador->setFocus();
    scene->addItem(jugador);

    nave = new Nave();
    //nave->setPos(nave->posx,nave->posy);
    scene->addItem(nave);

    Time_Enemy = new QTimer();
    QObject::connect(Time_Enemy,SIGNAL(timeout()),this,SLOT(spawn()));
    Time_Enemy->start(5000);

    AudioInvasores = new QMediaPlayer();
    AudioInvasores->setMedia(QUrl("qrc:/recursos/sonidos/y2matecom-pepinillo-rick-pickle-rick-doblaje-no-oficial-espanol-latino_dBIW7Ztv.mp3"));




}

void Game::spawn()
{
    if(aux==1){
    Enemy * enemigo = new Enemy(nave->posx,nave->posy);
    scene->addItem(enemigo);  
    AudioInvasores->play();
    aux+=1;
    }
}
