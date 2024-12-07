/**
 * @author Edwin Yoner
 * @date 31/10/2024
 *
 * tarea_01.c
 *
 * Este programa imprime una secuencia numérica basada en la fórmula `(i * i) + 1`,
 * donde `i` es el índice actual en el bucle. La secuencia comienza con 1 y sigue con
 * números como 3, 5, 10, 17, etc.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
  // Variable para el límite de la secuencia
  int numero;

  // Solicitar al usuario el número de elementos a generar
  printf("Ingrese la cantidad de números a imprimir en la secuencia: ");
  scanf("%d", &numero);

  // Generar y mostrar la secuencia utilizando un bucle for
  printf("Secuencia generada:\n");
  for (int i = 0; i < numero; i++) {
    printf("%d ", (i * i) + 1);
  }
  printf("\n");

  return 0; // Indica que el programa terminó correctamente
}