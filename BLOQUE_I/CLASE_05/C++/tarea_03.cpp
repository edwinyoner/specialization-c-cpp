/**
 * @author Edwin Yoner
 * @date 05/11/2024
 *
 * tarea_03.cpp
 *
 * Este programa calcula el factorial de un número ingresado por el usuario.
 * Incluye una implementación iterativa y una recursiva para mayor versatilidad.
 */

#include <iostream> // Biblioteca estándar para entrada y salida

// Prototipos de funciones
unsigned long long factorialIterativo(int numero);
unsigned long long factorialRecursivo(int numero);

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    int numero;
    unsigned long long resultadoIterativo, resultadoRecursivo;

    // Solicitar al usuario un número entero no negativo
    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> numero;

    // Validar que el número sea no negativo
    if (std::cin.fail() || numero < 0) {
        std::cerr << "Error: Ingrese un número entero positivo válido." << std::endl;
        return 1; // Salida temprana por error
    }

    // Calcular el factorial utilizando ambas técnicas
    resultadoIterativo = factorialIterativo(numero);
    resultadoRecursivo = factorialRecursivo(numero);

    // Mostrar los resultados
    std::cout << "Factorial calculado iterativamente: " << resultadoIterativo << std::endl;
    std::cout << "Factorial calculado recursivamente: " << resultadoRecursivo << std::endl;

    return 0; // Indica que el programa terminó correctamente
}

/**
 * Calcula el factorial de un número de manera iterativa.
 *
 * @param numero El número del cual se calculará el factorial.
 * @return El factorial calculado.
 */
unsigned long long factorialIterativo(int numero) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }
    return resultado;
}

/**
 * Calcula el factorial de un número de manera recursiva.
 *
 * @param numero El número del cual se calculará el factorial.
 * @return El factorial calculado.
 */
unsigned long long factorialRecursivo(int numero) {
    if (numero == 0) {
        return 1;
    }
    return static_cast<unsigned long long>(numero) * factorialRecursivo(numero - 1);
}