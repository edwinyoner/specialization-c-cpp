/**
 * @file lib.h
 * @author Edwin Yoner
 * @date 19/11/2024
 *
 * @brief Archivo de cabecera.
 */

#include <string>    // Biblioteca para manejo de cadenas en C++
using namespace std;
#ifndef LIB_H
#define LIB_H

/**
 * Estructura que representa a un País.
 */
struct Pais {
    string nombre; /**< Nombre del país. */
    int codigoPostal;      /**< Código postal del país. */
};

/**
 * Estructura que representa a un humano.
 */
struct Humano {
    string nombre; /**< Nombre del humano. */
    int edad;      /**< Edad del humano. */
    Pais pais; /**< País del humano. */
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
 * Enumeración para definir estados de un sistema.
 */
enum Estado {
    INACTIVO = 0,
    ACTIVO = 1,
    PAUSADO = 2
};
#endif //LIB_H
