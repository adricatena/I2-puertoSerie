#ifndef VENTANAARCHIVOEXISTENTE_H
#define VENTANAARCHIVOEXISTENTE_H

#include <QDialog>
#include <QApplication>
#include <QSettings>
#include <QMessageBox>

namespace Ui {
class VentanaArchivoExistente;
}

class VentanaArchivoExistente : public QDialog
{
    Q_OBJECT
    
public:
    explicit VentanaArchivoExistente(QWidget *parent = 0);
    ~VentanaArchivoExistente();
    
private slots:
    void on_btnAceptar_clicked();

    void on_btnCancelar_clicked();

private:
    Ui::VentanaArchivoExistente *ui;
    QSettings * configuracion;
    QMessageBox msj;
};

#endif // VENTANAARCHIVOEXISTENTE_H
