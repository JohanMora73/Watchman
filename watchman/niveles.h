#ifndef NIVELES_H
#define NIVELES_H

#include <QMainWindow>

namespace Ui {
class Niveles;
}

class Niveles : public QMainWindow
{
    Q_OBJECT

public:
    explicit Niveles(QWidget *parent = nullptr);
    ~Niveles();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Niveles *ui;
};

#endif // NIVELES_H
