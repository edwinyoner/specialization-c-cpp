/**
 * @file programa_01.cpp
 * @brief Implementación de una lista enlazada simple en C++.
 *
 * Este programa crea una lista enlazada simple con tres nodos, recorre
 * la lista para imprimir los datos almacenados en cada nodo y luego
 * libera la memoria asignada dinámicamente.
 *
 * - Asigna memoria dinámicamente para cada nodo usando el operador `new`.
 * - Enlaza los nodos entre sí mediante punteros.
 * - Recorre e imprime los datos de la lista enlazada.
 * - Libera la memoria asignada dinámicamente al finalizar.
 *
 * @author Edwin Yoner
 * @date 23/11/2024
 */

#include <iostream>
using namespace std;

/**
 * @struct Node
 * @brief Representa un nodo de la lista enlazada.
 */
struct Node {
    int data;    /**< Dato almacenado en el nodo. */
    Node *next;  /**< Puntero al siguiente nodo. */
};

/**
 * @brief Programa principal que implementa una lista enlazada simple.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
    Node *head = nullptr;    /**< Puntero al primer nodo de la lista. */
    Node *second = nullptr; /**< Puntero al segundo nodo de la lista. */
    Node *third = nullptr;  /**< Puntero al tercer nodo de la lista. */

    // Asignación de memoria para los nodos
    head = new Node();
    second = new Node();
    third = new Node();

    // Inicialización de los datos y enlaces de los nodos
    head->data = 1;         /**< Dato del primer nodo. */
    head->next = second;    /**< Enlace al segundo nodo. */

    second->data = 2;       /**< Dato del segundo nodo. */
    second->next = third;   /**< Enlace al tercer nodo. */

    third->data = 3;        /**< Dato del tercer nodo. */
    third->next = nullptr;  /**< Fin de la lista. */

    // Recorrido e impresión de la lista enlazada
    Node *temp = head; /**< Puntero temporal para recorrer la lista. */

    cout << "Lista enlazada: " << endl;
    while (temp != nullptr) {
        cout << temp->data << " -> "; /**< Imprime el dato del nodo actual. */
        temp = temp->next; /**< Avanza al siguiente nodo. */
    }
    cout << "nullptr" << endl;

    // Liberación de la memoria asignada
    delete head; /**< Libera la memoria del primer nodo. */
    delete second; /**< Libera la memoria del segundo nodo. */
    delete third; /**< Libera la memoria del tercer nodo. */

    return 0; /**< Indica que el programa terminó correctamente. */
}