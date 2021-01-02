#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QMediaPlayer>
#include <math.h>
#include "player.h"
#include "enemy.h"

class Game: public QGraphicsView
{
public:

    Game(QWidget * parent =0);
    QGraphicsScene * scene;
    QTimer * timer;
    Player * jugador;
    Enemy * enemigo;
};

#endif // GAME_H
