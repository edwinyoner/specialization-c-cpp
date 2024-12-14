/**
 * @author Edwin Yoner
 * @date 09/11/2024
 *
 * programa_01.cpp
 *
 * Este programa demuestra el uso de recursión en C++ para imprimir números
 * en orden ascendente utilizando el paso de parámetros por valor.
 */

#include <iostream> // Biblioteca estándar para entrada y salida

// Prototipo de la función recursiva
void imprimirAscendente(int x);

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    int numero;

    std::cout << "### Programa de Recursión: Impresión Ascendente ###" << std::endl;
    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "Por favor, ingrese un número positivo." << std::endl;
    } else {
        std::cout << "Números en orden ascendente:" << std::endl;
        imprimirAscendente(numero);
    }

    return 0; // Indica que el programa terminó correctamente
}

/**
 * Función recursiva que imprime números desde 0 hasta el valor dado en orden ascendente.
 *
 * @param x Número hasta el cual se imprimirán los valores.
 */
void imprimirAscendente(int x) {
    if (x > 0) {
        imprimirAscendente(x - 1); // Llamada recursiva
    }
    std::cout << x << std::endl; // Imprime después de la llamada recursiva
}