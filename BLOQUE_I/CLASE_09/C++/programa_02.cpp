/**
* @author Edwin Yoner
 * @date 07/11/2024
 *
 * programa_02.cpp
 *
 * Este programa explora diferencias específicas del manejo de estructuras en C++,
 * como el uso de funciones miembro y constructores dentro de estructuras.
 */

#include <iostream> // Biblioteca estándar para entrada y salida
#include <string>   // Biblioteca estándar para manejo de cadenas

using namespace std;

// Declaración de una estructura con funciones miembro
struct Vehiculo {
    string modelo;
    int anio;
    float precio;

    // Constructor para inicializar un vehículo
    Vehiculo(string mod, int a, float p) : modelo(mod), anio(a), precio(p) {}

    // Función miembro para mostrar los datos del vehículo
    void mostrar() const {
        cout << "Modelo: " << modelo << endl;
        cout << "Año: " << anio << endl;
        cout << "Precio: $" << precio << endl;
    }
};

/**
 * Función principal que ejecuta los ejemplos con funciones miembro y constructores.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    Vehiculo vehiculo("Toyota Corolla", 2020, 20000.0);

    cout << "### Ejemplo de Funciones Miembro y Constructores en C++ ###" << endl;
    vehiculo.mostrar();

    return 0; // Indica que el programa terminó correctamente
}