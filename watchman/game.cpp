#include "game.h"

Game::Game(QWidget *parent)
{
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,700,600);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(700,600);

    jugador = new Player();
    jugador->setPos(340,280);
    jugador->setFlag(QGraphicsItem::ItemIsFocusable);
    jugador->setFocus();
    scene->addItem(jugador);

    enemigo = new Enemy();
    enemigo->setPos(enemigo->posx,enemigo->posy);
    scene->addItem(enemigo);

    show();
}
