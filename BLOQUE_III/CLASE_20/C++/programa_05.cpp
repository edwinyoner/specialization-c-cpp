/**
 * @file programa_05.cpp
 * @author Edwin Yoner
 * @date 03/12/2024
 *
 * Este programa demuestra el concepto de herencia simple en C++.
 * La clase `Estudiante` hereda de la clase `Humano`, mostrando cómo
 * compartir y extender funcionalidad entre clases relacionadas.
 */

#include <iostream>
#include <string>

/**
 * @class Humano
 * @brief Representa a un humano con atributos y métodos básicos.
 */
class Humano { // Clase base (padre)
private:
    std::string nombre; /**< Nombre del humano. */
    int edad; /**< Edad del humano. */

public:
    /**
     * @brief Constructor para inicializar un humano.
     * @param nombre Nombre del humano.
     * @param edad Edad del humano.
     */
    Humano(const std::string &nombre, int edad) : nombre(nombre), edad(edad) {}

    /**
     * @brief Método para que el humano hable.
     * Imprime un mensaje que incluye el nombre del humano.
     */
    void hablar() {
        std::cout << "Hola soy " << nombre << "\n";
    }
};

/**
 * @class Estudiante
 * @brief Representa a un estudiante que hereda de la clase Humano.
 * Incluye atributos y métodos adicionales específicos para un estudiante.
 */
class Estudiante : public Humano { // Clase derivada (hija)
private:
    std::string carrera; /**< Carrera que estudia el estudiante. */

public:
    /**
     * @brief Constructor para inicializar un estudiante.
     * @param c Carrera que estudia el estudiante.
     * @param n Nombre del estudiante (se pasa al constructor de Humano).
     * @param e Edad del estudiante (se pasa al constructor de Humano).
     */
    Estudiante(const std::string &c, const std::string &n, int e) : Humano(n, e), carrera(c) {}

    /**
     * @brief Método para que el estudiante indique qué estudia.
     * Imprime un mensaje con la carrera del estudiante.
     */
    void estudiar() {
        std::cout << "Estudio " << carrera << "\n";
    }
};

/**
 * @brief Función principal.
 * Crea un objeto de tipo Estudiante y utiliza sus métodos para demostrar la herencia.
 * @return 0 si la ejecución es exitosa.
 */
int main() {
    // Crear un objeto de la clase Estudiante
    Estudiante juan("Medicina", "Juan", 27);

    // Llamar a los métodos del objeto Estudiante
    juan.estudiar(); // Método propio de la clase Estudiante
    juan.hablar();   // Método heredado de la clase Humano

    return 0;
}