#ifndef GANAR2_H
#define GANAR2_H

#include <QMainWindow>
#include "niveles.h"

namespace Ui {
class ganar2;
}

class ganar2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit ganar2(QWidget *parent = nullptr);
    ~ganar2();
    Niveles * nivel;

private slots:
    void on_pushButton_clicked();

private:
    Ui::ganar2 *ui;
};

#endif // GANAR2_H
