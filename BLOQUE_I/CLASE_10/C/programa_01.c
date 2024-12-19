/**
 * @author Edwin Yoner
 * @date 14/11/2024
 *
 * programa_01.c
 *
 * Este programa introduce conceptos clave sobre el uso de estructuras en C, incluyendo:
 * - Inicialización directa de estructuras.
 * - Uso de typedef para simplificar nombres de estructuras.
 * - Creación y manipulación de estructuras con funciones.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida
#include <string.h> // Biblioteca para manipulación de cadenas

/**
 * Estructura para representar un humano.
 */
struct Humano {
    char nombre[30]; /**< Nombre del humano. */
    int edad;        /**< Edad del humano. */
};

typedef struct {
    char nombre[30]; /**< Nombre de la persona. */
    int edad;        /**< Edad de la persona. */
} Persona; /**< Alias para una estructura Persona usando typedef. */

/**
 * Prototipos de funciones.
 */
void mostrarHumano(const struct Humano *humano); /**< Muestra los datos de un Humano. */
void mostrarPersona(const Persona *persona);    /**< Muestra los datos de una Persona. */

/**
 * Programa principal que demuestra el uso de estructuras y typedef.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    struct Humano humano = {"Edwin", 20}; /**< Inicialización directa de un Humano. */
    Persona persona = {"Yoner", 25};      /**< Inicialización directa de una Persona. */

    printf("### Ejemplo de Estructuras en C ###\n\n");

    printf("Humano:\n");
    mostrarHumano(&humano); /**< Muestra los datos de humano usando una función. */

    printf("\nPersona:\n");
    mostrarPersona(&persona); /**< Muestra los datos de persona usando una función. */

    return 0; /**< Indica que el programa terminó correctamente. */
}

/**
 * Muestra los datos de un Humano.
 *
 * @param humano Puntero constante a una estructura de tipo Humano.
 */
void mostrarHumano(const struct Humano *humano) {
    printf("Nombre: %s\n", humano->nombre); /**< Acceso a miembros con operador de puntero -> */
    printf("Edad: %d\n", humano->edad);
}

/**
 * Muestra los datos de una Persona.
 *
 * @param persona Puntero constante a una estructura de tipo Persona.
 */
void mostrarPersona(const Persona *persona) {
    printf("Nombre: %s\n", persona->nombre); /**< Acceso a miembros con operador de puntero -> */
    printf("Edad: %d\n", persona->edad);
}