#-------------------------------------------------
#
# Project created by QtCreator 2023-09-15T10:58:49
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gestion_de_l_intervantion
TEMPLATE = app


SOURCES += main.cpp\
        get_id_composer_participer.cpp \
        get_ref_proj_bill.cpp \
        mainwindow.cpp \
        planning.cpp \
        recherche.cpp \
        show_composeretparticiper.cpp \
        update.cpp \
        update_delete.cpp

HEADERS  += mainwindow.h \
    get_id_composer_participer.h \
    get_ref_proj_bill.h \
    mysql.h \
    planning.h \
    recherche.h \
    show_composeretparticiper.h \
    update.h \
    update_delete.h

FORMS    += mainwindow.ui \
    get_id_composer_participer.ui \
    get_ref_proj_bill.ui \
    planning.ui \
    recherche.ui \
    show_composeretparticiper.ui \
    update.ui \
    update_delete.ui

RESOURCES += \
    resource.qrc
QMAKE_CXXFLAGS += -std=gnu++11
