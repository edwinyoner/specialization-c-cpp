/**
 * @author Edwin Yoner
 * @date 02/11/2024
 *
 * programa_04.cpp
 *
 * Este programa genera un rectángulo de asteriscos (*) con el número
 * de filas y columnas especificado por el usuario.
 */

#include <iostream> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Variables para almacenar el número de filas y columnas
    int filas, columnas;

    // Solicitar al usuario el número de filas
    std::cout << "Ingrese el número de filas: ";
    std::cin >> filas;

    // Solicitar al usuario el número de columnas
    std::cout << "Ingrese el número de columnas: ";
    std::cin >> columnas;

    // Validar que las filas y columnas sean mayores a 0
    if (filas <= 0 || columnas <= 0) {
        std::cout << "Error: Las filas y columnas deben ser mayores a 0." << std::endl;
        return 1; // Salida temprana por error
    }

    // Generar el rectángulo de asteriscos
    std::cout << "Rectángulo generado:" << std::endl;
    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= columnas; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0; // Indica que el programa terminó correctamente
}