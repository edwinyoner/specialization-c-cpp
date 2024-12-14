/**
 * @author Edwin Yoner
 * @date 09/11/2024
 *
 * programa_01.cpp
 *
 * Este programa contiene ejemplos básicos y avanzados sobre el uso de arrays en C++,
 * incluyendo arrays de enteros, arrays multidimensionales y strings.
 */

#include <iostream> // Biblioteca estándar para entrada y salida
#include <string>   // Biblioteca estándar para manejo de strings

using namespace std;

// Prototipos de funciones
void declararInicializarArray();
void recorrerArray();
void multidimensionalArray();
void manejarStrings();

/**
 * Función principal que ejecuta los ejemplos.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    cout << "### Operaciones con Arrays en C++ ###" << endl;

    declararInicializarArray();
    recorrerArray();
    multidimensionalArray();
    manejarStrings();

    return 0; // Indica que el programa terminó correctamente
}

/**
 * Ejemplo 1: Declaración e inicialización de arrays.
 * Se demuestra cómo declarar, inicializar y acceder a un array.
 */
void declararInicializarArray() {
    int numeros[5] = {1, 2, 3, 4, 5}; // Declaración e inicialización

    cout << "\n### Ejemplo 1: Declaración e Inicialización de Arrays ###" << endl;
    cout << "El array contiene los siguientes elementos:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemento [" << i << "]: " << numeros[i] << endl;
    }
}

/**
 * Ejemplo 2: Recorrer un array.
 * Se muestra cómo iterar y modificar los elementos de un array.
 */
void recorrerArray() {
    int numeros[5] = {10, 20, 30, 40, 50};

    cout << "\n### Ejemplo 2: Recorrer y Modificar un Array ###" << endl;
    cout << "Elementos originales:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemento [" << i << "]: " << numeros[i] << endl;
    }

    // Modificar elementos
    for (int i = 0; i < 5; i++) {
        numeros[i] *= 2; // Multiplica cada elemento por 2
    }

    cout << "Elementos modificados:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemento [" << i << "]: " << numeros[i] << endl;
    }
}

/**
 * Ejemplo 3: Arrays multidimensionales.
 * Se demuestra el uso de arrays bidimensionales.
 */
void multidimensionalArray() {
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};

    cout << "\n### Ejemplo 3: Arrays Multidimensionales ###" << endl;
    cout << "Elementos de la matriz 2x3:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento [" << i << "][" << j << "]: " << matriz[i][j] << endl;
        }
    }
}

/**
 * Ejemplo 4: Uso de strings.
 * Se demuestra cómo manejar cadenas de texto utilizando la clase `string`.
 */
void manejarStrings() {
    string mensaje = "Hola, C++!";
    string nombre;

    cout << "\n### Ejemplo 4: Uso de Strings ###" << endl;
    cout << "Mensaje inicial: " << mensaje << endl;

    // Solicitar un nombre al usuario
    cout << "Ingrese su nombre: ";
    cin >> nombre;

    cout << "Hola, " << nombre << "! Bienvenido a C++." << endl;
}