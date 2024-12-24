/**
 * @file saludar.c
 * @author Edwin Yoner
 * @date 16/11/2024
 *
 * @brief Archivo de implementación que define la función para saludar.
 */

#include <stdio.h>  // Biblioteca estándar para entrada y salida
#include "saludar.h"  // Archivo de cabecera con la declaración de la función

/**
 * @brief Implementación de la función que imprime un saludo.
 */
void saludar(const char* mensaje) {
    printf("Hola, ¡bienvenido!  %s \n", mensaje);
}