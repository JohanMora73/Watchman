#include "ganador.h"
#include "ui_ganador.h"
#include "game.h"
#include"mainwindow.h"
#include <QGraphicsScene>
#include <QGraphicsView>

extern Game *juego;

Ganador::Ganador(int player_,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ganador)
{
    ui->setupUi(this);
    player=player_;
    if(player==1){
        ui->label->setText("El ganador es el Rick");
    }
    else ui->label->setText("El ganador es Morti");
}

Ganador::~Ganador()
{
    delete ui;
}

void Ganador::on_pushButton_clicked()
{
    juego->close();
    this->hide();
    juego = new Game(2,1);
    juego->show();
    this->close();
}

void Ganador::on_pushButton_2_clicked()
{
    juego->close();
    this->hide();
    //QApplication a(argc, argv);
    MainWindow w;

    w.show();
    this->close();

}
