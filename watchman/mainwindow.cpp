#include "mainwindow.h"
#include "ui_mainwindow.h"

extern Game * juego;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    this->hide();
    nivel= new Niveles();
    nivel->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    this->hide();
    juego = new Game(2,1);
    juego->show();

}
