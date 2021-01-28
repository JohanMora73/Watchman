#include "ganar.h"
#include "ui_ganar.h"
#include "game.h"

extern Game *juego;

ganar::ganar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ganar)
{
    ui->setupUi(this);
}

ganar::~ganar()
{
    delete ui;
}

void ganar::on_pushButton_clicked()
{
    juego->close();
    this->hide();
    nivel = new Niveles();
    nivel->show();
    this->close();
}
