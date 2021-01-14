/********************************************************************************
** Form generated from reading UI file 'ventanaarchivoexistente.ui'
**
** Created: Wed 5. Dec 11:11:27 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAARCHIVOEXISTENTE_H
#define UI_VENTANAARCHIVOEXISTENTE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaArchivoExistente
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *labTituloArchivoExistente;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labTitulo2ArchivoExistente;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *checkBoxSi;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *checkBoxNo;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout;
    QLabel *labTituloRenombrar;
    QLineEdit *leNombreArchivo;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnAceptar;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnCancelar;

    void setupUi(QDialog *VentanaArchivoExistente)
    {
        if (VentanaArchivoExistente->objectName().isEmpty())
            VentanaArchivoExistente->setObjectName(QString::fromUtf8("VentanaArchivoExistente"));
        VentanaArchivoExistente->resize(269, 161);
        widget = new QWidget(VentanaArchivoExistente);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 249, 139));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        labTituloArchivoExistente = new QLabel(widget);
        labTituloArchivoExistente->setObjectName(QString::fromUtf8("labTituloArchivoExistente"));

        horizontalLayout_4->addWidget(labTituloArchivoExistente);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labTitulo2ArchivoExistente = new QLabel(widget);
        labTitulo2ArchivoExistente->setObjectName(QString::fromUtf8("labTitulo2ArchivoExistente"));

        horizontalLayout_5->addWidget(labTitulo2ArchivoExistente);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        checkBoxSi = new QCheckBox(widget);
        checkBoxSi->setObjectName(QString::fromUtf8("checkBoxSi"));
        checkBoxSi->setChecked(true);

        horizontalLayout_3->addWidget(checkBoxSi);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        checkBoxNo = new QCheckBox(widget);
        checkBoxNo->setObjectName(QString::fromUtf8("checkBoxNo"));

        horizontalLayout_3->addWidget(checkBoxNo);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labTituloRenombrar = new QLabel(widget);
        labTituloRenombrar->setObjectName(QString::fromUtf8("labTituloRenombrar"));

        horizontalLayout->addWidget(labTituloRenombrar);

        leNombreArchivo = new QLineEdit(widget);
        leNombreArchivo->setObjectName(QString::fromUtf8("leNombreArchivo"));

        horizontalLayout->addWidget(leNombreArchivo);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnAceptar = new QPushButton(widget);
        btnAceptar->setObjectName(QString::fromUtf8("btnAceptar"));

        horizontalLayout_2->addWidget(btnAceptar);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        btnCancelar = new QPushButton(widget);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));

        horizontalLayout_2->addWidget(btnCancelar);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(VentanaArchivoExistente);

        QMetaObject::connectSlotsByName(VentanaArchivoExistente);
    } // setupUi

    void retranslateUi(QDialog *VentanaArchivoExistente)
    {
        VentanaArchivoExistente->setWindowTitle(QApplication::translate("VentanaArchivoExistente", "Dialog", 0, QApplication::UnicodeUTF8));
        labTituloArchivoExistente->setText(QApplication::translate("VentanaArchivoExistente", "Archivo existente", 0, QApplication::UnicodeUTF8));
        labTitulo2ArchivoExistente->setText(QApplication::translate("VentanaArchivoExistente", "\302\277Desea sobre escribirlo?", 0, QApplication::UnicodeUTF8));
        checkBoxSi->setText(QApplication::translate("VentanaArchivoExistente", "Si", 0, QApplication::UnicodeUTF8));
        checkBoxNo->setText(QApplication::translate("VentanaArchivoExistente", "No", 0, QApplication::UnicodeUTF8));
        labTituloRenombrar->setText(QApplication::translate("VentanaArchivoExistente", "Renombrar :", 0, QApplication::UnicodeUTF8));
        btnAceptar->setText(QApplication::translate("VentanaArchivoExistente", "Aceptar", 0, QApplication::UnicodeUTF8));
        btnCancelar->setText(QApplication::translate("VentanaArchivoExistente", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VentanaArchivoExistente: public Ui_VentanaArchivoExistente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAARCHIVOEXISTENTE_H
