/**
 * @author Edwin Yoner
 * @date 16/11/2024
 *
 * programa_01.c
 *
 * Este programa introduce conceptos clave sobre el uso de predirectivas del preprocesador en C y C++, incluyendo:
 * - Inclusión de archivos de cabecera.
 * - Definición de macros.
 * - Uso de condicionales para compilar bloques específicos de código.
 */

#include <stdio.h> /**< Biblioteca estándar para entrada y salida. */
#define DEBUG 1    /**< Macro para habilitar el modo depuración. */
#define MAX 100    /**< Define un valor máximo como constante. */

/**
 * Programa principal que demuestra el uso de predirectivas del preprocesador.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
#ifdef DEBUG
    printf("Debugging activado\n"); /**< Imprime un mensaje si DEBUG está definido. */
#endif

    printf("El valor máximo es: %d\n", MAX); /**< Imprime el valor de la constante MAX. */

#undef MAX
#define MAX 50 /**< Redefine el valor de MAX. */

    printf("El nuevo valor máximo es: %d\n", MAX); /**< Imprime el nuevo valor de MAX. */

#if MAX > 75
    printf("MAX es mayor a 75\n"); /**< Verifica si MAX es mayor que 75. */
#else
    printf("MAX no es mayor a 75\n"); /**< Verifica si MAX no es mayor que 75. */
#endif

    return 0; /**< Indica que el programa terminó correctamente. */
}