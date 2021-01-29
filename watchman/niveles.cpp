#include "niveles.h"
#include "ui_niveles.h"
#include "game.h"
#include "principal.h"

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
}

void Niveles::on_pushButton_2_clicked()
{
    this->hide();
    juego = new Game(1,2);
    juego->show();
}

void Niveles::on_pushButton_3_clicked()
{
    this->hide();
    Principal * MenuPrincipal=new Principal();
    MenuPrincipal->show();
}
