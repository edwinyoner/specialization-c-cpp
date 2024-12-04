/**
 * @author Edwin Yoner
 * @date 31/10/2024
 *
 * programa_01.cpp
 *
 * Este programa demuestra el uso de las sentencias condicionales
 * en el lenguaje C++, incluyendo `if`, `if-else` y `switch`, con
 * ejemplos prácticos y múltiples casos.
 */

#include <iostream> // Biblioteca estándar para entrada y salida
#include <iomanip>  // Biblioteca para formatear salidas

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    // Variables para los ejemplos
    int numero, opcion;

    // Ejemplo de if
    std::cout << "### Ejemplo de if ###" << std::endl;
    std::cout << "Ingresa un número para verificar si es positivo: ";
    std::cin >> numero;

    if (numero > 0) {
        std::cout << "El número " << numero << " es positivo." << std::endl << std::endl;
    }

    // Ejemplo de if-else
    std::cout << "### Ejemplo de if-else ###" << std::endl;
    std::cout << "Ingresa otro número para verificar si es par o impar: ";
    std::cin >> numero;

    if (numero % 2 == 0) {
        std::cout << "El número " << numero << " es par." << std::endl << std::endl;
    } else {
        std::cout << "El número " << numero << " es impar." << std::endl << std::endl;
    }

    // Ejemplo de switch
    std::cout << "### Ejemplo de switch ###" << std::endl;
    std::cout << "Selecciona una opción (1: Suma, 2: Resta, 3: Multiplicación, 4: División): ";
    std::cin >> opcion;

    int a = 10, b = 5; // Variables de ejemplo para las operaciones
    switch (opcion) {
        case 1:
            std::cout << "Opción seleccionada: Suma" << std::endl;
            std::cout << "Resultado: " << a << " + " << b << " = " << a + b << std::endl << std::endl;
            break;
        case 2:
            std::cout << "Opción seleccionada: Resta" << std::endl;
            std::cout << "Resultado: " << a << " - " << b << " = " << a - b << std::endl << std::endl;
            break;
        case 3:
            std::cout << "Opción seleccionada: Multiplicación" << std::endl;
            std::cout << "Resultado: " << a << " * " << b << " = " << a * b << std::endl << std::endl;
            break;
        case 4:
            if (b != 0) { // Verificar que no haya división por cero
                std::cout << "Opción seleccionada: División" << std::endl;
                std::cout << std::fixed << std::setprecision(2);
                std::cout << "Resultado: " << a << " / " << b << " = " << static_cast<float>(a) / b << std::endl << std::endl;
            } else {
                std::cout << "Error: División por cero no permitida." << std::endl << std::endl;
            }
            break;
        default:
            std::cout << "Opción no válida. Por favor, selecciona entre 1, 2, 3 o 4." << std::endl << std::endl;
            break;
    }

    // Combinación de if y switch
    std::cout << "### Combinación de if y switch ###" << std::endl;
    std::cout << "Ingresa tu edad para determinar tu rango de edad: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "Edad no válida." << std::endl;
    } else if (numero < 18) {
        std::cout << "Eres menor de edad." << std::endl;
    } else {
        std::cout << "Eres mayor de edad." << std::endl;

        switch (numero) {
            case 18:
                std::cout << "¡Felicidades! Alcanzaste la mayoría de edad." << std::endl;
                break;
            case 21:
                std::cout << "¡Tienes 21 años, una edad especial en muchos países!" << std::endl;
                break;
            default:
                std::cout << "Disfruta de tu edad: " << numero << " años." << std::endl;
                break;
        }
    }

    return 0; // Indica que el programa terminó correctamente
}