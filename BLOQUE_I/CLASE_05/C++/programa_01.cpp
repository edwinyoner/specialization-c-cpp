/**
 * @author Edwin Yoner
 * @date 05/11/2024
 *
 * programa_01.cpp
 *
 * Este programa demuestra el uso de funciones en el lenguaje C++.
 * Incluye ejemplos de funciones con retorno, sin retorno, y el
 * paso de parámetros por valor.
 */

#include <iostream> // Biblioteca estándar para entrada y salida
using namespace std;

// Prototipos de funciones
int sumar(int a, int b);
int restar(int a, int b);
void imprimirResultado(int resultado);
void mostrarMenu();

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    int opcion, num1, num2, resultado;

    do {
        mostrarMenu();
        cout << "Selecciona una opción (0 para salir): ";
        cin >> opcion;

        if (opcion == 0) {
            cout << "Saliendo del programa..." << endl;
            break;
        }

        cout << "Ingresa el primer número: ";
        cin >> num1;
        cout << "Ingresa el segundo número: ";
        cin >> num2;

        switch (opcion) {
            case 1:
                resultado = sumar(num1, num2);
                imprimirResultado(resultado);
                break;
            case 2:
                resultado = restar(num1, num2);
                imprimirResultado(resultado);
                break;
            default:
                cout << "Opción no válida. Por favor, selecciona 1 o 2." << endl;
                break;
        }
    } while (opcion != 0);

    return 0; // Indica que el programa terminó correctamente
}

/**
 * Función que realiza la suma de dos números enteros.
 *
 * @param a Primer número.
 * @param b Segundo número.
 * @return La suma de los dos números.
 */
int sumar(int a, int b) {
    return a + b;
}

/**
 * Función que realiza la resta de dos números enteros.
 *
 * @param a Primer número.
 * @param b Segundo número.
 * @return La resta de los dos números.
 */
int restar(int a, int b) {
    return a - b;
}

/**
 * Función que imprime el resultado de una operación.
 *
 * @param resultado Resultado de una operación matemática.
 */
void imprimirResultado(int resultado) {
    cout << "El resultado es: " << resultado << endl << endl;
}

/**
 * Función que muestra el menú de opciones al usuario.
 */
void mostrarMenu() {
    cout << "\n### Menú de Opciones ###" << endl;
    cout << "1. Sumar dos números" << endl;
    cout << "2. Restar dos números" << endl;
    cout << "0. Salir" << endl;
}
