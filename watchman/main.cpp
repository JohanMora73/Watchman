#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include "mainwindow.h"
#include "game.h"
#include "player.h"

Game * juego;

int main(int argc, char *argv[])
{
    //srand(time(NULL));
    QApplication a(argc, argv);

    /*
        // funcion simple para empezar a correr el juego, crea la variable tipo mente maestra y mainwindow
        srand(time(NULL));
        QTimer * verificar;
        QApplication a(argc, argv);
        MainWindow w;
        w.show();


        return a.exec();

    juego = new Game();
    juego->show();
    */


    MainWindow w;
    w.show();


    return a.exec();
}
