/**
 * @author Edwin Yoner
 * @date 16/11/2024
 *
 * programa_01.cpp
 *
 * Este programa introduce conceptos clave sobre el uso de predirectivas del preprocesador en C++.
 */

#include <iostream> /**< Biblioteca estándar para entrada y salida en C++. */
#define DEBUG 1     /**< Macro para habilitar el modo depuración. */
#define MAX 100     /**< Define un valor máximo como constante. */

/**
 * Programa principal que demuestra el uso de predirectivas del preprocesador en C++.
 *
 * @return Retorna 0 si la ejecución es exitosa.
 */
int main() {
#ifdef DEBUG
    std::cout << "Debugging activado" << std::endl; /**< Imprime un mensaje si DEBUG está definido. */
#endif

    std::cout << "El valor máximo es: " << MAX << std::endl; /**< Imprime el valor de la constante MAX. */

#undef MAX
#define MAX 50 /**< Redefine el valor de MAX. */

    std::cout << "El nuevo valor máximo es: " << MAX << std::endl; /**< Imprime el nuevo valor de MAX. */

#if MAX > 75
    std::cout << "MAX es mayor a 75" << std::endl; /**< Verifica si MAX es mayor que 75. */
#else
    std::cout << "MAX no es mayor a 75" << std::endl; /**< Verifica si MAX no es mayor que 75. */
#endif

    return 0; /**< Indica que el programa terminó correctamente. */
}