#include "ventanaarchivoexistente.h"
#include "ui_ventanaarchivoexistente.h"

VentanaArchivoExistente::VentanaArchivoExistente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaArchivoExistente)
{
    ui->setupUi(this);
    configuracion = new QSettings("Informatica II", "Actividad 2", this);
}

VentanaArchivoExistente::~VentanaArchivoExistente()
{
    delete configuracion;
    delete ui;
}

void VentanaArchivoExistente::on_btnAceptar_clicked()
{
    if(ui->checkBoxSi->isChecked() && ui->checkBoxNo->isChecked())
    {
        msj.setText("Error! Ambas opciones estan seleccionadas.");
        msj.exec();
    }
    else
    {
        if(ui->checkBoxNo->isChecked())
        {
            QString nombreViejo = configuracion->value("Nombre", "").toString();
            QString nombreNuevo = nombreViejo.left(nombreViejo.lastIndexOf('/')) + ui->leNombreArchivo->text();
            configuracion->setValue("Nombre", nombreNuevo);
        }
        QDialog::accept();
    }
}

void VentanaArchivoExistente::on_btnCancelar_clicked()
{
    close();
}
