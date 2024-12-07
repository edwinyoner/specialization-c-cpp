/**
 * @author Edwin Yoner
 * @date 02/11/2024
 *
 * ejercicio_06.cpp
 *
 * Este programa genera un triángulo creciente de asteriscos (*) alineado a la derecha,
 * donde el número de filas es especificado por el usuario.
 */

#include <iostream> // Biblioteca estándar para entrada y salida

using namespace std;

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Variable para almacenar el número de filas
    int numFila;

    // Solicitar al usuario el número de filas
    cout << "Ingrese el número de filas: ";
    cin >> numFila;

    // Validar que el número de filas sea mayor a 0
    if (numFila <= 0) {
        cout << "Error: El número de filas debe ser mayor a 0." << endl;
        return 1; // Salida temprana por error
    }

    // Generar el triángulo creciente alineado a la derecha
    cout << "Triángulo generado:" << endl;
    for (int i = 1; i <= numFila; i++) {
        // Imprimir espacios
        for (int j = 1; j <= numFila - i; j++) {
            cout << "  ";
        }
        // Imprimir asteriscos
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0; // Indica que el programa terminó correctamente
}