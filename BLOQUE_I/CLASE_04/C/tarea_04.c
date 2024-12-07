/**
 * @author Edwin Yoner
 * @date 02/11/2024
 *
 * tarea_04.c
 *
 * Este programa genera un triángulo invertido de asteriscos (*), donde
 * el número de filas es especificado por el usuario.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Variable para almacenar el número de filas
    int numero;

    // Solicitar al usuario el número de filas
    printf("Ingrese el número de filas para el triángulo invertido: ");
    scanf("%d", &numero);

    // Validar que el número de filas sea mayor a 0
    if (numero <= 0) {
        printf("Error: El número de filas debe ser mayor a 0.\n");
        return 1; // Salida temprana por error
    }

    // Generar el triángulo invertido de asteriscos
    printf("Triángulo invertido generado:\n");
    for (int i = 1; i <= numero; i++) {
        for (int j = i; j <= numero; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0; // Indica que el programa terminó correctamente
}
