/**
 * @author Edwin Yoner
 * @date 29/10/2024
 *
 * programa_02.c
 *
 * Este programa calcula el área de un rectángulo, solicitando al usuario
 * que ingrese la medida de la base y la altura a través de la consola.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
  // Variables para almacenar la base, altura y área
  int base, altura, area;

  // Solicitar al usuario que ingrese la base
  printf("Ingrese la medida de la base del rectángulo: ");
  scanf("%d", &base);  // Leer el valor de la base

  // Solicitar al usuario que ingrese la altura
  printf("Ingrese la medida de la altura del rectángulo: ");
  scanf("%d", &altura);  // Leer el valor de la altura

  // Calcular el área del rectángulo
  area = base * altura;

  // Imprimir el resultado
  printf("El área del rectángulo es: %d unidades cuadradas\n", area);

  return 0; // Indica que el programa terminó correctamente
}
