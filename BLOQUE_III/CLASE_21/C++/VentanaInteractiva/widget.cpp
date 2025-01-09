#include "widget.h"
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent), titulo("Ventana Principal"), label(nullptr), boton1(nullptr), boton2(nullptr)
{
    initUI();
}

Widget::~Widget() {}

void Widget::initUI()
{
    // Configuración de la ventana
    setGeometry(WINDOW_X, WINDOW_Y, WINDOW_WIDTH, WINDOW_HEIGHT);
    setWindowTitle(titulo);

    // Crear y configurar la etiqueta
    label = new QLabel("Texto 1", this);
    label->move(100, 100);

    // Crear y configurar la etiqueta
    label1 = new QLabel("", this);
    label1->move(350, 200);

    // Crear y configurar los botones
    boton1 = new QPushButton("Activar", this);
    boton1->move(200, 100);
    connect(boton1, &QPushButton::clicked, this, &Widget::activar);

    boton2 = new QPushButton("Desactivar", this);
    boton2->move(300, 100);
    connect(boton2, &QPushButton::clicked, this, &Widget::desactivar);

    // Crear Slider
    slider = new QSlider(Qt::Horizontal, this);
    slider->setRange(0, 100);
    slider->setGeometry(100, 200, 200, 25);
    connect(slider, &QSlider::valueChanged, this, &Widget::datos);
}

void Widget::activar()
{
    qDebug() << "Activado";
    label->setText("Activado");
    label->adjustSize();
}

void Widget::desactivar()
{
    qDebug() << "Desactivado";
    label->setText("Desactivado");
    label->adjustSize();
}

void Widget::datos(int value){
    qDebug() << value;
    label1->setText(QString("%1").arg(value));
    label1->adjustSize();
}
