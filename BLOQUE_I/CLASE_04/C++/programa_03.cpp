/**
 * @author Edwin Yoner
 * @date 02/11/2024
 *
 * programa_03.cpp
 *
 * Este programa imprime una cantidad de asteriscos (*) en una sola línea,
 * según el número ingresado por el usuario.
 */

#include <iostream> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Variable para almacenar el número ingresado
    int numero;

    // Solicitar al usuario que ingrese un número entero positivo
    std::cout << "Ingrese un número entero positivo para imprimir asteriscos: ";
    std::cin >> numero;

    // Validar que el número sea positivo
    if (numero <= 0) {
        std::cout << "Por favor, ingrese un número mayor a 0." << std::endl;
        return 1; // Salida temprana por error
    }

    // Imprimir los asteriscos en una sola línea
    std::cout << "Asteriscos generados:" << std::endl;
    for (int i = 1; i <= numero; i++) {
        std::cout << "* ";
    }
    std::cout << std::endl;

    return 0; // Indica que el programa terminó correctamente
}
