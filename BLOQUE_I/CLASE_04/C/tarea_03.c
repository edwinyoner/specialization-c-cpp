/**
 * @author Edwin Yoner
 * @date 31/10/2024
 *
 * tarea_03.c
 *
 * Este programa calcula el factorial de un número ingresado por el usuario.
 * Utiliza un bucle `for` para realizar el cálculo iterativo.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Variables para el número y su factorial
    int numero, factorial = 1;

    // Solicitar al usuario que ingrese un número entero no negativo
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &numero);

    // Validar que el número sea no negativo
    if (numero < 0) {
        printf("Error: No se puede calcular el factorial de un número negativo.\n");
        return 1; // Salida temprana por error
    }

    // Calcular el factorial
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    // Mostrar el resultado
    printf("El factorial de %d es: %d\n", numero, factorial);

    return 0; // Indica que el programa terminó correctamente
}
