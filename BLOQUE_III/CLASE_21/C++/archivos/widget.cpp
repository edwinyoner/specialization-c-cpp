#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent), file("/Users/edwinyoner/Documents/CURSOS DE ESPECIALIZACIÓN/C C++/github.com/edwinyoner/specialization-c-cpp/BLOQUE_III/CLASE_21/C++/archivos/datos.txt")
{
    // Tamaño de la ventana
    this->resize(600, 400);

    // **Centrar el label "PROYECTO" en la parte superior**
    label = new QLabel("PROYECTO", this);
    label->setGeometry((this->width() - 300) / 2, 20, 300, 50);  // Ancho 300, centrado horizontalmente
    label->setAlignment(Qt::AlignCenter);  // Alinear el texto al centro
    label->setStyleSheet("font-size: 30px; color: orange; font-weight: bold;");

    // **Caja de texto centrada**
    lineEdit = new QLineEdit(this);
    lineEdit->setGeometry((this->width() - 200) / 2, 100, 200, 30);  // Ancho 200, centrado horizontalmente
    lineEdit->setPlaceholderText("Ingresa un valor...");

    // **Botón "Escribir" centrado debajo de la caja de texto**
    boton = new QPushButton("Escribir", this);
    boton->setGeometry((this->width() - 150) / 2, 150, 150, 40);  // Ancho 150, centrado horizontalmente
    boton->setStyleSheet(
        "QPushButton {"
        "    background-color: #007bff;"
        "    color: white;"
        "    border-radius: 10px;"
        "    font-size: 18px;"
        "    padding: 10px;"
        "    transition: background-color 0.3s;"
        "}"
        "QPushButton:hover {"
        "    background-color: #0056b3;"
        "}"
        "QPushButton:pressed {"
        "    background-color: #004494;"
        "    padding-top: 2px;"
        "}"
        );
    connect(boton, &QPushButton::clicked, this, &Widget::escribirArchivo);

    // **Tabla de datos centrada en la parte inferior**
    table = new QTableWidget(this);
    table->setGeometry((this->width() - 400) / 2, 220, 400, 150);  // Ancho 400, centrado horizontalmente
    table->setColumnCount(2);
    table->setHorizontalHeaderLabels({"Fecha", "Valor"});
    table->setStyleSheet("font-size: 14px;");

    // Ajustar el ancho de las columnas
    table->setColumnWidth(0, 200);
    table->setColumnWidth(1, 180);

    // **Temporizador para actualizar la tabla**
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Widget::updateTable);
    timer->start(1000);

    // Intentar abrir el archivo
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        qWarning("No se pudo abrir el archivo para la escritura");
    }
}

Widget::~Widget() {
    if (file.isOpen()) {
        file.close();
    }
}

void Widget::updateTable() {
    qDebug() << "Actualizando tabla...";
}

void Widget::escribirArchivo() {
    if (file.isOpen()) {
        QTextStream out(&file);
        QString currentTime = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
        QString valor = lineEdit->text();

        if (!valor.isEmpty()) {
            out << currentTime << " - " << valor << "\n";

            // Agregar datos a la tabla
            int row = table->rowCount();
            table->insertRow(row);
            table->setItem(row, 0, new QTableWidgetItem(currentTime));
            table->setItem(row, 1, new QTableWidgetItem(valor));

            // Limpiar la línea de edición
            lineEdit->clear();
        }
    } else {
        qWarning("No se puede escribir, el archivo no está abierto");
    }
}
