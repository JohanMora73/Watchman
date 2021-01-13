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
    juego = new Game();
    juego->show();
}
