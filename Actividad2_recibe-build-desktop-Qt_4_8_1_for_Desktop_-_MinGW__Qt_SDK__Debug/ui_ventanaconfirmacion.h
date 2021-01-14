/********************************************************************************
** Form generated from reading UI file 'ventanaconfirmacion.ui'
**
** Created: Wed 5. Dec 11:11:26 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANACONFIRMACION_H
#define UI_VENTANACONFIRMACION_H

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

class Ui_VentanaConfirmacion
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labTituloConfirmacion;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAceptar;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancelar;

    void setupUi(QDialog *VentanaConfirmacion)
    {
        if (VentanaConfirmacion->objectName().isEmpty())
            VentanaConfirmacion->setObjectName(QString::fromUtf8("VentanaConfirmacion"));
        VentanaConfirmacion->resize(244, 79);
        widget = new QWidget(VentanaConfirmacion);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 221, 55));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        labTituloConfirmacion = new QLabel(widget);
        labTituloConfirmacion->setObjectName(QString::fromUtf8("labTituloConfirmacion"));

        horizontalLayout_2->addWidget(labTituloConfirmacion);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAceptar = new QPushButton(widget);
        btnAceptar->setObjectName(QString::fromUtf8("btnAceptar"));

        horizontalLayout->addWidget(btnAceptar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCancelar = new QPushButton(widget);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));

        horizontalLayout->addWidget(btnCancelar);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VentanaConfirmacion);

        QMetaObject::connectSlotsByName(VentanaConfirmacion);
    } // setupUi

    void retranslateUi(QDialog *VentanaConfirmacion)
    {
        VentanaConfirmacion->setWindowTitle(QApplication::translate("VentanaConfirmacion", "Dialog", 0, QApplication::UnicodeUTF8));
        labTituloConfirmacion->setText(QApplication::translate("VentanaConfirmacion", "\302\277Desea recibir un archivo?", 0, QApplication::UnicodeUTF8));
        btnAceptar->setText(QApplication::translate("VentanaConfirmacion", "Aceptar", 0, QApplication::UnicodeUTF8));
        btnCancelar->setText(QApplication::translate("VentanaConfirmacion", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VentanaConfirmacion: public Ui_VentanaConfirmacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANACONFIRMACION_H
