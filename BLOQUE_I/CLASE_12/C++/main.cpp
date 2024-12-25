/**
 * @file main.cpp
 * @author Edwin Yoner
 * @date 19/11/2024
 *
 * Este programa demuestra el uso de estructuras, uniones y enumeraciones en C++.
 */

#include <iostream>  // Biblioteca estándar para entrada y salida en C++
#include <string>    // Biblioteca para manejo de cadenas en C++
#include "lib.h" // Archivo de cabecera
using namespace std;

/**
 * Programa principal en C++ que utiliza estructuras, uniones y enumeraciones.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Uso de estructura
    Humano humano1;
    humano1.nombre = "Edwin Flores";
    humano1.edad = 27;
    humano1.pais.nombre = "Perú";
    cout << "[Estructura] Nombre: " << humano1.nombre << ", Edad: " << humano1.edad << ", País: " << humano1.pais.nombre <<endl;

    // Uso de unión
    Dato valor;
    valor.entero = 10;
    cout << "[Unión] Entero: " << valor.entero << endl;
    valor.decimal = 3.14;
    cout << "[Unión] Decimal: " << valor.decimal << endl;
    valor.caracter = 'B';
    cout << "[Unión] Caracter: " << valor.caracter << endl;

    // Uso de enumeración
    Estado sistema = ACTIVO;
    cout << "[Enumeración] Estado del sistema: " << sistema << endl;

    return 0; /**< Indica que el programa terminó correctamente. */
}