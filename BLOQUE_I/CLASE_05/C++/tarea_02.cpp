/**
 * @author Edwin Yoner
 * @date 05/11/2024
 *
 * tarea_02.cpp
 *
 * Este programa calcula e imprime la sumatoria de los números desde 1 hasta
 * un número `n` ingresado por el usuario. La sumatoria se realiza utilizando
 * una fórmula matemática y también un bucle para verificar el resultado.
 */

#include <iostream> // Biblioteca estándar para entrada y salida
#include <stdexcept> // Para manejo de excepciones
using namespace std;

// Prototipos de funciones
int sumatoriaConBucle(int numero);
int sumatoriaConFormula(int numero);

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * Solicita un número entero positivo, calcula la sumatoria mediante dos métodos
 * (bucle y fórmula matemática) y verifica que ambos resultados sean consistentes.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    try {
        // Variable para el número ingresado por el usuario
        int numero;

        // Solicitar al usuario un número entero positivo
        cout << "Ingrese un número entero positivo: ";
        cin >> numero;

        // Validar que el número sea positivo
        if (numero <= 0) {
            throw invalid_argument("Error: Por favor, ingrese un número positivo mayor que 0.");
        }

        // Calcular la sumatoria utilizando un bucle
        int sumaBucle = sumatoriaConBucle(numero);
        // Calcular la sumatoria utilizando la fórmula matemática
        int sumaFormula = sumatoriaConFormula(numero);

        // Imprimir los resultados
        cout << "Sumatoria calculada con bucle: " << sumaBucle << endl;
        cout << "Sumatoria calculada con fórmula matemática: " << sumaFormula << endl;

        // Verificar consistencia de resultados
        if (sumaBucle != sumaFormula) {
            cerr << "Advertencia: Los resultados no coinciden. Verifique la implementación." << endl;
            return 1; // Terminar con error si hay inconsistencia
        }

    } catch (const exception &e) {
        cerr << e.what() << endl;
        return 1; // Salida temprana por error
    }

    return 0; // Indica que el programa terminó correctamente
}

/**
 * Calcula la sumatoria de los números desde 1 hasta `numero` utilizando un bucle.
 *
 * @param numero Límite superior de la sumatoria.
 * @return La sumatoria calculada.
 */
int sumatoriaConBucle(int numero) {
    int resultado = 0;
    for (int i = 1; i <= numero; i++) {
        resultado += i;
    }
    return resultado;
}

/**
 * Calcula la sumatoria de los números desde 1 hasta `numero` utilizando la fórmula matemática.
 *
 * Fórmula: (n * (n + 1)) / 2
 *
 * @param numero Límite superior de la sumatoria.
 * @return La sumatoria calculada.
 */
int sumatoriaConFormula(int numero) {
    return (numero * (numero + 1)) / 2;
}