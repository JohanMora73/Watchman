/********************************************************************************
** Form generated from reading UI file 'ganar2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GANAR2_H
#define UI_GANAR2_H

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

class Ui_ganar2
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ganar2)
    {
        if (ganar2->objectName().isEmpty())
            ganar2->setObjectName(QString::fromUtf8("ganar2"));
        ganar2->resize(400, 300);
        ganar2->setMinimumSize(QSize(400, 300));
        ganar2->setMaximumSize(QSize(400, 300));
        centralwidget = new QWidget(ganar2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, -20, 400, 300));
        graphicsView->setMinimumSize(QSize(400, 300));
        graphicsView->setMaximumSize(QSize(400, 300));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 381, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 381, 31));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 70, 341, 31));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 100, 231, 31));
        label_4->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 170, 131, 41));
        pushButton->setFont(font);
        ganar2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ganar2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 20));
        ganar2->setMenuBar(menubar);
        statusbar = new QStatusBar(ganar2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ganar2->setStatusBar(statusbar);

        retranslateUi(ganar2);

        QMetaObject::connectSlotsByName(ganar2);
    } // setupUi

    void retranslateUi(QMainWindow *ganar2)
    {
        ganar2->setWindowTitle(QApplication::translate("ganar2", "MainWindow", nullptr));
        label->setText(QApplication::translate("ganar2", "Tras derrotar a estos seres despiadados ", nullptr));
        label_2->setText(QApplication::translate("ganar2", "no cabe duda de que eres un verdadero", nullptr));
        label_3->setText(QApplication::translate("ganar2", "heroe cuyo nombre quedar\303\241 gravado ", nullptr));
        label_4->setText(QApplication::translate("ganar2", " en los libros de historia", nullptr));
        pushButton->setText(QApplication::translate("ganar2", "continuar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ganar2: public Ui_ganar2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GANAR2_H
