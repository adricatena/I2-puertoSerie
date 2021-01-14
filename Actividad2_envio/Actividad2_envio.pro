#-------------------------------------------------
#
# Project created by QtCreator 2012-12-04T17:59:59
#
#-------------------------------------------------

QT       += core gui

TARGET = Actividad2_envio
TEMPLATE = app

include (../qextserialport/qextserialport.pri)

SOURCES += main.cpp\
        ventanaprincipal.cpp \
    portcfg.cpp

HEADERS  += ventanaprincipal.h \
    portcfg.h

FORMS    += ventanaprincipal.ui \
    portcfg.ui
