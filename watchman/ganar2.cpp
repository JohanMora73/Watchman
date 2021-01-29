#include "ganar2.h"
#include "ui_ganar2.h"
#include "game.h"

extern Game *juego;

ganar2::ganar2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ganar2)
{
    ui->setupUi(this);
}

ganar2::~ganar2()
{
    delete ui;
}

void ganar2::on_pushButton_clicked()
{
    juego->close();
    this->hide();
    nivel = new Niveles();
    nivel->show();
    this->close();
}
