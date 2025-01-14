#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QString>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>


class Widget : public QWidget
{
    Q_OBJECT
private:
    const int WINDOW_WIDTH = 500;
    const int WINDOW_HEIGHT = 500;
    const int WINDOW_X = 750;
    const int WINDOW_Y = 250;

    //QHBoxLayout *layout;
    QString titulo;
    QLabel *labelNombreProyecto;
    QLabel *labelCampo1;
    QLabel *labelCampo2;
    QLabel *labelResultado;
    QLineEdit *campo1;
    QLineEdit *campo2;
    QLineEdit *campoResultado;
    QPushButton *botonSumar;
    QPushButton *botonRestar;
    QPushButton *botonMultiplicar;
    QPushButton *botonDividir;


public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


private:
    void initUI();

private slots:
    void sumar();
    void restar();
    void multiplicar();
    void dividir();

};
#endif // WIDGET_H
