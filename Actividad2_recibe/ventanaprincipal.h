#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include <QDialog>
#include "portcfg.h"
#include "ui_portcfg.h"
#include "ventanaconfirmacion.h"
#include "ui_ventanaconfirmacion.h"
#include "ventanaarchivoexistente.h"
#include "ui_ventanaarchivoexistente.h"
#include <qextserialport.h>
#include <QextSerialEnumerator.h>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QSettings>
#include <QApplication>

namespace Ui {
class VentanaPrincipal;
}

class VentanaPrincipal : public QDialog
{
    Q_OBJECT
    
public:
    explicit VentanaPrincipal(QWidget *parent = 0);
    ~VentanaPrincipal();
    QextSerialPort * puertoSerie;
    void confirmacion();
    portCfg *cfg;
    
private slots:
    void on_btnConectar_clicked();

    void on_btnDesconectar_clicked();

    void on_btnSalir_clicked();

public slots:
    void DatosRecibidos();

private:
    Ui::VentanaPrincipal *ui;
    bool conectado;
    char v;
    VentanaConfirmacion *ventana;
    VentanaArchivoExistente *ventanaExistente;
    QMessageBox msj;
    QSettings *configuracion;
};

#endif // VENTANAPRINCIPAL_H
