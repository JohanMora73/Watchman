#ifndef GANADOR_H
#define GANADOR_H

#include <QMainWindow>

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

private:
    Ui::Ganador *ui;
};

#endif // GANADOR_H
