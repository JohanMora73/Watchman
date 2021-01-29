/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QGraphicsView *graphicsView;
    QLineEdit *NameR;
    QGraphicsView *graphicsView_2;
    QLabel *label_2;
    QLineEdit *ClaveR;
    QPushButton *pushButton_3;
    QGraphicsView *graphicsView_3;
    QLabel *label_3;
    QLineEdit *NameI;
    QLineEdit *ClaveI;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QString::fromUtf8("Principal"));
        Principal->resize(885, 500);
        Principal->setMinimumSize(QSize(885, 500));
        Principal->setMaximumSize(QSize(885, 500));
        centralwidget = new QWidget(Principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(730, 20, 141, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(730, 80, 141, 41));
        pushButton_2->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -50, 900, 600));
        label->setMinimumSize(QSize(880, 500));
        label->setMaximumSize(QSize(900, 600));
        label->setPixmap(QPixmap(QString::fromUtf8(":/recursos/imagenes/portada.png")));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 880, 500));
        graphicsView->setMinimumSize(QSize(880, 500));
        graphicsView->setMaximumSize(QSize(880, 500));
        NameR = new QLineEdit(centralwidget);
        NameR->setObjectName(QString::fromUtf8("NameR"));
        NameR->setGeometry(QRect(330, 60, 181, 31));
        NameR->setFont(font);
        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(330, 20, 181, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 20, 121, 31));
        label_2->setFont(font);
        ClaveR = new QLineEdit(centralwidget);
        ClaveR->setObjectName(QString::fromUtf8("ClaveR"));
        ClaveR->setGeometry(QRect(330, 100, 181, 31));
        ClaveR->setFont(font);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(360, 140, 121, 31));
        pushButton_3->setFont(font);
        graphicsView_3 = new QGraphicsView(centralwidget);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(530, 20, 181, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(560, 20, 151, 21));
        label_3->setFont(font);
        NameI = new QLineEdit(centralwidget);
        NameI->setObjectName(QString::fromUtf8("NameI"));
        NameI->setGeometry(QRect(530, 60, 181, 31));
        NameI->setFont(font);
        ClaveI = new QLineEdit(centralwidget);
        ClaveI->setObjectName(QString::fromUtf8("ClaveI"));
        ClaveI->setGeometry(QRect(530, 100, 181, 31));
        ClaveI->setFont(font);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(560, 140, 121, 31));
        pushButton_4->setFont(font);
        Principal->setCentralWidget(centralwidget);
        graphicsView->raise();
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        NameR->raise();
        graphicsView_2->raise();
        label_2->raise();
        ClaveR->raise();
        pushButton_3->raise();
        graphicsView_3->raise();
        label_3->raise();
        NameI->raise();
        ClaveI->raise();
        pushButton_4->raise();
        menubar = new QMenuBar(Principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 885, 20));
        Principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Principal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Principal->setStatusBar(statusbar);

        retranslateUi(Principal);

        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QApplication::translate("Principal", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("Principal", "Invitado", nullptr));
        pushButton_2->setText(QApplication::translate("Principal", "Multijugador", nullptr));
        label->setText(QString());
        NameR->setText(QApplication::translate("Principal", "Nombre de usuario", nullptr));
        label_2->setText(QApplication::translate("Principal", "Registrarse", nullptr));
        ClaveR->setText(QApplication::translate("Principal", "Clave", nullptr));
        pushButton_3->setText(QApplication::translate("Principal", "OK", nullptr));
        label_3->setText(QApplication::translate("Principal", "Iniciar secion", nullptr));
        NameI->setText(QApplication::translate("Principal", "Nombre de usuario", nullptr));
        ClaveI->setText(QApplication::translate("Principal", "Clave", nullptr));
        pushButton_4->setText(QApplication::translate("Principal", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
