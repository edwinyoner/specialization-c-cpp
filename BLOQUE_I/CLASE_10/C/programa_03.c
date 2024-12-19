/**
 * @author Edwin Yoner
 * @date 14/11/2024
 *
 *
 *
 * Este programa demuestra el uso de funciones dentro de estructuras en C
 * y cómo estructurar clases con funciones miembro en C++.
 */

#include <stdio.h>
#include <string.h> // Para manejo de cadenas

/**
 * Programa en C: Definición de una estructura con un puntero a función.
 */
struct Humano {
    char nombre[30]; /**< Nombre del humano. */
    int edad;        /**< Edad del humano. */
    void (*s)(void); /**< Puntero a una función para saludar. */
};

/**
 * Función para saludar desde la estructura Humano.
 */
void saludar() {
    printf("Saludos\n"); /**< Imprime un saludo. */
}

/**
 * Programa principal en C que demuestra el uso de punteros a funciones en estructuras.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    struct Humano humano = {"Juan", 27}; /**< Inicialización de la estructura Humano. */
    humano.s = saludar; /**< Asignación de la función saludar al puntero dentro de la estructura. */
    humano.s(); /**< Llama a la función saludar usando el puntero de la estructura. */

    return 0; /**< Indica que el programa terminó correctamente. */
}