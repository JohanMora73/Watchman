#ifndef PODER_H
#define PODER_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>

class Poder : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    int caso;

public:
    Poder(int caso);
    int getCaso();

public slots:
    void move();

};

#endif // PODER_H
