#ifndef GANAR_H
#define GANAR_H

#include <QMainWindow>
#include <niveles.h>

namespace Ui {
class ganar;
}

class ganar : public QMainWindow
{
    Q_OBJECT

public:
    explicit ganar(QWidget *parent = nullptr);
    ~ganar();
    Niveles * nivel;

private slots:
    void on_pushButton_clicked();

private:
    Ui::ganar *ui;
};

#endif // GANAR_H
