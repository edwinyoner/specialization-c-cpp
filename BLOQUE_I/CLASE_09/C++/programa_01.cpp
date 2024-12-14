/**
 * @author Edwin Yoner
 * @date 12/11/2024
 *
 *programa_01.cpp
 *
 * Este programa introduce conceptos clave como la inicialización directa,
 * el uso de punteros para acceder a los miembros de una estructura
 * y la creación de funciones para manipular estructuras.
 */

#include <iostream> // Biblioteca para entrada y salida
#include <string>   // Biblioteca para manejar cadenas de texto

/**
 * Estructura para representar un humano.
 */
struct Humano {
    std::string nombre; /**< Nombre del humano. */
    int edad;           /**< Edad del humano. */
    float peso;         /**< Peso del humano en kilogramos. */
};

/**
 * Prototipos de funciones.
 */
void mostrarHumano(const Humano &humano); /**< Muestra los datos de una estructura Humano. */
Humano crearHumano(const std::string &nombre, int edad, float peso); /**< Crea y retorna una estructura Humano. */

/**
 * Programa principal que muestra el uso de estructuras.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    Humano humano1 = {"Edwin", 25, 75.5}; /**< Inicialización directa. */
    Humano humano2 = crearHumano("Ana", 30, 65.5); /**< Creación mediante función. */

    std::cout << "### Ejemplo de Estructuras en C++ ###\n";

    std::cout << "\nHumano 1:\n";
    mostrarHumano(humano1); /**< Pasamos la referencia de humano1. */

    std::cout << "\nHumano 2:\n";
    mostrarHumano(humano2); /**< Pasamos la referencia de humano2. */

    return 0; /**< Indica que el programa terminó correctamente. */
}

/**
 * Muestra los datos de un humano.
 *
 * @param humano Referencia constante a una estructura de tipo Humano.
 */
void mostrarHumano(const Humano &humano) {
    std::cout << "Nombre: " << humano.nombre << "\n"; /**< Accedemos a los miembros directamente. */
    std::cout << "Edad: " << humano.edad << " años\n";
    std::cout << "Peso: " << humano.peso << " kg\n";
}

/**
 * Crea una estructura Humano con los valores proporcionados.
 *
 * @param nombre Nombre del humano.
 * @param edad Edad del humano.
 * @param peso Peso del humano en kilogramos.
 * @return Una estructura de tipo Humano inicializada.
 */
Humano crearHumano(const std::string &nombre, int edad, float peso) {
    Humano nuevoHumano; /**< Nueva estructura Humano. */
    nuevoHumano.nombre = nombre; /**< Asignamos el nombre directamente. */
    nuevoHumano.edad = edad;
    nuevoHumano.peso = peso;
    return nuevoHumano; /**< Retornamos la estructura inicializada. */
}