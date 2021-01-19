/********************************************************************************
** Form generated from reading UI file 'niveles.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NIVELES_H
#define UI_NIVELES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Niveles
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Niveles)
    {
        if (Niveles->objectName().isEmpty())
            Niveles->setObjectName(QString::fromUtf8("Niveles"));
        Niveles->resize(300, 250);
        Niveles->setMinimumSize(QSize(300, 250));
        Niveles->setMaximumSize(QSize(300, 250));
        centralwidget = new QWidget(Niveles);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 300, 240));
        graphicsView->setMinimumSize(QSize(300, 240));
        graphicsView->setMaximumSize(QSize(300, 200));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 30, 111, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 90, 111, 41));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(90, 150, 111, 41));
        pushButton_3->setFont(font);
        Niveles->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Niveles);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 300, 20));
        Niveles->setMenuBar(menubar);
        statusbar = new QStatusBar(Niveles);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Niveles->setStatusBar(statusbar);

        retranslateUi(Niveles);

        QMetaObject::connectSlotsByName(Niveles);
    } // setupUi

    void retranslateUi(QMainWindow *Niveles)
    {
        Niveles->setWindowTitle(QApplication::translate("Niveles", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("Niveles", "Nivel 1", nullptr));
        pushButton_2->setText(QApplication::translate("Niveles", "Nivel 2", nullptr));
        pushButton_3->setText(QApplication::translate("Niveles", "salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Niveles: public Ui_Niveles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NIVELES_H
