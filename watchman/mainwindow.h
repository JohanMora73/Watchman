#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMessageBox>
#include <QMainWindow>
#include <map>
#include <vector>
#include <fstream>
#include <string>
#include "principal.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Principal *InterfazInicial;
};

#endif // MAINWINDOW_H
