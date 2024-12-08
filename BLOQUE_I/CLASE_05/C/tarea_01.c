/**
 * @author Edwin Yoner
 * @date 05/11/2024
 *
 * tarea_01.c
 *
 * Este programa genera e imprime una secuencia numérica basada en la fórmula `(i * i) + 1`,
 * donde `i` es el índice actual del bucle. Ejemplos de la secuencia: 1, 2, 5, 10, 17, etc.
 */

#include <stdio.h> // Biblioteca estándar para entrada y salida

// Prototipos de funciones
int calcularSecuencia(int indice);

/**
 * Función principal que se ejecuta al iniciar el programa.
 *
 * Solicita al usuario la cantidad de números que desea generar e imprime
 * la secuencia en pantalla.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
  // Variable para el límite de la secuencia
  int cantidad;

  // Solicitar al usuario el número de elementos a generar
  printf("Ingrese la cantidad de números a imprimir en la secuencia: ");
  scanf("%d", &cantidad);

  // Validar que la cantidad sea un valor positivo
  if (cantidad <= 0) {
    printf("Error: Por favor, ingrese un número positivo mayor que 0.\n");
    return 1; // Terminar con error
  }

  // Generar y mostrar la secuencia utilizando un bucle for
  printf("Secuencia generada:\n");
  for (int i = 0; i < cantidad; i++) {
    printf("%d ", calcularSecuencia(i));
  }
  printf("\n");

  return 0; // Indica que el programa terminó correctamente
}

/**
 * Calcula el valor de la secuencia numérica basada en la fórmula `(i * i) + 1`.
 *
 * @param indice El índice actual en la secuencia.
 * @return El valor calculado de la secuencia para el índice dado.
 */
int calcularSecuencia(int indice) {
  return (indice * indice) + 1;
}