/**
 * @author Edwin Yoner
 * @date 07/11/2024
 *
 * programa_01.c
 *
 * Este programa demuestra el uso de recursión en C para imprimir números
 * en orden ascendente utilizando el paso de parámetros por valor.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida

// Prototipo de la función recursiva
void imprimirAscendente(int x);

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    int numero;

    printf("### Programa de Recursión: Impresión Ascendente ###\n");
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, ingrese un número positivo.\n");
    } else {
        printf("Números en orden ascendente:\n");
        imprimirAscendente(numero);
    }

    return 0; // Indica que el programa terminó correctamente
}

/**
 * Función recursiva que imprime números desde 0 hasta el valor dado en orden ascendente.
 *
 * @param x Número hasta el cual se imprimirán los valores.
 */
void imprimirAscendente(int x) {
    if (x > 0) {
        imprimirAscendente(x - 1); // Llamada recursiva
    }
    printf("%d\n", x); // Imprime después de la llamada recursiva
}