/**
 * @file programa_01.cpp
 * @author Edwin Yoner
 * @date 21/11/2024
 *
 * Este programa demuestra la gestión de memoria dinámica en C++,
 * incluyendo la asignación con new y la liberación con delete.
 */

#include <iostream>
using namespace std;

/**
 * @brief Programa principal que gestiona memoria dinámica en C++.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    int *i = new int(10); /**< Reserva memoria y la inicializa con el valor 10. */
    cout << "Valor almacenado: " << *i << endl;

    delete i; /**< Libera la memoria asignada. */
    i = nullptr; /**< Evita el puntero colgante. */
    cout << "Puntero liberado." << endl;
    cout << "Valor almacenado: " << *i << endl;

    return 0; /**< Indica que el programa terminó correctamente. */
}