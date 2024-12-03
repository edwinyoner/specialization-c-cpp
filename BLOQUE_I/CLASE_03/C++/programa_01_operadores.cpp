/**
 * @author Edwin Yoner
 * @date 29/10/2024
 *
 * programa_01_operadores.cpp
 *
 * Este programa muestra el uso de los principales operadores
 * en el lenguaje C++, incluyendo aritméticos, incremento/decremento,
 * relacionales y booleanos.
 */

#include <iostream> // Biblioteca estándar para entrada y salida
using namespace std;

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Operadores aritméticos
    int a = 10, b = 3; // Variables de ejemplo
    cout << "Operadores Aritméticos:" << endl;
    cout << "a + b = " << a + b << endl; // Suma
    cout << "a - b = " << a - b << endl; // Resta
    cout << "a * b = " << a * b << endl; // Multiplicación
    cout << "a / b = " << a / b << endl; // División entera
    cout << "a % b = " << a % b << endl << endl; // Módulo (resto)

    // Operadores de incremento y decremento
    cout << "Operadores de Incremento y Decremento:" << endl;
    int x = 5; // Variable para mostrar incrementos/decrementos
    cout << "Valor inicial de x: " << x << endl;

    // Preincremento
    cout << "Preincremento (++x): " << ++x << endl; // Incrementa y luego usa el valor
    cout << "Valor después de preincremento: " << x << endl;

    // Postincremento
    cout << "Postincremento (x++): " << x++ << endl; // Usa el valor y luego incrementa
    cout << "Valor después de postincremento: " << x << endl;

    // Predecremento
    cout << "Predecremento (--x): " << --x << endl; // Decrementa y luego usa el valor
    cout << "Valor después de predecremento: " << x << endl;

    // Postdecremento
    cout << "Postdecremento (x--): " << x-- << endl; // Usa el valor y luego decrementa
    cout << "Valor después de postdecremento: " << x << endl << endl;

    // Operadores relacionales
    cout << "Operadores Relacionales:" << endl;
    cout << "a > b: " << (a > b) << endl;   // Mayor que
    cout << "a >= b: " << (a >= b) << endl; // Mayor o igual que
    cout << "a < b: " << (a < b) << endl;   // Menor que
    cout << "a <= b: " << (a <= b) << endl; // Menor o igual que
    cout << "a == b: " << (a == b) << endl; // Igualdad
    cout << "a != b: " << (a != b) << endl << endl; // Desigualdad

    // Operadores lógicos (booleanos en C++)
    bool c = true, d = false; // Valores booleanos: true y false
    cout << "Operadores Lógicos:" << endl;
    cout << "c && d: " << (c && d) << endl; // AND lógico
    cout << "c || d: " << (c || d) << endl; // OR lógico
    cout << "!c: " << (!c) << endl;         // NOT lógico
    cout << "!d: " << (!d) << endl << endl; // NOT lógico para false

    return 0; // Indica que el programa terminó correctamente
}