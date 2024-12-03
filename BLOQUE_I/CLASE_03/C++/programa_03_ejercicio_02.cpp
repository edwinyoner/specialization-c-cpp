/**
* @author Edwin Yoner
 * @date 29/10/2024
 *
 * promedio.cpp
 *
 * Este programa calcula el promedio de dos notas de un alumno,
 * solicitando al usuario que ingrese ambas notas a través de la consola.
 */

#include <iostream> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Variables para almacenar las dos notas y el promedio
    float nota1, nota2, promedio;

    // Solicitar al usuario que ingrese la primera nota
    std::cout << "Ingrese la primera nota: ";
    std::cin >> nota1;  // Leer el valor de la primera nota

    // Solicitar al usuario que ingrese la segunda nota
    std::cout << "Ingrese la segunda nota: ";
    std::cin >> nota2;  // Leer el valor de la segunda nota

    // Calcular el promedio de las dos notas
    promedio = (nota1 + nota2) / 2;

    // Imprimir el resultado
    std::cout << "El promedio de las notas del alumno es: " << promedio << std::endl;

    return 0; // Indica que el programa terminó correctamente
}
