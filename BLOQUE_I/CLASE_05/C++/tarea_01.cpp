/**
 * @author Edwin Yoner
 * @date 05/11/2024
 *
 * tarea_01.cpp
 *
 * Este programa genera e imprime una secuencia numérica basada en la fórmula `(i * i) + 1`,
 * donde `i` es el índice actual del bucle. Ejemplos de la secuencia: 1, 2, 5, 10, 17, etc.
 */

#include <iostream> // Biblioteca estándar para entrada y salida
#include <stdexcept> // Para manejo de excepciones
using namespace std;

// Prototipo de funciones
int calcularSecuencia(int indice);

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * Solicita al usuario la cantidad de números que desea generar e imprime
 * la secuencia en pantalla.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    try {
        // Variable para el límite de la secuencia
        int cantidad;

        // Solicitar al usuario el número de elementos a generar
        cout << "Ingrese la cantidad de números a imprimir en la secuencia: ";
        cin >> cantidad;

        // Validar que la cantidad sea un valor positivo
        if (cantidad <= 0) {
            throw invalid_argument("Error: La cantidad debe ser un número positivo mayor que 0.");
        }

        // Generar y mostrar la secuencia utilizando un bucle for
        cout << "Secuencia generada:" << endl;
        for (int i = 0; i < cantidad; i++) {
            cout << calcularSecuencia(i) << " ";
        }
        cout << endl;

    } catch (const exception &e) {
        // Manejar errores y mostrar mensajes claros
        cerr << e.what() << endl;
        return 1; // Terminar con error
    }

    return 0; // Indica que el programa terminó correctamente
}

/**
 * Calcula el valor de la secuencia numérica basada en la fórmula `(i * i) + 1`.
 *
 * @param indice El índice actual en la secuencia.
 * @return El valor calculado de la secuencia para el índice dado.
 */
int calcularSecuencia(int indice) {
    return (indice * indice) + 1;
}
