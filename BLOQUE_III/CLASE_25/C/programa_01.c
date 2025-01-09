/**
 * @file operadores_bit_a_bit.c
 * @brief Programa para demostrar el uso de operadores bit a bit en C.
 * @author Edwin Yoner
 * @date 28/12/2024
 */

#include <stdio.h>

int main() {
    int a = 5;  // 0101 en binario
    int b = 3;  // 0011 en binario

    printf("Operador AND (&): %d\n", a & b);  // Resultado: 1
    printf("Operador OR (|): %d\n", a | b);   // Resultado: 7
    printf("Operador XOR (^): %d\n", a ^ b);  // Resultado: 6
    printf("Operador NOT (~): %d\n", ~a);    // Resultado: -6 en complemento a dos
    printf("Desplazamiento Izquierda (<<): %d\n", a << 1);  // Resultado: 10
    printf("Desplazamiento Derecha (>>): %d\n", a >> 1);   // Resultado: 2

    return 0;  // Indica que el programa terminó correctamente.
}