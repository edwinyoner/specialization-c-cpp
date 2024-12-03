/**
 * @author Edwin Yoner
 * @date 29/11/2024
 *
 * programa_02_ejercicio_01.cpp
 *
 * Este programa calcula el área de un rectángulo, solicitando al usuario
 * que ingrese la medida de la base y la altura a través de la consola.
 */

#include <iostream> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
  // Variables para almacenar la base, altura y área
  int base, altura, area;

  // Solicitar al usuario que ingrese la base
  std::cout << "Ingrese la medida de la base del rectángulo: ";
  std::cin >> base;  // Leer el valor de la base

  // Solicitar al usuario que ingrese la altura
  std::cout << "Ingrese la medida de la altura del rectángulo: ";
  std::cin >> altura;  // Leer el valor de la altura

  // Calcular el área del rectángulo
  area = base * altura;

  // Imprimir el resultado
  std::cout << "El área del rectángulo es: " << area << " unidades cuadradas" << std::endl;

  return 0; // Indica que el programa terminó correctamente
}
