/**
 * @author Edwin Yoner
 * @date 14/11/2024
 *
 * programa_01.cpp
 *
 * Este programa introduce conceptos clave sobre el uso de estructuras en C++, incluyendo:
 * - Uso de estructuras para agrupar datos relacionados.
 * - Inicialización y manipulación de estructuras.
 * - Mostrar los datos utilizando funciones auxiliares.
 */

#include <iostream> // Biblioteca estándar para entrada y salida
#include <string>   // Biblioteca para manejo de cadenas en C++

/**
 * Estructura para representar un humano.
 */
struct Humano {
    std::string nombre; /**< Nombre del humano. */
    int edad;           /**< Edad del humano. */
};

/**
 * Estructura para representar una persona.
 */
struct Persona {
    std::string nombre; /**< Nombre de la persona. */
    int edad;           /**< Edad de la persona. */
};

/**
 * Prototipos de funciones.
 */
void mostrarHumano(const Humano& humano); /**< Muestra los datos de un Humano. */
void mostrarPersona(const Persona& persona); /**< Muestra los datos de una Persona. */

/**
 * Programa principal que demuestra el uso de estructuras en C++.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    Humano humano = {"Edwin", 20}; /**< Inicialización directa de un Humano. */
    Persona persona = {"Yoner", 25}; /**< Inicialización directa de una Persona. */

    std::cout << "### Ejemplo de Estructuras en C++ ###\n\n";

    std::cout << "Humano:\n";
    mostrarHumano(humano); /**< Muestra los datos del Humano. */

    std::cout << "\nPersona:\n";
    mostrarPersona(persona); /**< Muestra los datos de la Persona. */

    return 0; /**< Indica que el programa terminó correctamente. */
}

/**
 * Muestra los datos de un Humano.
 *
 * @param humano Referencia constante a un Humano.
 */
void mostrarHumano(const Humano& humano) {
    std::cout << "Nombre: " << humano.nombre << "\n";
    std::cout << "Edad: " << humano.edad << "\n";
}

/**
 * Muestra los datos de una Persona.
 *
 * @param persona Referencia constante a una Persona.
 */
void mostrarPersona(const Persona& persona) {
    std::cout << "Nombre: " << persona.nombre << "\n";
    std::cout << "Edad: " << persona.edad << "\n";
}
