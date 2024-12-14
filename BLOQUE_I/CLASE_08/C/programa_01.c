/**
 * @author Edwin Yoner
 * @date 09/11/2024
 *
 * programa_01.c
 *
 * Este programa contiene ejemplos básicos y avanzados sobre el uso de arrays en C,
 * incluyendo arrays de enteros, arrays multidimensionales y arrays de caracteres.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida

// Prototipos de funciones
void declararInicializarArray();
void recorrerArray();
void multidimensionalArray();
void manejarArraysDeCaracteres();

/**
 * Función principal que ejecuta los ejemplos.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    printf("### Operaciones con Arrays en C ###\n");

    declararInicializarArray();
    recorrerArray();
    multidimensionalArray();
    manejarArraysDeCaracteres();

    return 0; // Indica que el programa terminó correctamente
}

/**
 * Ejemplo 1: Declaración e inicialización de arrays.
 * Se demuestra cómo declarar, inicializar y acceder a un array.
 */
void declararInicializarArray() {
    int numeros[5] = {1, 2, 3, 4, 5}; // Declaración e inicialización

    printf("\n### Ejemplo 1: Declaración e Inicialización de Arrays ###\n");
    printf("El array contiene los siguientes elementos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento [%d]: %d\n", i, numeros[i]);
    }
}

/**
 * Ejemplo 2: Recorrer un array.
 * Se muestra cómo iterar y modificar los elementos de un array.
 */
void recorrerArray() {
    int numeros[5] = {10, 20, 30, 40, 50};

    printf("\n### Ejemplo 2: Recorrer y Modificar un Array ###\n");
    printf("Elementos originales:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento [%d]: %d\n", i, numeros[i]);
    }

    // Modificar elementos
    for (int i = 0; i < 5; i++) {
        numeros[i] *= 2; // Multiplica cada elemento por 2
    }

    printf("Elementos modificados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento [%d]: %d\n", i, numeros[i]);
    }
}

/**
 * Ejemplo 3: Arrays multidimensionales.
 * Se demuestra el uso de arrays bidimensionales.
 */
void multidimensionalArray() {
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("\n### Ejemplo 3: Arrays Multidimensionales ###\n");
    printf("Elementos de la matriz 2x3:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: %d\n", i, j, matriz[i][j]);
        }
    }
}

/**
 * Ejemplo 4: Arrays de caracteres.
 * Se demuestra cómo manejar cadenas de texto con arrays de caracteres.
 */
void manejarArraysDeCaracteres() {
    char mensaje[] = "Hola, C!";
    char nombre[50];

    printf("\n### Ejemplo 4: Arrays de Caracteres ###\n");
    printf("Mensaje inicial: %s\n", mensaje);

    // Solicitar un nombre al usuario
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);

    printf("Hola, %s! Bienvenido a C.\n", nombre);
}