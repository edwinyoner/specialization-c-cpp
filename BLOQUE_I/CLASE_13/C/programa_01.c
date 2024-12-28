/**
 * @file programa_01.c
 * @author Edwin Yoner
 * @date 21/11/2024
 *
 * Este programa demuestra la gestión de memoria dinámica en C,
 * incluyendo la asignación con calloc y la liberación de memoria.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Programa principal que gestiona memoria dinámica en C.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    int *i = (int *)calloc(1, sizeof(int)); /**< Reserva memoria inicializada a 0. - (int *)malloc(sizeof(int));*/
    if (i == NULL) { /**< Comprueba si la asignación fue exitosa. */
        printf("Error al asignar memoria.\n");
        return 1;
    }

    *i = 10; /**< Asigna un valor a la memoria reservada. */
    printf("Valor almacenado: %d\n", *i);

    free(i); /**< Libera la memoria asignada. */
    i = NULL; /**< Evita el puntero colgante. */
    printf("Puntero liberado.\n");
    printf("Valor almacenado: %d\n", *i);

    return 0; /**< Indica que el programa terminó correctamente. */
}