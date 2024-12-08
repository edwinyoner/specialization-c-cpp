/**
 * @author Edwin Yoner
 * @date 05/11/2024
 *
 * programa_cpp.cpp
 *
 * Este programa demuestra el uso de funciones en el lenguaje C++.
 * Incluye sobrecarga de funciones para realizar operaciones con enteros
 * y flotantes, además de un menú interactivo.
 */

#include <iostream> // Biblioteca estándar para entrada y salida
using namespace std;

// Sobrecarga de funciones para suma
int sumar(int a, int b);
float sumar(float a, float b);

// Sobrecarga de funciones para resta
int restar(int a, int b);
float restar(float a, float b);

// Función para imprimir el resultado
template <typename T>
void imprimirResultado(const string& operacion, T resultado);

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    int opcion;
    do {
        cout << "\n### Menú de Opciones ###" << endl;
        cout << "1. Sumar dos números enteros" << endl;
        cout << "2. Restar dos números enteros" << endl;
        cout << "3. Sumar dos números flotantes" << endl;
        cout << "4. Restar dos números flotantes" << endl;
        cout << "0. Salir" << endl;
        cout << "Selecciona una opción: ";
        cin >> opcion;

        if (opcion == 0) {
            cout << "Saliendo del programa..." << endl;
            break;
        }

        if (opcion == 1 || opcion == 2) {
            int num1, num2, resultado;
            cout << "Ingresa el primer número entero: ";
            cin >> num1;
            cout << "Ingresa el segundo número entero: ";
            cin >> num2;

            if (opcion == 1) {
                resultado = sumar(num1, num2);
                imprimirResultado("Suma", resultado);
            } else {
                resultado = restar(num1, num2);
                imprimirResultado("Resta", resultado);
            }
        } else if (opcion == 3 || opcion == 4) {
            float num1, num2, resultado;
            cout << "Ingresa el primer número flotante: ";
            cin >> num1;
            cout << "Ingresa el segundo número flotante: ";
            cin >> num2;

            if (opcion == 3) {
                resultado = sumar(num1, num2);
                imprimirResultado("Suma", resultado);
            } else {
                resultado = restar(num1, num2);
                imprimirResultado("Resta", resultado);
            }
        } else {
            cout << "Opción no válida." << endl;
        }
    } while (opcion != 0);

    return 0;
}

// Implementación de funciones con sobrecarga
int sumar(int a, int b) {
    return a + b;
}

float sumar(float a, float b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

float restar(float a, float b) {
    return a - b;
}

// Función plantilla para imprimir el resultado
template <typename T>
void imprimirResultado(const string& operacion, T resultado) {
    cout << "Resultado de la " << operacion << ": " << resultado << endl;
}
