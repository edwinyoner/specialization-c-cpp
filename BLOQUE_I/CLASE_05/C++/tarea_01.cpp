/**
 * @author Edwin Yoner
 * @date 31/10/2024
 *
 * tarea_01.cpp
 *
 * Este programa imprime una secuencia numérica basada en la fórmula `(i * i) + 1`,
 * donde `i` es el índice actual en el bucle. La secuencia comienza con 1 y sigue con
 * números como 3, 5, 10, 17, etc.
 */

#include <iostream> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Variable para el límite de la secuencia
    int numero;

    // Solicitar al usuario el número de elementos a generar
    std::cout << "Ingrese la cantidad de números a imprimir en la secuencia: ";
    std::cin >> numero;

    // Generar y mostrar la secuencia utilizando un bucle for
    std::cout << "Secuencia generada:" << std::endl;
    for (int i = 0; i < numero; i++) {
        std::cout << (i * i) + 1 << " ";
    }
    std::cout << std::endl;

    return 0; // Indica que el programa terminó correctamente
}