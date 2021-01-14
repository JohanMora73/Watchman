#ifndef PERDER_H
#define PERDER_H

#include <QMainWindow>

namespace Ui {
class Perder;
}

class Perder : public QMainWindow
{
    Q_OBJECT

public:
    explicit Perder(QWidget *parent = nullptr);
    ~Perder();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Perder *ui;
};

#endif // PERDER_H
