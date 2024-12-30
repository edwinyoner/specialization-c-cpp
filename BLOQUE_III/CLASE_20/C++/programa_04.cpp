/**
 * @file programa_04.cpp
 * @author Edwin Yoner
 * @date 03/12/2024
 *
 * Este programa demuestra el uso de clases amigas en C++.
 * La clase `Estudiante` tiene acceso directo a los miembros privados
 * de la clase `Humano` gracias a la declaración `friend class`.
 */

#include <iostream>
#include <string>

/**
 * @class Humano
 * @brief Representa a un humano con atributos privados.
 */
class Humano {
private:
    int edad; /**< Edad del humano. */
    std::string nombre; /**< Nombre del humano. */

public:
    /**
     * @brief Constructor para inicializar un objeto de la clase Humano.
     * @param edad Edad del humano.
     * @param nombre Nombre del humano.
     */
    Humano(int edad, const std::string &nombre) : edad(edad), nombre(nombre) {}

    /**
     * @brief Declara la clase Estudiante como amiga.
     * Esto permite que `Estudiante` tenga acceso directo a los miembros privados de `Humano`.
     */
    friend class Estudiante;
};

/**
 * @class Estudiante
 * @brief Representa a un estudiante con la capacidad de acceder a los datos privados de un Humano.
 */
class Estudiante {
private:
    int codigo; /**< Código del estudiante. */

public:
    /**
     * @brief Constructor para inicializar un objeto de la clase Estudiante.
     * @param codigo Código del estudiante.
     */
    Estudiante(int codigo) : codigo(codigo) {}

    /**
     * @brief Método para mostrar datos de un Humano.
     * Este método tiene acceso a los miembros privados de `Humano` por ser una clase amiga.
     * @param humano Referencia constante a un objeto de la clase Humano.
     */
    void mostrarDatos(const Humano &humano) {
        std::cout << "Acceso a un miembro privado de Humano: " << humano.edad << "\n";
        std::cout << "Acceso a otro miembro privado de Humano: " << humano.nombre << "\n";
    }
};

/**
 * @brief Función principal del programa.
 * Crea objetos de las clases Humano y Estudiante, y demuestra el acceso a miembros privados.
 * @return 0 si la ejecución es exitosa.
 */
int main() {
    // Crear un objeto de la clase Humano
    Humano juan(27, "Juan");

    // Crear un objeto de la clase Estudiante
    Estudiante pedro(1234);

    // Usar el objeto Estudiante para acceder a datos privados de Humano
    pedro.mostrarDatos(juan);

    return 0;
}