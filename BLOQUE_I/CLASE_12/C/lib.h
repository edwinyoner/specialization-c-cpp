/**
 * @file lib.h
 * @author Edwin Yoner
 * @date 19/11/2024
 *
 * @brief Archivo de cabecera.
 */

#ifndef LIB_H
#define LIB_H

/**
 * Estructura que representa a un humano.
 */
struct Humano {
    char nombre[30]; /**< Nombre del humano. */
    int edad;        /**< Edad del humano. */
};

/**
 * Estructura que contiene una estructura anónima anidada.
 */
struct Contenedor {
    int id; /**< Identificador único. */
    struct {
        char nombre[30]; /**< Nombre dentro de la estructura anónima. */
        int edad;        /**< Edad dentro de la estructura anónima. */
    } datos; /**< Miembro de la estructura anónima. */
};

/**
 * Unión para almacenar diferentes tipos de datos en el mismo espacio de memoria.
 */
union Dato {
    int entero;    /**< Valor entero. */
    float decimal; /**< Valor decimal. */
    char caracter; /**< Caracter. */
};

/**
 * Enumeración para definir días de la semana.
 */
enum DiaSemana {
    LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO
};

#endif //LIB_H