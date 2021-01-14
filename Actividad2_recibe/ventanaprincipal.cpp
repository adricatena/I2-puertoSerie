#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"

void VentanaPrincipal::DatosRecibidos()
{
    QByteArray lectura;
    while(puertoSerie->bytesAvailable())
    {

        lectura.resize(puertoSerie->bytesAvailable());
        lectura = puertoSerie->read(puertoSerie->bytesAvailable());
        QString nombreArchivo = QApplication::applicationDirPath() + '/' + lectura.left(lectura.indexOf('|'));
        QFile archivo(nombreArchivo);
        if(archivo.exists() == true)
        {
            configuracion->setValue("Nombre", nombreArchivo);
            if(ventanaExistente->exec() == QDialog::Accepted)
            {
                nombreArchivo = configuracion->value("Nombre", "").toString();
                archivo.setFileName(nombreArchivo);
            }
            else
            {
                msj.setText("Error! No se eligio ninguna opcion a realizar.");
                msj.exec();
            }

        }
        archivo.open(QIODevice::Truncate | QIODevice::WriteOnly);
        if(!archivo.isOpen())
        {
            msj.setText("Error! No se pudo crear el archivo");
            msj.exec();
        }
        else
        {
            //archivo.write(lectura.right(lectura.indexOf('|')+1));
            archivo.write(lectura.mid(lectura.indexOf('|')+1));
            archivo.close();
        }
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

    ventana = new VentanaConfirmacion(this);
    ventanaExistente = new VentanaArchivoExistente(this);

    configuracion = new QSettings("Informatica II", "Actividad 2", this);
    cfg = new portCfg(this);
}

VentanaPrincipal::~VentanaPrincipal()
{
    delete configuracion;
    if(conectado == true)
        disconnect(puertoSerie, SIGNAL(readyRead()), this, SLOT(DatosRecibidos()));
    if(puertoSerie->isOpen())
        puertoSerie->close();
    delete puertoSerie;
    delete ui;
}

void VentanaPrincipal::on_btnConectar_clicked()
{
    if (puertoSerie->isOpen())
        puertoSerie->close();
    QList<QextPortInfo> puertos =
            QextSerialEnumerator::getPorts();
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
    {
      ui->labEstado->setText("Conectado a: " + cfg->ui->cmbPuertos->currentText());
      confirmacion();
    }
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

void VentanaPrincipal::confirmacion()
{
    if(ventana->exec() == QDialog::Accepted)
    {
        v = 's';
        puertoSerie->write(&v, sizeof(char));
        conectado = true;
        connect(puertoSerie, SIGNAL(readyRead()), this, SLOT(DatosRecibidos()));
    }
    else
    {
        v = 'n';
        puertoSerie->write(&v, sizeof(char));
        conectado = false;
        on_btnDesconectar_clicked();
    }
}
