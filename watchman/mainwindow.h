#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTextBrowser>
#include <iostream>
#include <QMainWindow>
#include <QObject>
#include <QMediaPlayer>
#include <QPixmap>
#include <fstream>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QString>
#include "game.h"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Niveles * nivel;

private slots:
    void on_pushButton_3_clicked(); //Un solo jugador

    void on_pushButton_4_clicked(); //Multijugador

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
