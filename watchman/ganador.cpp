#include "ganador.h"
#include "ui_ganador.h"

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
