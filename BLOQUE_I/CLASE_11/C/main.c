/**
 * @file main.c
 * @author Edwin Yoner
 * @date 16/11/2024
 *
 * @brief Programa principal que utiliza la función saludar.
 */

#include "saludar.h"  // Archivo de cabecera con la declaración de la función

/**
 * @brief Función principal del programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main(void) {
    saludar("Edwin"); /**< Llama a la función saludar. */
    return 0; /**< Indica que el programa terminó correctamente. */
}