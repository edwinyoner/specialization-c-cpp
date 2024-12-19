/**
 * @author Edwin Yoner
 * @date 14/11/2024
 *
 *
 *
 * Este programa demuestra el uso de funciones dentro de estructuras en C++
 * y cómo estructurar clases con funciones miembro en C++.
 */

#include <iostream>

/**
 * Programa en C++: Definición de una estructura con un puntero a función.
 */
struct Humano {
private:
    char nombre[30]; /**< Nombre del humano. */
    int edad;        /**< Edad del humano. */

public:
    /**
     * Constructor para inicializar un objeto de tipo Humano.
     * @param nombre Nombre del humano.
     * @param edad Edad del humano.
     */
    Humano(const char* nombre, int edad) {
        strcpy(this->nombre, nombre); /**< Copia el nombre al miembro de la clase. */
        this->edad = edad; /**< Asigna la edad al miembro de la clase. */
    }

    /**
     * Función miembro para saludar.
     * @param pais País donde vive el humano.
     */
    void saludar(const char* pais) {
        printf("Saludos, me llamo %s y vivo en %s\n", nombre, pais); /**< Imprime un saludo personalizado. */
    }
};

/**
 * Programa principal en C++ que demuestra el uso de clases y funciones miembro.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    Humano humano("Juan", 27); /**< Inicialización del objeto Humano. */
    humano.saludar("Perú"); /**< Llama a la función miembro saludar. */

    return 0; /**< Indica que el programa terminó correctamente. */
}