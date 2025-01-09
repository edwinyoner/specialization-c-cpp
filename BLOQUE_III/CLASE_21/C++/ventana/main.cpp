/*
#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
*/

//Date 05/12/2024


#include <QWidget>
#include <QLabel>
#include <QApplication>
#include <QPushButton>

class App : public QWidget // Heredamos de QWidget
{
private:
    int width;
    int height;
    QString title;
    int x = 100;
    int y = 100;
    QLabel *label1;
    QPushButton *boton1, *boton2;

public:
    // Constructor
    App(int w, int h, QString t) : width(w), height(h), title(t) {
        initUI();
    }

    // Método para inicializar la interfaz
    void initUI() {
        setGeometry(x, y, width, height); // Usa los valores configurados
        setWindowTitle(title);           // Establece el título de la ventana
        // Creamos un QLabel y establecemos su texto
        this->label1 = new QLabel("Texto 1", this);
        this->label1->move(100, 100);
        // Creamos un boton
        this->boton1 = new QPushButton("Activar", this);
        this->boton1->move(300, 100);
        connect(boton1, &QPushButton::clicked, this, &App::activar);

        // Creamos un boton
        this->boton2 = new QPushButton("Desactivar", this);
        this->boton2->move(400, 100);
        connect(boton2, &QPushButton::clicked, this, &App::desactivar);

        show();                          // Muestra la ventana
    }

    void activar(){
        qDebug() << "Activado";
    }

    void desactivar(){
        qDebug() << "Desactivado";
    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Crear y configurar la ventana
    App ventana(600, 300, "Ventana 1");


    return a.exec();
}

