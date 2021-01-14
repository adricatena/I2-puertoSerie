#-------------------------------------------------
#
# Project created by QtCreator 2012-12-04T19:16:05
#
#-------------------------------------------------

QT       += core gui

TARGET = Actividad2_recibe
TEMPLATE = app

include (../qextserialport/qextserialport.pri)

SOURCES += main.cpp\
        ventanaprincipal.cpp \
    portcfg.cpp \
    ventanaconfirmacion.cpp \
    ventanaarchivoexistente.cpp

HEADERS  += ventanaprincipal.h \
    portcfg.h \
    ventanaconfirmacion.h \
    ventanaarchivoexistente.h

FORMS    += ventanaprincipal.ui \
    portcfg.ui \
    ventanaconfirmacion.ui \
    ventanaarchivoexistente.ui
