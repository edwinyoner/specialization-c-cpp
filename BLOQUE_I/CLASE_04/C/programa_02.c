/**
 * @author Edwin Yoner
 * @date 31/10/2024
 *
 * programa_02.c
 *
 * Este programa demuestra el uso de los bucles `while`, `do-while` y `for`
 * en el lenguaje C, con ejemplos prácticos.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Variables de ejemplo
    int i = 1, n;

    // Ejemplo de while
    printf("### Ejemplo de while ###\n");
    printf("Imprimiendo números del 1 al 5 usando while:\n");
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    // Ejemplo de do-while
    printf("### Ejemplo de do-while ###\n");
    printf("Ingresa un número positivo (o ingresa un negativo para salir): ");
    do {
        scanf("%d", &n);
        if (n >= 0) {
            printf("Ingresaste: %d\n", n);
        }
    } while (n >= 0);
    printf("Número negativo detectado. Saliendo del bucle.\n\n");

    // Ejemplo de for
    printf("### Ejemplo de for ###\n");
    printf("Imprimiendo tabla del 5 usando for:\n");
    for (i = 1; i <= 10; i++) {
        printf("5 x %d = %d\n", i, 5 * i);
    }

    return 0; // Indica que el programa terminó correctamente
}