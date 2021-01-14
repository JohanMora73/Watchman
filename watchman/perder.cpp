#include "perder.h"
#include "ui_perder.h"

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

}

void Perder::on_pushButton_2_clicked()
{

}
