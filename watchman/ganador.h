#ifndef GANADOR_H
#define GANADOR_H

#include <QMainWindow>
//#include "mainwindow.h"

namespace Ui {
class Ganador;
}

class Ganador : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ganador(int player_,QWidget *parent = nullptr);
    ~Ganador();
    int player;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Ganador *ui;
};

#endif // GANADOR_H
