#ifndef PUNTAJE_H
#define PUNTAJE_H

#include <QObject>
#include <QGraphicsTextItem>
#include <QFont>

class Puntaje : public QGraphicsTextItem
{
    Q_OBJECT
public:
    Puntaje(QGraphicsItem *parent = 0);
    void increase();
    int getScore();
private:
    int score;
};

#endif // PUNTAJE_H
