#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QString>
#include <QSlider>

class Widget : public QWidget
{
    Q_OBJECT

private:
    QString titulo;         // Título de la ventana
    QLabel *label;          // Etiqueta para mostrar texto
    QLabel *label1;
    QPushButton *boton1;    // Botón "Activar"
    QPushButton *boton2;    // Botón "Desactivar"
    QSlider *slider;

    const int WINDOW_WIDTH = 600;  // Constantes para el tamaño
    const int WINDOW_HEIGHT = 300;
    const int WINDOW_X = 100;
    const int WINDOW_Y = 100;

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    void initUI();          // Inicialización de la interfaz

private slots:
    void activar();         // Slot para activar
    void desactivar();      // Slot para desactivar
    void datos(int value);
};

#endif // WIDGET_H
