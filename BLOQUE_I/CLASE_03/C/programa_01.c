/**
 * @author Edwin Yoner
 * @date 29/10/2024
 *
 * programa_01.c
 *
 * Este programa muestra el uso de los principales operadores
 * en el lenguaje C, incluyendo aritméticos, incremento/decremento,
 * relacionales y booleanos.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Operadores aritméticos
    int a = 10, b = 3;   // Variables de ejemplo
    printf("Operadores Aritméticos:\n");
    printf("a + b = %d\n", a + b); // Suma
    printf("a - b = %d\n", a - b); // Resta
    printf("a * b = %d\n", a * b); // Multiplicación
    printf("a / b = %d\n", a / b); // División entera
    printf("a %% b = %d\n\n", a % b); // Módulo (resto)

    // Operadores de incremento y decremento
    printf("Operadores de Incremento y Decremento:\n");
    int x = 5; // Variable para mostrar incrementos/decrementos
    printf("Valor inicial de x: %d\n", x);

    // Preincremento
    printf("Preincremento (++x): %d\n", ++x); // Incrementa y luego usa el valor
    printf("Valor después de preincremento: %d\n", x);

    // Postincremento
    printf("Postincremento (x++): %d\n", x++); // Usa el valor y luego incrementa
    printf("Valor después de postincremento: %d\n", x);

    // Predecremento
    printf("Predecremento (--x): %d\n", --x); // Decrementa y luego usa el valor
    printf("Valor después de predecremento: %d\n", x);

    // Postdecremento
    printf("Postdecremento (x--): %d\n", x--); // Usa el valor y luego decrementa
    printf("Valor después de postdecremento: %d\n\n", x);

    // Operadores relacionales
    printf("Operadores Relacionales:\n");
    printf("a > b: %d\n", a > b);   // Mayor que
    printf("a >= b: %d\n", a >= b); // Mayor o igual que
    printf("a < b: %d\n", a < b);   // Menor que
    printf("a <= b: %d\n", a <= b); // Menor o igual que
    printf("a == b: %d\n", a == b); // Igualdad
    printf("a != b: %d\n\n", a != b); // Desigualdad

    // Operadores lógicos (booleanos en C)
    int c = 1, d = 0;   // Valores booleanos: 1 (true) y 0 (false)
    printf("Operadores Lógicos:\n");
    printf("c && d: %d\n", c && d); // AND lógico
    printf("c || d: %d\n", c || d); // OR lógico
    printf("!c: %d\n", !c);         // NOT lógico
    printf("!d: %d\n\n", !d);       // NOT lógico para 0

    return 0; // Indica que el programa terminó correctamente
}