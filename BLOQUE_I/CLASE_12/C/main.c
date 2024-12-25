/**
 * @file main.c
 * @author Edwin Yoner
 * @date 19/11/2024
 *
 * Este programa demuestra el uso de estructuras, uniones y enumeraciones en C.
 * - Estructuras nombradas y anónimas.
 * - Uniones para uso eficiente de memoria.
 * - Enumeraciones para manejo de constantes descriptivas.
 */

#include <stdio.h>  // Biblioteca estándar para entrada y salida
#include <string.h> // Biblioteca para manejo de cadenas
#include "lib.h" // Archivo de cabecera

/**
 * Programa principal en C que utiliza estructuras, uniones y enumeraciones.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Uso de estructura nombrada
    struct Humano humano1;
    strcpy(humano1.nombre, "Edwin Flores");
    humano1.edad = 27;
    printf("[Estructura Nombrada] Nombre: %s, Edad: %d\n", humano1.nombre, humano1.edad);

    // Uso de estructura anónima anidada
    struct Contenedor objeto;
    objeto.id = 1;
    strcpy(objeto.datos.nombre, "Ana Lopez");
    objeto.datos.edad = 25;
    printf("[Estructura Anónima] ID: %d, Nombre: %s, Edad: %d\n", objeto.id, objeto.datos.nombre, objeto.datos.edad);

    // Uso de unión
    union Dato valor;
    valor.entero = 10;
    printf("[Unión] Entero: %d\n", valor.entero);
    valor.decimal = 3.14;
    printf("[Unión] Decimal: %.2f\n", valor.decimal);
    valor.caracter = 'A';
    printf("[Unión] Caracter: %c\n", valor.caracter);

    // Uso de enumeración
    enum DiaSemana hoy = LUNES;
    printf("[Enumeración] Hoy es el día: %d\n", hoy);

    return 0; /**< Indica que el programa terminó correctamente. */
}