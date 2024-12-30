/**
 * @file programa_02.cpp
 * @brief Implementación de una clase genérica Humano usando plantillas en C++.
 *
 * Este programa demuestra el uso de plantillas en clases para manejar diferentes tipos de datos.
 * La clase Humano permite almacenar y operar con atributos de tipo genérico.
 *
 * - `T`: Tipo del peso.
 * - `U`: Tipo de la estatura.
 *
 * @author Edwin Yoner
 * @date 03/12/2024
 */

#include <iostream>
#include <cstring> // Para usar strcpy
using namespace std;

/**
 * @class Humano
 * @brief Clase genérica para representar a un humano con nombre, peso y estatura.
 *
 * @tparam T Tipo de dato para el atributo peso.
 * @tparam U Tipo de dato para el atributo estatura.
 */
template <typename T, typename U>
class Humano {
public:
    /**
     * @brief Constructor de la clase Humano.
     *
     * @param nombre Nombre del humano.
     * @param peso Peso del humano.
     * @param estatura Estatura del humano.
     */
    Humano(const char *nombre, T peso, U estatura) {
        strcpy(this->nombre, nombre); /**< Copia el nombre al atributo. */
        this->peso = peso;           /**< Inicializa el peso. */
        this->estatura = estatura;   /**< Inicializa la estatura. */
    }

    /**
     * @brief Método para imprimir la información del humano.
     */
    void imprime() const {
        cout << "Mi Nombre es: " << this->nombre
             << " y mi Peso es: " << this->peso << " Kg."
             << " y mi Estatura es: " << this->estatura << " Metros" << endl;
    }

private:
    char nombre[30]; /**< Nombre del humano. */
    T peso;          /**< Peso del humano. */
    U estatura;      /**< Estatura del humano. */
};

/**
 * @brief Programa principal que demuestra el uso de la clase genérica Humano.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Creación de un objeto Humano con tipos float y double
    Humano<float, double> humano1("Edwin", 80.7, 1.70);
    humano1.imprime(); /**< Imprime los detalles del primer humano. */

    // Creación de un objeto Humano con tipos int y float
    Humano<int, float> humano2("Diego", 25, 1.50);
    humano2.imprime(); /**< Imprime los detalles del segundo humano. */

    return 0; /**< Indica que el programa terminó correctamente. */
}