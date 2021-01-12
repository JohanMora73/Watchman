#ifndef VIDA_H
#define VIDA_H

#include <QObject>
//#include <QGraphicsItem>
//#include <QPainter>
#include <QGraphicsTextItem>
#include <QFont>

class Vida: public QGraphicsTextItem //: public QObject, public QGraphicsItem, public QRect
{
    Q_OBJECT
public:
    Vida(QGraphicsItem *parent = 0);
    void decrease();
    int getHealth();
private:
    int health;
};

#endif // VIDA_H
