/********************************************************************************
** Form generated from reading UI file 'ganar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GANAR_H
#define UI_GANAR_H

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

class Ui_ganar
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ganar)
    {
        if (ganar->objectName().isEmpty())
            ganar->setObjectName(QString::fromUtf8("ganar"));
        ganar->resize(400, 300);
        ganar->setMinimumSize(QSize(400, 300));
        ganar->setMaximumSize(QSize(400, 300));
        centralwidget = new QWidget(ganar);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 400, 300));
        graphicsView->setMinimumSize(QSize(400, 300));
        graphicsView->setMaximumSize(QSize(400, 300));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 331, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 60, 301, 41));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 351, 41));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 120, 341, 41));
        label_4->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 150, 211, 31));
        label_5->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 190, 111, 41));
        pushButton->setFont(font);
        ganar->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ganar);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 20));
        ganar->setMenuBar(menubar);
        statusbar = new QStatusBar(ganar);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ganar->setStatusBar(statusbar);

        retranslateUi(ganar);

        QMetaObject::connectSlotsByName(ganar);
    } // setupUi

    void retranslateUi(QMainWindow *ganar)
    {
        ganar->setWindowTitle(QApplication::translate("ganar", "MainWindow", nullptr));
        label->setText(QApplication::translate("ganar", "Felicidades, has logrado superar el primer", nullptr));
        label_2->setText(QApplication::translate("ganar", "primer desaf\303\255o derrotando a los", nullptr));
        label_3->setText(QApplication::translate("ganar", "invasores en este primer territorio ...", nullptr));
        label_4->setText(QApplication::translate("ganar", "sigue el camino a la excelencia para", nullptr));
        label_5->setText(QApplication::translate("ganar", "salvar a la humanidad", nullptr));
        pushButton->setText(QApplication::translate("ganar", "continuar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ganar: public Ui_ganar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GANAR_H
