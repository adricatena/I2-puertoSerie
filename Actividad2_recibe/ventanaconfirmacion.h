#ifndef VENTANACONFIRMACION_H
#define VENTANACONFIRMACION_H

#include <QDialog>

namespace Ui {
class VentanaConfirmacion;
}

class VentanaConfirmacion : public QDialog
{
    Q_OBJECT
    
public:
    explicit VentanaConfirmacion(QWidget *parent = 0);
    ~VentanaConfirmacion();
    
private slots:
    void on_btnAceptar_clicked();

    void on_btnCancelar_clicked();

private:
    Ui::VentanaConfirmacion *ui;
};

#endif // VENTANACONFIRMACION_H
