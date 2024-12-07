/**
 * @author Edwin Yoner
 * @date 02/11/2024
 *
 * programa_03.c
 *
 * Este programa imprime una cantidad de asteriscos (*) en una sola línea,
 * según el número ingresado por el usuario.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
  // Variable para almacenar el número ingresado
  int numero;

  // Solicitar al usuario que ingrese un número entero positivo
  printf("Ingrese un número entero positivo para imprimir asteriscos: ");
  scanf("%d", &numero);

  // Validar que el número sea positivo
  if (numero <= 0) {
    printf("Por favor, ingrese un número mayor a 0.\n");
    return 1; // Salida temprana por error
  }

  // Imprimir los asteriscos en una sola línea
  printf("Asteriscos generados:\n");
  for (int i = 1; i <= numero; i++) {
    printf("* ");
  }
  printf("\n");

  return 0; // Indica que el programa terminó correctamente
}