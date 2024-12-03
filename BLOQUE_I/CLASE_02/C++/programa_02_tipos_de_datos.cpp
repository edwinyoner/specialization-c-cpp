/**
 * @author Edwin Yoner
 * @date 26/10/2024
 * programa_02_tipos_de_datos.cpp
 *
 * Este programa muestra el uso de los principales tipos de datos en C++,
 * e imprime sus tamaños utilizando sizeof.
 *
 */

#include <iostream> // Biblioteca estándar de entrada y salida

using namespace std;

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    char c = 'A';              // Carácter
    int i = 42;                // Entero
    short s = 10;              // Entero corto
    long l = 1234567890;       // Entero largo
    float f = 3.14;            // Número flotante
    double d = 3.14159265;     // Número flotante de doble precisión
    unsigned int ui = 255;     // Entero sin signo
    bool b = true;             // Booleano
    string str = "Hola mundo"; // Cadena de texto

    // Imprimir los valores y tamaños de cada tipo de dato
    cout << "Tipos de Datos en C++:" << endl;
    cout << "char: valor = '" << c << "', tamaño = " << sizeof(c) << " bytes" << endl;
    cout << "int: valor = " << i << ", tamaño = " << sizeof(i) << " bytes" << endl;
    cout << "short: valor = " << s << ", tamaño = " << sizeof(s) << " bytes" << endl;
    cout << "long: valor = " << l << ", tamaño = " << sizeof(l) << " bytes" << endl;
    cout << "float: valor = " << f << ", tamaño = " << sizeof(f) << " bytes" << endl;
    cout << "double: valor = " << d << ", tamaño = " << sizeof(d) << " bytes" << endl;
    cout << "unsigned int: valor = " << ui << ", tamaño = " << sizeof(ui) << " bytes" << endl;
    cout << "bool: valor = " << b << ", tamaño=" << sizeof(b) << " bytes" << endl;
    cout << "string: valor = \"" << str << "\", tamaño = " << sizeof(str) << " bytes (más tamaño dinámico del contenido)" << endl;

    return 0; // Indica que el programa terminó correctamente
}

