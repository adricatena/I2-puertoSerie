#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include <QDialog>
#include <qextserialport.h>
#include <QFileDialog>
#include <QMessageBox>
#include <QSettings>
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include "portcfg.h"
#include "ui_portcfg.h"

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
    portCfg *cfg;
    
private slots:
    void on_btnSeleccionArchivo_clicked();

    void on_btnConectar_clicked();

    void on_btnDesconectar_clicked();

    void on_btnSalir_clicked();

    void on_btnEnviar_clicked();

public slots:
    void DatosRecibidos();

private:
    Ui::VentanaPrincipal *ui;
    QString nombreArchivo;
    QMessageBox msj;
    bool permiso;
    QFile archivo;
    QByteArray binario;
};

#endif // VENTANAPRINCIPAL_H
