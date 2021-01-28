#include "vida.h"

Vida::Vida(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    health = 5;
    setPlainText(QString("health: ") + QString::number(health));
    setDefaultTextColor(Qt::black);
    setFont(QFont("times",16));
}

void Vida::decrease()
{
    health--;
    setPlainText(QString("health: ") + QString::number(health));
}

int Vida::getHealth()
{
    return health;
}
