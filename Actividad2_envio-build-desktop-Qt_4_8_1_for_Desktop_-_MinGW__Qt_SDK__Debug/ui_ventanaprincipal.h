/********************************************************************************
** Form generated from reading UI file 'ventanaprincipal.ui'
**
** Created: Tue 4. Dec 18:13:12 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAPRINCIPAL_H
#define UI_VENTANAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaPrincipal
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labTituloSeleccionArchivo;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnSeleccionArchivo;
    QLabel *labNombreArchivo;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labTituloEstado;
    QLabel *labEstado;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnConectar;
    QPushButton *btnDesconectar;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnEnviar;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSalir;

    void setupUi(QDialog *VentanaPrincipal)
    {
        if (VentanaPrincipal->objectName().isEmpty())
            VentanaPrincipal->setObjectName(QString::fromUtf8("VentanaPrincipal"));
        VentanaPrincipal->resize(225, 165);
        widget = new QWidget(VentanaPrincipal);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 206, 145));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        labTituloSeleccionArchivo = new QLabel(widget);
        labTituloSeleccionArchivo->setObjectName(QString::fromUtf8("labTituloSeleccionArchivo"));

        horizontalLayout_5->addWidget(labTituloSeleccionArchivo);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btnSeleccionArchivo = new QPushButton(widget);
        btnSeleccionArchivo->setObjectName(QString::fromUtf8("btnSeleccionArchivo"));

        horizontalLayout_4->addWidget(btnSeleccionArchivo);

        labNombreArchivo = new QLabel(widget);
        labNombreArchivo->setObjectName(QString::fromUtf8("labNombreArchivo"));

        horizontalLayout_4->addWidget(labNombreArchivo);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labTituloEstado = new QLabel(widget);
        labTituloEstado->setObjectName(QString::fromUtf8("labTituloEstado"));

        horizontalLayout_3->addWidget(labTituloEstado);

        labEstado = new QLabel(widget);
        labEstado->setObjectName(QString::fromUtf8("labEstado"));

        horizontalLayout_3->addWidget(labEstado);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnConectar = new QPushButton(widget);
        btnConectar->setObjectName(QString::fromUtf8("btnConectar"));

        horizontalLayout_2->addWidget(btnConectar);

        btnDesconectar = new QPushButton(widget);
        btnDesconectar->setObjectName(QString::fromUtf8("btnDesconectar"));

        horizontalLayout_2->addWidget(btnDesconectar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnEnviar = new QPushButton(widget);
        btnEnviar->setObjectName(QString::fromUtf8("btnEnviar"));

        horizontalLayout->addWidget(btnEnviar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnSalir = new QPushButton(widget);
        btnSalir->setObjectName(QString::fromUtf8("btnSalir"));

        horizontalLayout->addWidget(btnSalir);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VentanaPrincipal);

        QMetaObject::connectSlotsByName(VentanaPrincipal);
    } // setupUi

    void retranslateUi(QDialog *VentanaPrincipal)
    {
        VentanaPrincipal->setWindowTitle(QApplication::translate("VentanaPrincipal", "VentanaPrincipal", 0, QApplication::UnicodeUTF8));
        labTituloSeleccionArchivo->setText(QApplication::translate("VentanaPrincipal", "Seleccion de archivo", 0, QApplication::UnicodeUTF8));
        btnSeleccionArchivo->setText(QApplication::translate("VentanaPrincipal", "Archivo", 0, QApplication::UnicodeUTF8));
        labNombreArchivo->setText(QApplication::translate("VentanaPrincipal", "...", 0, QApplication::UnicodeUTF8));
        labTituloEstado->setText(QApplication::translate("VentanaPrincipal", "Estado:", 0, QApplication::UnicodeUTF8));
        labEstado->setText(QApplication::translate("VentanaPrincipal", "Desconectado", 0, QApplication::UnicodeUTF8));
        btnConectar->setText(QApplication::translate("VentanaPrincipal", "Conectar", 0, QApplication::UnicodeUTF8));
        btnDesconectar->setText(QApplication::translate("VentanaPrincipal", "Desconectar", 0, QApplication::UnicodeUTF8));
        btnEnviar->setText(QApplication::translate("VentanaPrincipal", "Enviar", 0, QApplication::UnicodeUTF8));
        btnSalir->setText(QApplication::translate("VentanaPrincipal", "Salir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VentanaPrincipal: public Ui_VentanaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPAL_H
