/**
 * @author Edwin Yoner
 * @date 02/11/2024
 *
 * tarea_04.cpp
 *
 * Este programa genera un triángulo invertido de asteriscos (*), donde
 * el número de filas es especificado por el usuario.
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
    int numero;

    // Solicitar al usuario el número de filas
    cout << "Ingrese el número de filas para el triángulo invertido: ";
    cin >> numero;

    // Validar que el número de filas sea mayor a 0
    if (numero <= 0) {
        cout << "Error: El número de filas debe ser mayor a 0." << endl;
        return 1; // Salida temprana por error
    }

    // Generar el triángulo invertido de asteriscos
    cout << "Triángulo invertido generado:" << endl;
    for (int i = 1; i <= numero; i++) {
        for (int j = i; j <= numero; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0; // Indica que el programa terminó correctamente
}