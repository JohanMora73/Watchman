#include "perder.h"
#include "ui_perder.h"
#include "game.h"

extern Game *juego;

Perder::Perder(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Perder)
{
    ui->setupUi(this);
}

Perder::~Perder()
{
    delete ui;
}

void Perder::on_pushButton_clicked()
{
    //this->hide();
    juego = new Game(1,1);
    juego->show();
    this->close();
}

void Perder::on_pushButton_2_clicked()
{

}
