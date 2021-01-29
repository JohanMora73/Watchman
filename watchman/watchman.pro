QT       += core gui \
        multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    enemy.cpp \
    game.cpp \
    ganador.cpp \
    ganar.cpp \
    ganar2.cpp \
    main.cpp \
    mainwindow.cpp \
    nave.cpp \
    niveles.cpp \
    perder.cpp \
    player.cpp \
    player2.cpp \
    poder.cpp \
    poderenemy.cpp \
    principal.cpp \
    puntaje.cpp \
    usuarios.cpp \
    vida.cpp

HEADERS += \
    enemy.h \
    game.h \
    ganador.h \
    ganar.h \
    ganar2.h \
    mainwindow.h \
    nave.h \
    niveles.h \
    perder.h \
    player.h \
    player2.h \
    poder.h \
    poderenemy.h \
    principal.h \
    puntaje.h \
    usuarios.h \
    vida.h

FORMS += \
    ganador.ui \
    ganar.ui \
    ganar2.ui \
    niveles.ui \
    perder.ui \
    principal.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    recursos.qrc

