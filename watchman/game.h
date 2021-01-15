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
#include "player2.h"
#include "enemy.h"
#include "nave.h"
#include "vida.h"
#include "puntaje.h"
#include "perder.h"
#include "ganador.h"


class Game: public QGraphicsView
{
    Q_OBJECT
public:

    Game(int caso_,QWidget * parent = nullptr);
    QGraphicsScene * scene;
    QMediaPlayer * AudioInvasores;// = new QMediaPlayer;

    Player * jugador;
    Nave * nave;
    Vida * Health;
    Vida * Health2;
    Puntaje * score;
    Perder * lose;
    Player2 * jugador2;
    Ganador * winner;

    bool perdio = false;

    int aux;
    int caso;
    int alternar;

    void perderElJuego();
    void JugadorGanador(int player_);

public slots:
    //void MoveEnemy();
    void spawn();

private:
    QTimer *Time_Enemy;
    QTimer * timer;
};

#endif // GAME_H
