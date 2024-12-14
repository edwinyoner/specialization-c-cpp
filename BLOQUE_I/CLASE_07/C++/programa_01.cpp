/**
 * @author Edwin Yoner
 * @date 09/11/2024
 *
 * programa_01.cpp
 *
 * Este programa combina ejemplos de definición, declaración e inicialización de punteros en C++.
 * Los punteros son variables que almacenan direcciones de memoria y permiten operaciones avanzadas en C++.
 */

#include <iostream> // Biblioteca estándar para entrada y salida

using namespace std;

// Prototipos de funciones
void definirPuntero();
void declararInicializarPuntero();
void asignarConPuntero();
void punteroAPuntero();

/**
 * Función principal que ejecuta los ejemplos.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    cout << "### Operaciones con Punteros en C++ ###" << endl;

    definirPuntero();
    declararInicializarPuntero();
    asignarConPuntero();
    punteroAPuntero();

    return 0; // Indica que el programa terminó correctamente
}

/**
 * Ejemplo 1: Definición básica de punteros.
 * Un puntero es una variable que puede almacenar la dirección de memoria de otra variable.
 */
void definirPuntero() {
    int *puntero; // Definición de un puntero a un entero
    char *punteroChar; // Definición de un puntero a un carácter
    double *punteroDouble; // Definición de un puntero a un doble

    cout << "\n### Ejemplo 1: Definición Básica de Punteros ###" << endl;
    cout << "Se han definido punteros a int, char y double, pero aún no apuntan a ninguna dirección." << endl;
}

/**
 * Ejemplo 2: Declaración e inicialización de punteros.
 * Se declara un puntero y se le asigna la dirección de una variable existente.
 */
void declararInicializarPuntero() {
    int numero = 42; // Variable normal
    int *puntero = &numero; // Declaración e inicialización del puntero

    cout << "\n### Ejemplo 2: Declaración e Inicialización de Punteros ###" << endl;
    cout << "El puntero apunta a la dirección de la variable 'numero'." << endl;
    cout << "Dirección de 'numero': " << &numero << endl;
    cout << "Valor de 'numero' a través del puntero: " << *puntero << endl;
}

/**
 * Ejemplo 3: Uso de punteros para asignar valores.
 * Los punteros permiten modificar el valor de una variable apuntada.
 */
void asignarConPuntero() {
    int numero = 42; // Variable normal
    int *puntero = &numero; // Declaración e inicialización del puntero

    *puntero = 100; // Asignación de un nuevo valor usando el puntero

    cout << "\n### Ejemplo 3: Uso de Punteros para Asignar Valores ###" << endl;
    cout << "Nuevo valor de la variable 'numero' a través del puntero: " << numero << endl;
}

/**
 * Ejemplo 4: Punteros a punteros.
 * Un puntero puede apuntar a otro puntero.
 */
void punteroAPuntero() {
    int numero = 42;
    int *puntero = &numero;
    int **doblePuntero = &puntero;

    cout << "\n### Ejemplo 4: Punteros a Punteros ###" << endl;
    cout << "Valor de 'numero' a través de doble puntero: " << **doblePuntero << endl;
}