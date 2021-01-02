#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "game.h"
#include "player.h"

Game * juego;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    juego = new Game();
    juego->show();

    return a.exec();
}
