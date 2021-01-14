#include "ventanaconfirmacion.h"
#include "ui_ventanaconfirmacion.h"

VentanaConfirmacion::VentanaConfirmacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaConfirmacion)
{
    ui->setupUi(this);
}

VentanaConfirmacion::~VentanaConfirmacion()
{
    delete ui;
}

void VentanaConfirmacion::on_btnAceptar_clicked()
{
    QDialog::accept();
}

void VentanaConfirmacion::on_btnCancelar_clicked()
{
    close();
}
