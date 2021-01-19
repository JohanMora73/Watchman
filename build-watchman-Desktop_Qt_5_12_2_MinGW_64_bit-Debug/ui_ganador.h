/********************************************************************************
** Form generated from reading UI file 'ganador.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GANADOR_H
#define UI_GANADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ganador
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Ganador)
    {
        if (Ganador->objectName().isEmpty())
            Ganador->setObjectName(QString::fromUtf8("Ganador"));
        Ganador->resize(350, 300);
        Ganador->setMinimumSize(QSize(350, 300));
        Ganador->setMaximumSize(QSize(350, 300));
        centralwidget = new QWidget(Ganador);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 350, 271));
        graphicsView->setMinimumSize(QSize(350, 200));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 30, 201, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 120, 161, 41));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 190, 141, 41));
        pushButton_2->setFont(font);
        Ganador->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Ganador);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 20));
        Ganador->setMenuBar(menubar);
        statusbar = new QStatusBar(Ganador);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Ganador->setStatusBar(statusbar);

        retranslateUi(Ganador);

        QMetaObject::connectSlotsByName(Ganador);
    } // setupUi

    void retranslateUi(QMainWindow *Ganador)
    {
        Ganador->setWindowTitle(QApplication::translate("Ganador", "MainWindow", nullptr));
        label->setText(QApplication::translate("Ganador", "Ganador", nullptr));
        pushButton->setText(QApplication::translate("Ganador", "Nuevo intento", nullptr));
        pushButton_2->setText(QApplication::translate("Ganador", "salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ganador: public Ui_Ganador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GANADOR_H
