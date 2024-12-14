/**
 * @author Edwin Yoner
 * @date 09/11/2024
 *
 * programa_01.c
 *
 * Este programa combina ejemplos de definición, declaración e inicialización de punteros en C.
 * Los punteros son variables que almacenan direcciones de memoria y permiten operaciones avanzadas en C.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida

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
    printf("### Operaciones con Punteros en C ###\n");

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
    float *punteroFloat; // Definición de un puntero a un flotante

    printf("\n### Ejemplo 1: Definición Básica de Punteros ###\n");
    printf("Se han definido punteros a int, char y float, pero aún no apuntan a ninguna dirección.\n");
}

/**
 * Ejemplo 2: Declaración e inicialización de punteros.
 * Se declara un puntero y se le asigna la dirección de una variable existente.
 */
void declararInicializarPuntero() {
    int numero = 42; // Variable normal
    int *puntero = &numero; // Declaración e inicialización del puntero

    printf("\n### Ejemplo 2: Declaración e Inicialización de Punteros ###\n");
    printf("El puntero apunta a la dirección de la variable 'numero'.\n");
    printf("Dirección de 'numero': %p\n", (void*)&numero);
    printf("Valor de 'numero' a través del puntero: %d\n", *puntero);
}

/**
 * Ejemplo 3: Uso de punteros para asignar valores.
 * Los punteros permiten modificar el valor de una variable apuntada.
 */
void asignarConPuntero() {
    int numero = 42; // Variable normal
    int *puntero = &numero; // Declaración e inicialización del puntero

    *puntero = 100; // Asignación de un nuevo valor usando el puntero

    printf("\n### Ejemplo 3: Uso de Punteros para Asignar Valores ###\n");
    printf("Nuevo valor de la variable 'numero' a través del puntero: %d\n", numero);
}

/**
 * Ejemplo 4: Punteros a punteros.
 * Un puntero puede apuntar a otro puntero.
 */
void punteroAPuntero() {
    int numero = 42;
    int *puntero = &numero;
    int **doblePuntero = &puntero;

    printf("\n### Ejemplo 4: Punteros a Punteros ###\n");
    printf("Valor de 'numero' a través de doble puntero: %d\n", **doblePuntero);
}