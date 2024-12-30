/**
 * @file programa_01.cpp
 * @brief Implementación de una clase Humano en C++ con constructor, getters y setters.
 *
 * Este programa define una clase Humano con los siguientes elementos:
 * - Constructor para inicializar los atributos.
 * - Métodos getter y setter para manipular la edad.
 * - Método para saludar mostrando los datos del objeto.
 *
 * @author Edwin Yoner
 * @date 28/11/2024
 */

#include <iostream>
using namespace std;

/**
 * @class Humano
 * @brief Clase que representa un humano con nombre y edad.
 */
class Humano {
public:
    /**
     * @brief Constructor que inicializa los atributos de la clase.
     *
     * @param nombre Nombre del humano.
     * @param edad Edad del humano.
     */
    Humano(string nombre, int edad) {
        this->nombre = nombre; /**< Inicializa el nombre. */
        this->edad = edad;     /**< Inicializa la edad. */
    }

    /**
     * @brief Método para saludar mostrando los datos del humano.
     */
    void saludar() const {
        cout << "Hola, soy " << this->nombre << " y tengo " << this->edad << " años." << endl;
    }

    /**
     * @brief Establece la edad del humano.
     *
     * @param edad Nueva edad del humano.
     */
    void setEdad(int edad) {
        this->edad = edad; /**< Actualiza la edad. */
    }

    /**
     * @brief Obtiene la edad del humano.
     *
     * @return Edad actual del humano.
     */
    int getEdad() const {
        return this->edad; /**< Retorna la edad actual. */
    }
private:
    string nombre; /**< Nombre del humano. */
    int edad;      /**< Edad del humano. */
};

/**
 * @brief Programa principal que demuestra el uso de la clase Humano.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Creación de un objeto de la clase Humano
    Humano humano("Edwin", 20); /**< Inicializa un humano llamado Edwin con edad 20. */

    // Muestra los datos iniciales
    humano.saludar();

    // Actualiza la edad del humano
    humano.setEdad(25); /**< Cambia la edad a 25. */

    // Muestra los datos actualizados
    humano.saludar();

    // Imprime la edad usando el getter
    cout << "Edad obtenida: " << humano.getEdad() << endl;

    return 0; /**< Indica que el programa terminó correctamente. */
}