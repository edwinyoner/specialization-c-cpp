/**
 * @author Edwin Yoner
 * @date 31/10/2024
 *
 * tarea_02.c
 *
 * Este programa calcula e imprime la sumatoria de los números desde 1 hasta
 * un número `n` ingresado por el usuario. La sumatoria se realiza utilizando
 * una fórmula matemática y también un bucle para verificar el resultado.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
  // Variables para el número y la sumatoria
  int numero, suma = 0;

  // Solicitar al usuario un número entero positivo
  printf("Ingrese un número entero positivo: ");
  scanf("%d", &numero);

  // Validar que el número sea positivo
  if (numero < 0) {
    printf("Por favor, ingrese un número positivo.\n");
    return 1; // Salida temprana por error
  }

  // Calcular la sumatoria utilizando la fórmula matemática
  int suma_formula = (numero * (numero + 1)) / 2;
  printf("Sumatoria calculada con fórmula: %d\n", suma_formula);

  // Calcular la sumatoria utilizando un bucle
  for (int i = 1; i <= numero; i++) {
    suma += i;
  }
  printf("Sumatoria calculada con bucle: %d\n", suma);

  return 0; // Indica que el programa terminó correctamente
}