#include "puntaje.h"

Puntaje::Puntaje(QGraphicsItem *parent)
{
    score = 0;
    setPlainText(QString("Score: ") + QString::number(score));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));
}

void Puntaje::increase()
{
    score++;
    setPlainText(QString("Score: ") + QString::number(score));
}

int Puntaje::getScore()
{
    return score;
}
