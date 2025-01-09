#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QFile>
#include <QTextStream>
#include <QLineEdit>
#include <QDateTime>
#include <QTimer>
#include <QTableWidget>


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    void escribirArchivo();
    void updateTable();

private:
    QLabel *label;
    QPushButton *boton;
    QFile file;
    QLineEdit *lineEdit;
    QTimer *timer;
    QTableWidget *table;
};

#endif // WIDGET_H
