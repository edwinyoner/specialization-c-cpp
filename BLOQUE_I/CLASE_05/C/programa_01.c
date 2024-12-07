/**
 * @author Edwin Yoner
 * @date 31/10/2024
 *
 * programa_01.c
 *
 * Este programa demuestra el uso de las sentencias condicionales
 * en el lenguaje C, incluyendo `if`, `if-else` y `switch`, con
 * ejemplos prácticos y múltiples casos.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Variables para los ejemplos
    int numero, opcion;

    // Ejemplo de if
    printf("### Ejemplo de if ###\n");
    printf("Ingresa un número para verificar si es positivo, negativo o cero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El número %d es positivo.\n\n", numero);
    }
    if (numero < 0) {
        printf("El número %d es negativo.\n\n", numero);
    }
    if (numero == 0) {
        printf("El número %d es neutro.\n\n", numero);
    }

    // Ejemplo de if-else
    printf("### Ejemplo de if-else ###\n");
    printf("Ingresa otro número para verificar si es par o impar: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("El número %d es par.\n\n", numero);
    } else {
        printf("El número %d es impar.\n\n", numero);
    }

    // Ejemplo de switch
    printf("### Ejemplo de switch ###\n");
    printf("Selecciona una opción (1: Suma, 2: Resta, 3: Multiplicación, 4: División): ");
    scanf("%d", &opcion);

    int a = 10, b = 5; // Variables de ejemplo para las operaciones
    switch (opcion) {
        case 1:
            printf("Opción seleccionada: Suma\n");
            printf("Resultado: %d + %d = %d\n\n", a, b, a + b);
            break;
        case 2:
            printf("Opción seleccionada: Resta\n");
            printf("Resultado: %d - %d = %d\n\n", a, b, a - b);
            break;
        case 3:
            printf("Opción seleccionada: Multiplicación\n");
            printf("Resultado: %d * %d = %d\n\n", a, b, a * b);
            break;
        case 4:
            if (b != 0) { // Verificar que no haya división por cero
                printf("Opción seleccionada: División\n");
                printf("Resultado: %d / %d = %.2f\n\n", a, b, (float)a / b);
            } else {
                printf("Error: División por cero no permitida.\n\n");
            }
            break;
        default:
            printf("Opción no válida. Por favor, selecciona entre 1, 2, 3 o 4.\n\n");
            break;
    }

    // Combinación de if y switch
    printf("### Combinación de if y switch ###\n");
    printf("Ingresa tu edad para determinar tu rango de edad: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Edad no válida.\n");
    } else if (numero < 18) {
        printf("Eres menor de edad.\n");
    } else {
        printf("Eres mayor de edad.\n");

        switch (numero) {
            case 18:
                printf("¡Felicidades! Alcanzaste la mayoría de edad.\n");
                break;
            case 21:
                printf("¡Tienes 21 años, una edad especial en muchos países!\n");
                break;
            default:
                printf("Disfruta de tu edad: %d años.\n", numero);
                break;
        }
    }

    return 0; // Indica que el programa terminó correctamente
}
