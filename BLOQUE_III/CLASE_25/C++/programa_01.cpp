/**
 * @file operadores_bit_a_bit.cpp
 * @brief Programa para demostrar el uso de operadores bit a bit en C++.
 * @author Edwin Yoner
 * @date 28/12/2024
 */

#include <iostream>
using namespace std;

int main() {
    int a = 5;  // 0101 en binario
    int b = 3;  // 0011 en binario

    cout << "Operador AND (&): " << (a & b) << endl;  // Resultado: 1
    cout << "Operador OR (|): " << (a | b) << endl;   // Resultado: 7
    cout << "Operador XOR (^): " << (a ^ b) << endl;  // Resultado: 6
    cout << "Operador NOT (~): " << (~a) << endl;    // Resultado: -6 en complemento a dos
    cout << "Desplazamiento Izquierda (<<): " << (a << 1) << endl;  // Resultado: 10
    cout << "Desplazamiento Derecha (>>): " << (a >> 1) << endl;   // Resultado: 2

    return 0;  // Indica que el programa terminó correctamente.
}