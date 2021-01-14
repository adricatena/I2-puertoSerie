/********************************************************************************
** Form generated from reading UI file 'ventanaprincipal.ui'
**
** Created: Wed 5. Dec 11:11:26 2012
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
    QHBoxLayout *horizontalLayout_2;
    QLabel *labTituloEstado;
    QLabel *labEstado;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnConectar;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnDesconectar;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnSalir;

    void setupUi(QDialog *VentanaPrincipal)
    {
        if (VentanaPrincipal->objectName().isEmpty())
            VentanaPrincipal->setObjectName(QString::fromUtf8("VentanaPrincipal"));
        VentanaPrincipal->resize(353, 77);
        widget = new QWidget(VentanaPrincipal);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 333, 55));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labTituloEstado = new QLabel(widget);
        labTituloEstado->setObjectName(QString::fromUtf8("labTituloEstado"));

        horizontalLayout_2->addWidget(labTituloEstado);

        labEstado = new QLabel(widget);
        labEstado->setObjectName(QString::fromUtf8("labEstado"));

        horizontalLayout_2->addWidget(labEstado);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnConectar = new QPushButton(widget);
        btnConectar->setObjectName(QString::fromUtf8("btnConectar"));

        horizontalLayout->addWidget(btnConectar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnDesconectar = new QPushButton(widget);
        btnDesconectar->setObjectName(QString::fromUtf8("btnDesconectar"));

        horizontalLayout->addWidget(btnDesconectar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

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
        labTituloEstado->setText(QApplication::translate("VentanaPrincipal", "Estado:", 0, QApplication::UnicodeUTF8));
        labEstado->setText(QApplication::translate("VentanaPrincipal", "Desconectado", 0, QApplication::UnicodeUTF8));
        btnConectar->setText(QApplication::translate("VentanaPrincipal", "Conectar", 0, QApplication::UnicodeUTF8));
        btnDesconectar->setText(QApplication::translate("VentanaPrincipal", "Desconectar", 0, QApplication::UnicodeUTF8));
        btnSalir->setText(QApplication::translate("VentanaPrincipal", "Salir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VentanaPrincipal: public Ui_VentanaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPAL_H
