/**
 * @author Edwin Yoner
 * @date 26/10/2024
 *
 * programa_02_tipos_de_datos.c
 *
 * Este programa muestra el uso de los principales tipos de datos en C,
 * e imprime sus tamaños utilizando sizeof.
 *
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    char c = 'A';            // Carácter
    int i = 42;              // Entero
    short s = 10;            // Entero corto
    long l = 1234567890;     // Entero largo
    float f = 3.14;          // Número flotante
    double d = 3.14159265;   // Número flotante de doble precisión
    unsigned int ui = 255;   // Entero sin signo
    char str1[] = "Hola";
    char str2[] = {'H', 'o', 'l', 'a', '\0'};

    // Imprimir los valores y tamaños de cada tipo de dato
    printf("Tipos de Datos en C:\n");
    printf("char: valor = '%c', tamaño = %zu bytes\n", c, sizeof(c));
    printf("int: valor = %d, tamaño = %zu bytes\n", i, sizeof(i));
    printf("short: valor = %d, tamaño = %zu bytes\n", s, sizeof(s));
    printf("long: valor = %ld, tamaño = %zu bytes\n", l, sizeof(l));
    printf("float: valor = %.2f, tamaño = %zu bytes\n", f, sizeof(f));
    printf("double: valor = %.8f, tamaño = %zu bytes\n", d, sizeof(d));
    printf("unsigned int: valor = %u, tamaño = %zu bytes\n", ui, sizeof(ui));
    printf("cadena de caracteres char[]: valor = %s, tamaño = %zu bytes\n", str1, sizeof(str1));
    printf("cadena de caracteres char[]: valor = %s, tamaño = %zu bytes\n", str2, sizeof(str2));

    return 0; // Indica que el programa terminó correctamente
}