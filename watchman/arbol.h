#ifndef ARBOL_H
#define ARBOL_H

#include <QObject>
#include <QTimer>
#include <QGraphicsRectItem>
#include <QBrush>

class arbol: public QObject, public QGraphicsRectItem
{
    Q_OBJECT

private:
    int x, y, ancho, alto;

public slots:
    void Retroceso_Player();

public:
    arbol(int x_,int y_,int ancho_, int alto_);
    int colision();

    QTimer * Timer_retro;
};

#endif // ARBOL_H
