#include "niveles.h"
#include "ui_niveles.h"
#include "game.h"

extern Game *juego;

Niveles::Niveles(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Niveles)
{
    ui->setupUi(this);
}

Niveles::~Niveles()
{
    delete ui;
}

void Niveles::on_pushButton_clicked()
{
    this->hide();
    juego = new Game(1,1);
    juego->show();
    //juego->level=1;
}

void Niveles::on_pushButton_2_clicked()
{
    this->hide();
    juego = new Game(1,2);
    juego->show();
}
