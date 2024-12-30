/**
 * @file programa_03.cpp
 * @brief Implementación de la clase Humano con una función amiga para acceso directo a sus atributos privados.
 *
 * Este programa define una clase Humano que incluye:
 * - Un constructor para inicializar los atributos.
 * - Un método miembro para imprimir los datos del objeto.
 * - Una función amiga que puede acceder directamente a los atributos privados de la clase.
 *
 * @author Edwin Yoner
 * @date 03/12/2024
 */

#include <iostream>
#include <cstring> // Para usar strcpy
using namespace std;

/**
 * @class Humano
 * @brief Clase que representa a un humano con nombre y edad.
 */
class Humano {
private:
    char nombre[30]; /**< Nombre del humano. */
    int edad;        /**< Edad del humano. */

public:
    /**
     * @brief Constructor de la clase Humano.
     *
     * @param nombre Nombre del humano.
     * @param edad Edad del humano.
     */
    Humano(const char *nombre, int edad) {
        strcpy(this->nombre, nombre); /**< Copia el nombre al atributo privado. */
        this->edad = edad;           /**< Inicializa la edad. */
    }

    /**
     * @brief Método para imprimir los datos del humano.
     */
    void imprime() const {
        cout << "Mi Nombre es: " << this->nombre
             << " y tengo: " << this->edad << " años. " << endl;
    }

    /**
     * @brief Función amiga para acceder directamente a los atributos privados.
     *
     * @param humano Referencia al objeto Humano.
     */
    friend void imprimirDatos(Humano &humano);
};

/**
 * @brief Función amiga para imprimir el nombre del humano.
 *
 * @param humano Referencia al objeto Humano.
 */
void imprimirDatos(Humano &humano) {
    cout << "Mi Nombre es: " << humano.nombre << endl; /**< Acceso directo a los atributos privados. */
}

/**
 * @brief Programa principal que demuestra el uso de la clase Humano y una función amiga.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Creación de objetos de la clase Humano
    Humano humano1("Edwin", 25); /**< Inicializa un humano llamado Edwin con edad 25. */
    humano1.imprime();            /**< Imprime los detalles del humano1. */

    Humano humano2("Diego", 5); /**< Inicializa un humano llamado Diego con edad 5. */
    humano2.imprime();           /**< Imprime los detalles del humano2. */

    // Uso de la función amiga
    imprimirDatos(humano1); /**< Imprime el nombre de humano1 usando la función amiga. */

    return 0; /**< Indica que el programa terminó correctamente. */
}