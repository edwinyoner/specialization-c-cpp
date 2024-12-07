/**
 * @author Edwin Yoner
 * @date 02/11/2024
 *
 * ejercicio_02.c
 *
 * Este programa genera un rectángulo de asteriscos (*) con el número
 * de filas y columnas especificado por el usuario.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Variables para almacenar el número de filas y columnas
    int filas, columnas;

    // Solicitar al usuario el número de filas
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);

    // Solicitar al usuario el número de columnas
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    // Validar que las filas y columnas sean mayores a 0
    if (filas <= 0 || columnas <= 0) {
        printf("Error: Las filas y columnas deben ser mayores a 0.\n");
        return 1; // Salida temprana por error
    }

    // Generar el rectángulo de asteriscos
    printf("Rectángulo generado:\n");
    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= columnas; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0; // Indica que el programa terminó correctamente
}
