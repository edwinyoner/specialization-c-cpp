/**
 * @author Edwin Yoner
 * @date 14/11/2024
 *
 * Este programa demuestra el uso de punteros a funciones en C.
 * Se incluyen ejemplos básicos de cómo asignar y utilizar punteros
 * para realizar operaciones como suma y resta.
 */

#include <stdio.h>

/**
 * Declara y define la función para sumar dos números enteros.
 * @param numero1 Primer número entero.
 * @param numero2 Segundo número entero.
 * @return La suma de numero1 y numero2.
 */
int sumar(int numero1, int numero2);

/**
 * Declara y define la función para restar dos números enteros.
 * @param numero1 Primer número entero.
 * @param numero2 Segundo número entero.
 * @return La resta de numero1 menos numero2.
 */
int restar(int numero1, int numero2);

/**
 * Programa principal que demuestra el uso de punteros a funciones.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    /******************************/
    int numero = 8; /**< Define y declara un valor entero. */
    int *ptr;       /**< Puntero a un entero. */
    ptr = &numero;  /**< Asignamos la dirección de numero al puntero ptr. */

    /******************************/
    int (*f)(int, int); /**< Declara un puntero a función que acepta dos enteros y retorna un entero. */
    f = &sumar; /**< Asignamos la dirección de la función sumar al puntero f. */
    int result = f(1, 2); /**< Llama a la función sumar(1, 2) usando el puntero f. */
    printf("La suma es: %d\n", result); /**< Imprime el resultado de la suma. */

    f = restar; /**< Asignamos la dirección de la función restar al puntero f. */
    result = f(1, 2); /**< Llama a la función restar(1, 2) usando el puntero f. */
    printf("La resta es: %d\n", result); /**< Imprime el resultado de la resta. */

    return 0; /**< Indica que el programa terminó correctamente. */
}

/**
 * Implementación de la función sumar.
 *
 * @param numero1 Primer número entero.
 * @param numero2 Segundo número entero.
 * @return La suma de numero1 y numero2.
 */
int sumar(int numero1, int numero2) {
    return numero1 + numero2;
}

/**
 * Implementación de la función restar.
 *
 * @param numero1 Primer número entero.
 * @param numero2 Segundo número entero.
 * @return La resta de numero1 menos numero2.
 */
int restar(int numero1, int numero2) {
    return numero1 - numero2;
}