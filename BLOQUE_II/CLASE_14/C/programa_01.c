/**
 * @file programa_01.c
 * @brief Implementación de una lista enlazada simple en C.
 *
 * Este programa crea una lista enlazada simple con tres nodos y recorre
 * la lista para imprimir los datos almacenados en cada nodo.
 *
 * - Asigna memoria dinámicamente para cada nodo.
 * - Enlaza los nodos entre sí.
 * - Recorre e imprime los datos de la lista enlazada.
 * - Libera la memoria asignada dinámicamente al finalizar.
 *
 * @author Edwin Yoner
 * @date 23/11/2024
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @struct Node
 * @brief Representa un nodo de la lista enlazada.
 */
struct Node {
    int data;             /**< Dato almacenado en el nodo. */
    struct Node *next;    /**< Puntero al siguiente nodo. */
};

/**
 * @brief Programa principal que implementa una lista enlazada simple.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    struct Node *head = NULL;    /**< Puntero al primer nodo de la lista. */
    struct Node *second = NULL; /**< Puntero al segundo nodo de la lista. */
    struct Node *third = NULL;  /**< Puntero al tercer nodo de la lista. */

    // Asignación de memoria para los nodos
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Inicialización de los datos y enlaces de los nodos
    head->data = 1;         /**< Dato del primer nodo. */
    head->next = second;    /**< Enlace al segundo nodo. */

    second->data = 2;       /**< Dato del segundo nodo. */
    second->next = third;   /**< Enlace al tercer nodo. */

    third->data = 3;        /**< Dato del tercer nodo. */
    third->next = NULL;     /**< Fin de la lista. */

    // Recorrido e impresión de la lista enlazada
    struct Node *temp = head; /**< Puntero temporal para recorrer la lista. */

    printf("Lista enlazada: \n");
    while (temp != NULL) {
        printf("%d -> ", temp->data); /**< Imprime el dato del nodo actual. */
        temp = temp->next; /**< Avanza al siguiente nodo. */
    }
    printf("NULL\n");

    // Liberación de la memoria asignada
    free(head);
    free(second);
    free(third);

    return 0; /**< Indica que el programa terminó correctamente. */
}