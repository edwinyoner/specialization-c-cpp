/**
 * @author Edwin Yoner
 * @date 31/10/2024
 *
 * tarea_03.cpp
 *
 * Este programa calcula el factorial de un número ingresado por el usuario.
 * Utiliza un bucle `for` para realizar el cálculo iterativo.
 */

#include <iostream> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
  // Variables para el número y su factorial
  int numero, factorial = 1;

  // Solicitar al usuario que ingrese un número entero no negativo
  std::cout << "Ingrese un número entero positivo: ";
  std::cin >> numero;

  // Validar que el número sea no negativo
  if (numero < 0) {
    std::cout << "Error: No se puede calcular el factorial de un número negativo." << std::endl;
    return 1; // Salida temprana por error
  }

  // Calcular el factorial
  for (int i = 1; i <= numero; i++) {
    factorial *= i;
  }

  // Mostrar el resultado
  std::cout << "El factorial de " << numero << " es: " << factorial << std::endl;

  return 0; // Indica que el programa terminó correctamente
}

