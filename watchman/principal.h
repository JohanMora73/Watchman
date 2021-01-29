#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <QTextBrowser>
#include <iostream>
#include <QObject>
#include <QMediaPlayer>
#include <QPixmap>
#include <fstream>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QDebug>
#include <string>
#include "game.h"
#include "usuarios.h"

using namespace std;

namespace Ui {
class Principal;
}

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit Principal(QWidget *parent = nullptr);
    ~Principal();
    Niveles * nivel;

private slots:
    void on_pushButton_clicked(); //Un solo jugador

    void on_pushButton_2_clicked(); //Multijugador

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Principal *ui;
};

#endif // PRINCIPAL_H
