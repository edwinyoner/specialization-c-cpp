#include "widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent), titulo("PROYECTO FINAL - EDWIN YONER")
{
    initUI();
}

Widget::~Widget() {}

void Widget::initUI() {
    // Configuración de la ventana
    setGeometry(WINDOW_X, WINDOW_Y, WINDOW_WIDTH, WINDOW_HEIGHT);
    setWindowTitle(titulo);

    // Crear y configurar la etiqueta
    labelNombreProyecto = new QLabel("CALCULADORA", this);
    labelNombreProyecto->setStyleSheet("font-size: 20px; font-weight: bold; color: orange;");
    labelNombreProyecto->move(175, 50);

    labelCampo1 = new QLabel("VALOR 1", this);
    labelCampo1->setStyleSheet("font-size: 15px; font-weight: bold; color: green;");
    labelCampo1->move(150, 130);

    labelCampo2 = new QLabel("VALOR 2", this);
    labelCampo2->setStyleSheet("font-size: 15px; font-weight: bold; color: green;");
    labelCampo2->move(300, 130);

    labelResultado = new QLabel("RESULTADO", this);
    labelResultado->setStyleSheet("font-size: 20px; font-weight: bold; color: green;");
    labelResultado->move(200, 240);

    // Crear y configurar los campos de entrada
    campo1 = new QLineEdit(this);
    campo2 = new QLineEdit(this);
    campo1->setGeometry(150, 150, 50, 25);  // Campo 1
    campo2->setGeometry(300, 150, 50, 25);  // Campo 2

    // Crear y configurar el campo de salida
    campoResultado = new QLineEdit(this);
    campoResultado->setGeometry(150, 270, 200, 30);
    campoResultado->setReadOnly(true);


    // Crear y configurar los botones de la calculadora
    botonSumar = new QPushButton("+", this);
    botonSumar->move(150, 200);
    connect(botonSumar, &QPushButton::clicked, this, &Widget::sumar);

    botonRestar = new QPushButton("-", this);
    botonRestar->move(200, 200);
    connect(botonRestar, &QPushButton::clicked, this, &Widget::restar);

    botonMultiplicar = new QPushButton("*", this);
    botonMultiplicar->move(250, 200);
    connect(botonMultiplicar, &QPushButton::clicked, this, &Widget::multiplicar);

    botonDividir = new QPushButton("/", this);
    botonDividir->move(300, 200);
    connect(botonDividir, &QPushButton::clicked, this, &Widget::dividir);
}


void Widget::sumar(){
    int num1 = campo1->text().toInt();
    int num2 = campo2->text().toInt();
    int resultado = num1 + num2;
    campoResultado->setText(QString::number(resultado));
}

void Widget::restar(){
    int num1 = campo1->text().toInt();
    int num2 = campo2->text().toInt();
    int resultado = num1 - num2;
    campoResultado->setText(QString::number(resultado));
}

void Widget::multiplicar(){
    int num1 = campo1->text().toInt();
    int num2 = campo2->text().toInt();
    int resultado = num1 * num2;
    campoResultado->setText(QString::number(resultado));
}

void Widget::dividir(){
    int num1 = campo1->text().toInt();
    int num2 = campo2->text().toInt();
    if (num2 == 0) {
        QMessageBox::warning(this, "Error", "No se puede dividir entre 0");
        campoResultado->clear();
    } else {
        double resultado = static_cast<double>(num1) / num2;
        campoResultado->setText(QString::number(resultado));
    }
}


