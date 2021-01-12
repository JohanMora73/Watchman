#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QTimer>
#include <QMediaPlayer>
#include <QDesktopWidget>
#include <math.h>
#include <QList>
#include <QDebug>
#include <QMediaPlayer>
#include <QObject>
#include <QBrush>
#include "player.h"
#include "enemy.h"
#include "nave.h"
#include "vida.h"
#include "puntaje.h"

class Game: public QGraphicsView
{
    Q_OBJECT
public:

    Game(QWidget * parent = nullptr);
    QGraphicsScene * scene;
    QMediaPlayer * AudioInvasores;// = new QMediaPlayer;

    Player * jugador;
    Nave * nave;
    Vida * Health;
    Puntaje * score;

    int aux;

public slots:
    //void MoveEnemy();
    void spawn();

private:
    QTimer *Time_Enemy;
    QTimer * timer;
};

#endif // GAME_H
