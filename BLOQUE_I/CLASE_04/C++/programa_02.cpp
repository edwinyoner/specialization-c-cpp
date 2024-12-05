/**
 * @author Edwin Yoner
 * @date 31/10/2024
 *
 * programa_04_bucles.cpp
 *
 * Este programa demuestra el uso de los bucles `while`, `do-while` y `for`
 * en el lenguaje C++, con ejemplos prácticos.
 */

#include <iostream> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Variables de ejemplo
    int i = 1, n;

    // Ejemplo de while
    std::cout << "### Ejemplo de while ###\n";
    std::cout << "Imprimiendo números del 1 al 5 usando while:\n";
    while (i <= 5) {
        std::cout << i << " ";
        i++;
    }
    std::cout << "\n\n";

    // Ejemplo de do-while
    std::cout << "### Ejemplo de do-while ###\n";
    std::cout << "Ingresa un número positivo (o ingresa un negativo para salir): ";
    do {
        std::cin >> n;
        if (n >= 0) {
            std::cout << "Ingresaste: " << n << "\n";
        }
    } while (n >= 0);
    std::cout << "Número negativo detectado. Saliendo del bucle.\n\n";

    // Ejemplo de for
    std::cout << "### Ejemplo de for ###\n";
    std::cout << "Imprimiendo tabla del 5 usando for:\n";
    for (i = 1; i <= 10; i++) {
        std::cout << "5 x " << i << " = " << 5 * i << "\n";
    }

    return 0; // Indica que el programa terminó correctamente
}