/**
 * @file programa_01.c
 * @brief Implementación de una pila utilizando listas enlazadas en C.
 *
 * Este programa define una pila con operaciones de inserción (push) y eliminación (pop),
 * implementadas mediante una estructura de nodos enlazados.
 *
 * - `agregarDato`: Inserta un elemento en la pila.
 * - `sacarDato`: Elimina el elemento en la parte superior de la pila.
 * - Manejo de memoria dinámica con `malloc` y `free`.
 *
 * @author Edwin Yoner
 * @date 26/11/2024
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @struct Node
 * @brief Representa un nodo en la pila.
 */
struct Node {
    int dato;               /**< Dato almacenado en el nodo. */
    struct Node* next;      /**< Puntero al siguiente nodo en la pila. */
};

/**
 * @brief Inserta un nuevo dato en la pila.
 *
 * @param p Referencia al puntero de la pila (parte superior).
 * @param n Valor del dato a insertar.
 */
void agregarDato(struct Node** p, int n) {
    struct Node* nuevo_nodo = (struct Node*)malloc(sizeof(struct Node)); /**< Reserva memoria para el nuevo nodo. */
    if (nuevo_nodo == NULL) { /**< Verifica si la asignación de memoria fue exitosa. */
        printf("Error al asignar memoria.\n");
        return;
    }
    nuevo_nodo->dato = n; /**< Asigna el valor al nodo. */
    nuevo_nodo->next = *p; /**< Conecta el nuevo nodo con el nodo anterior. */
    *p = nuevo_nodo; /**< Actualiza el puntero de la pila al nuevo nodo. */
    printf("Se añadió %d\n", n);
}

/**
 * @brief Elimina el dato en la parte superior de la pila.
 *
 * @param p Referencia al puntero de la pila (parte superior).
 */
void sacarDato(struct Node** p) {
    if (*p != NULL) { /**< Verifica si la pila no está vacía. */
        struct Node* temp = *p; /**< Nodo temporal para almacenar el nodo actual. */
        printf("Se retiró %d\n", temp->dato);
        *p = temp->next; /**< Actualiza el puntero de la pila al siguiente nodo. */
        free(temp); /**< Libera la memoria del nodo eliminado. */
    } else {
        printf("Sin datos\n"); /**< Mensaje si la pila está vacía. */
    }
}

/**
 * @brief Programa principal que demuestra el uso de la pila.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    struct Node* inicio = NULL; /**< Puntero a la parte superior de la pila. */

    // Operaciones en la pila
    agregarDato(&inicio, 6); /**< Inserta 6 en la pila. */
    agregarDato(&inicio, 8); /**< Inserta 8 en la pila. */
    agregarDato(&inicio, 10); /**< Inserta 10 en la pila. */
    // Estado: inicio -> 10 -> 8 -> 6 -> NULL

    sacarDato(&inicio); /**< Elimina el elemento superior (10). */
    // Estado: inicio -> 8 -> 6 -> NULL

    agregarDato(&inicio, 12); /**< Inserta 12 en la pila. */
    // Estado: inicio -> 12 -> 8 -> 6 -> NULL

    sacarDato(&inicio); /**< Elimina el elemento superior (12). */
    sacarDato(&inicio); /**< Elimina el elemento superior (8). */
    sacarDato(&inicio); /**< Elimina el elemento superior (6). */
    // Estado: inicio -> NULL

    sacarDato(&inicio); /**< Intenta eliminar en una pila vacía. */

    return 0; /**< Indica que el programa terminó correctamente. */
}