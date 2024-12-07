/**
 * @author Edwin Yoner
 * @date 02/11/2024
 *
 * tarea_05.c
 *
 * Este programa genera un triángulo creciente de asteriscos (*) alineado a la derecha,
 * donde el número de filas es especificado por el usuario.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Variable para almacenar el número de filas
    int numFila;

    // Solicitar al usuario el número de filas
    printf("Ingrese el número de filas: ");
    scanf("%d", &numFila);

    // Validar que el número de filas sea mayor a 0
    if (numFila <= 0) {
        printf("Error: El número de filas debe ser mayor a 0.\n");
        return 1; // Salida temprana por error
    }

    // Generar el triángulo creciente alineado a la derecha
    printf("Triángulo generado:\n");
    for (int i = 1; i <= numFila; i++) {
        // Imprimir espacios
        for (int j = 1; j <= numFila - i; j++) {
            printf("  ");
        }
        // Imprimir asteriscos
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0; // Indica que el programa terminó correctamente
}