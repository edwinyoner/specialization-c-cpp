/**
 * @file programa_06.cpp
 * @author Edwin Yoner
 * @date 28/12/2024
 *
 * Este programa implementa el concepto de **clases abstractas** y **herencia** en C++.
 * La clase `Figura` es una clase abstracta con métodos virtuales puros `area` y `perimetro`.
 * Las clases `Circulo` y `Triangulo` heredan de `Figura` y definen sus propios cálculos.
 */

#include <iostream>

/**
 * @class Figura
 * @brief Clase abstracta que representa una figura geométrica.
 *
 * La clase define métodos virtuales puros `area` y `perimetro`, que deben ser implementados
 * por las clases derivadas.
 */
class Figura {
public:
    /**
     * @brief Método virtual puro para calcular el área de la figura.
     * @return El área de la figura.
     */
    virtual double area() = 0;

    /**
     * @brief Método virtual puro para calcular el perímetro de la figura.
     * @return El perímetro de la figura.
     */
    virtual double perimetro() = 0;

    /**
     * @brief Destructor virtual para asegurar la correcta destrucción de objetos derivados.
     */
    virtual ~Figura() {}
};

/**
 * @class Circulo
 * @brief Clase que representa un círculo. Hereda de la clase `Figura`.
 */
class Circulo : public Figura {
private:
    double radio; /**< Radio del círculo. */

public:
    /**
     * @brief Constructor para inicializar el radio del círculo.
     * @param r Radio del círculo.
     */
    Circulo(double r) : radio(r) {}

    /**
     * @brief Calcula el área del círculo.
     * @return El área del círculo.
     */
    double area() override {
        return 3.1416 * radio * radio;
    }

    /**
     * @brief Calcula el perímetro del círculo.
     * @return El perímetro del círculo.
     */
    double perimetro() override {
        return 2 * 3.1416 * radio;
    }
};

/**
 * @class Triangulo
 * @brief Clase que representa un triángulo. Hereda de la clase `Figura`.
 */
class Triangulo : public Figura {
private:
    double base; /**< Base del triángulo. */
    double altura; /**< Altura del triángulo. */

public:
    /**
     * @brief Constructor para inicializar la base y la altura del triángulo.
     * @param base Base del triángulo.
     * @param altura Altura del triángulo.
     */
    Triangulo(double base, double altura) : base(base), altura(altura) {}

    /**
     * @brief Calcula el área del triángulo.
     * @return El área del triángulo.
     */
    double area() override {
        return 0.5 * base * altura;
    }

    /**
     * @brief Calcula el perímetro del triángulo (solo un ejemplo fijo para simplificar).
     * @return El perímetro del triángulo.
     */
    double perimetro() override {
        return base + altura + 3.0; // Nota: Solo un valor fijo como ejemplo.
    }
};

/**
 * @brief Función principal.
 * Crea objetos dinámicos de `Circulo` y `Triangulo`, y los utiliza a través de punteros de tipo `Figura`.
 *
 * @return 0 si la ejecución es exitosa.
 */
int main() {
    // Crear un objeto de tipo `Circulo` usando un puntero de tipo `Figura`
    Figura *figura1 = new Circulo(5);
    std::cout << "Área del círculo: " << figura1->area() << "\n";

    // Crear un objeto de tipo `Triangulo` usando un puntero de tipo `Figura`
    Figura *figura2 = new Triangulo(3, 4);
    std::cout << "Área del triángulo: " << figura2->area() << "\n";

    // Liberar la memoria dinámica asignada
    delete figura1;
    delete figura2;

    return 0;
}