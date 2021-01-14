#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"

#include <qextserialport.h>
#include <qextserialenumerator.h>


void VentanaPrincipal::DatosRecibidos()
{
    unsigned char val;
    while(puertoSerie->bytesAvailable())
    {
        puertoSerie->read((char *)&val, sizeof(char));
        if(val == 's')
            permiso = true;
        else
            permiso = false;
    }
}

VentanaPrincipal::VentanaPrincipal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaPrincipal)
{
    ui->setupUi(this);
    puertoSerie = new QextSerialPort();
    puertoSerie->setBaudRate(BAUD9600);
    puertoSerie->setDataBits(DATA_8);
    puertoSerie->setFlowControl(FLOW_OFF);
    puertoSerie->setParity(PAR_NONE);
    puertoSerie->setStopBits(STOP_2);
    cfg = new portCfg(this);
}

VentanaPrincipal::~VentanaPrincipal()
{
    disconnect(puertoSerie, SIGNAL(readyRead()), this, SLOT(DatosRecibidos()));
    if(archivo.isOpen())
        archivo.close();
    if (puertoSerie->isOpen())
        puertoSerie->close();
    delete puertoSerie;
    delete ui;
}

void VentanaPrincipal::on_btnSeleccionArchivo_clicked()
{
    QString dir = QApplication::applicationDirPath();
    QString filtro = "Todos los archivos (*.*)";
    nombreArchivo = QFileDialog::getOpenFileName(this, "Archivo", dir, filtro);
    if(nombreArchivo != NULL)
    {
        ui->labNombreArchivo->setText(nombreArchivo.mid(nombreArchivo.lastIndexOf('/')+1));
        archivo.setFileName(nombreArchivo);
        archivo.open(QIODevice::ReadOnly);
        if(!archivo.isOpen())
        {
            msj.setText("Error! El archivo no existe, se renombro o se cambio su ruta.");
            msj.exec();
        }
        else
        {
            QString linea = nombreArchivo.mid(nombreArchivo.lastIndexOf('/')+1) + '|';
            binario = linea.toLocal8Bit() + archivo.readAll();
        }
    }
}

void VentanaPrincipal::on_btnConectar_clicked()
{
    if (puertoSerie->isOpen())
        puertoSerie->close();
    QList<QextPortInfo> puertos = QextSerialEnumerator::getPorts();
    foreach( QextPortInfo unPuerto, puertos )
    {
        cfg->ui->cmbPuertos->addItem(unPuerto.portName);
    }

    if(cfg->exec())
    {
       puertoSerie->setPortName(cfg->ui->cmbPuertos->currentText());
       puertoSerie->open(QIODevice::ReadWrite);
    }
    if(puertoSerie->isOpen())
      ui->labEstado->setText("Conectado a: " + cfg->ui->cmbPuertos->currentText());
    else
      ui->labEstado->setText("Desconectado");
}

void VentanaPrincipal::on_btnDesconectar_clicked()
{
    puertoSerie->close();
    if(puertoSerie->isOpen())
        ui->labEstado->setText("Conectado a: " + cfg->ui->cmbPuertos->currentText());
    else
      ui->labEstado->setText("Desconectado");
}

void VentanaPrincipal::on_btnSalir_clicked()
{
    close();
}

void VentanaPrincipal::on_btnEnviar_clicked()
{
    if(puertoSerie->isOpen())
    {
        connect(puertoSerie, SIGNAL(readyRead()), this, SLOT(DatosRecibidos()));
        if(permiso == true)
            puertoSerie->write(binario);
        else
        {
            msj.setText("Primero debe tener el permiso del receptor!");
            msj.exec();
        }
    }
    else
    {
        msj.setText("Primero debe conectar al puerto serie!");
        msj.exec();
    }
}
