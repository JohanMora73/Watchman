/********************************************************************************
** Form generated from reading UI file 'perder.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERDER_H
#define UI_PERDER_H

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

class Ui_Perder
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Perder)
    {
        if (Perder->objectName().isEmpty())
            Perder->setObjectName(QString::fromUtf8("Perder"));
        Perder->resize(400, 300);
        Perder->setMinimumSize(QSize(400, 300));
        centralwidget = new QWidget(Perder);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 400, 260));
        graphicsView->setMinimumSize(QSize(400, 260));
        graphicsView->setMaximumSize(QSize(400, 260));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 30, 241, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 160, 181, 51));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 160, 181, 51));
        pushButton_2->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 321, 51));
        label_2->setFont(font);
        Perder->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Perder);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 20));
        Perder->setMenuBar(menubar);
        statusbar = new QStatusBar(Perder);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Perder->setStatusBar(statusbar);

        retranslateUi(Perder);

        QMetaObject::connectSlotsByName(Perder);
    } // setupUi

    void retranslateUi(QMainWindow *Perder)
    {
        Perder->setWindowTitle(QApplication::translate("Perder", "MainWindow", nullptr));
        label->setText(QApplication::translate("Perder", "Has perdido esta batalla", nullptr));
        pushButton->setText(QApplication::translate("Perder", "Niveles", nullptr));
        pushButton_2->setText(QApplication::translate("Perder", "Menu principal", nullptr));
        label_2->setText(QApplication::translate("Perder", "y la humanida su unica esperanza", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Perder: public Ui_Perder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERDER_H
