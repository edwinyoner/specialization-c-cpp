/**
 * @author Edwin Yoner
 * @date 12/11/2024
 *
 * programa_02.c
 *
 * Este programa explora diferencias específicas del manejo de estructuras en C,
 * como el uso de typedef y punteros a estructuras.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida
#include <stdlib.h> // Para funciones de asignación dinámica de memoria

// Declaración de una estructura con typedef
typedef struct {
    char modelo[50];
    int anio;
    float precio;
} Vehiculo;

// Prototipos de funciones
void mostrarVehiculo(const Vehiculo* vehiculo);
Vehiculo* crearVehiculo(char modelo[], int anio, float precio);

/**
 * Función principal que ejecuta los ejemplos con typedef y punteros a estructuras.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    Vehiculo* vehiculo = crearVehiculo("Toyota Corolla", 2020, 20000.0);

    printf("### Ejemplo de Typedef y Punteros a Estructuras en C ###\n");
    mostrarVehiculo(vehiculo);

    free(vehiculo); // Liberar memoria asignada dinámicamente
    return 0; // Indica que el programa terminó correctamente
}

/**
 * Función que muestra los datos de un vehículo.
 *
 * @param vehiculo Puntero a una estructura de tipo Vehiculo.
 */
void mostrarVehiculo(const Vehiculo* vehiculo) {
    printf("Modelo: %s\n", vehiculo->modelo);
    printf("Año: %d\n", vehiculo->anio);
    printf("Precio: $%.2f\n", vehiculo->precio);
}

/**
 * Función que crea un vehículo utilizando asignación dinámica.
 *
 * @param modelo Modelo del vehículo.
 * @param anio Año del vehículo.
 * @param precio Precio del vehículo.
 * @return Puntero a una estructura de tipo Vehiculo.
 */
Vehiculo* crearVehiculo(char modelo[], int anio, float precio) {
    Vehiculo* nuevoVehiculo = (Vehiculo*)malloc(sizeof(Vehiculo));
    snprintf(nuevoVehiculo->modelo, sizeof(nuevoVehiculo->modelo), "%s", modelo);
    nuevoVehiculo->anio = anio;
    nuevoVehiculo->precio = precio;
    return nuevoVehiculo;
}