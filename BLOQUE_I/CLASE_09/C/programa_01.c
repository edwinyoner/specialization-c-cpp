/**
 * @author Edwin Yoner
 * @date 12/11/2024
 *
 * programa_01.c
 *
 * Este programa introduce conceptos clave como la inicialización directa,
 * el uso de punteros para acceder a los miembros de una estructura
 * y la creación de funciones para manipular estructuras.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida

/**
 * Estructura para representar un humano.
 */
struct Humano {
    char nombre[50]; /**< Nombre del humano. */
    int edad;        /**< Edad del humano. */
    float peso;      /**< Peso del humano en kilogramos. */
};

/**
 * Prototipos de funciones.
 */
void mostrarHumano(const struct Humano *humano); /**< Muestra los datos de una estructura Humano. */
struct Humano crearHumano(const char *nombre, int edad, float peso); /**< Crea y retorna una estructura Humano. */

/**
 * Programa principal que muestra el uso de estructuras.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    struct Humano humano1 = {"Edwin", 25, 75.5}; /**< Inicialización directa. */
    struct Humano humano2 = crearHumano("Ana", 30, 65.5); /**< Creación mediante función. */

    printf("### Ejemplo de Estructuras en C ###\n");

    printf("\nHumano 1:\n");
    mostrarHumano(&humano1); /**< Pasamos la dirección de humano1. */

    printf("\nHumano 2:\n");
    mostrarHumano(&humano2); /**< Pasamos la dirección de humano2. */

    return 0; /**< Indica que el programa terminó correctamente. */
}

/**
 * Muestra los datos de un humano.
 *
 * @param humano Puntero constante a una estructura de tipo Humano.
 */
void mostrarHumano(const struct Humano *humano) {
    printf("Nombre: %s\n", humano->nombre); /**< Accedemos a los miembros usando "->" - (*humano).nombre */
    printf("Edad: %d\n", humano->edad); //(*humano).edad
    printf("Peso: %.2f kg\n", humano->peso); //(*humano).peso
}

/**
 * Crea una estructura Humano con los valores proporcionados.
 *
 * @param nombre Nombre del humano.
 * @param edad Edad del humano.
 * @param peso Peso del humano en kilogramos.
 * @return Una estructura de tipo Humano inicializada.
 */
struct Humano crearHumano(const char *nombre, int edad, float peso) {
    struct Humano nuevoHumano; /**< Nueva estructura Humano. */
    snprintf(nuevoHumano.nombre, sizeof(nuevoHumano.nombre), "%s", nombre); /**< Copiamos el nombre usando snprintf. */
    nuevoHumano.edad = edad;
    nuevoHumano.peso = peso;
    return nuevoHumano; /**< Retornamos la estructura inicializada. */
}