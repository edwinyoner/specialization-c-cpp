/**
 * @file mostrar_imagen.cpp
 * @brief Programa para cargar y mostrar una imagen en OpenCV utilizando Raspberry Pi.
 * @author Edwin Yoner
 * @date 21/11/2024
 */

#include <iostream>  /**< Biblioteca estándar de C++ para entrada y salida */
#include <opencv2/opencv.hpp> /**< Biblioteca OpenCV para procesamiento de imágenes */

using namespace std; /**< Espacio de nombres estándar */

int main() {
    // Crear una imagen de 300x300 píxeles con valores de cero (imagen negra)
    cv::Mat zeros = cv::Mat::zeros(300, 300, CV_8UC1); /**< Imagen negra de 8 bits en escala de grises */

    // Leer una imagen desde el archivo "mario1.jpg" en escala de grises
    cv::Mat img = cv::imread("mario1.jpg", 0); /**< Carga la imagen en escala de grises */

    // Verificar si la imagen se cargó correctamente
    if (img.empty()) {
        cerr << "Error: No se pudo cargar la imagen." << endl;
        return -1; /**< Salida con error si la imagen no se carga */
    }

    // Mostrar la imagen en una ventana
    cv::imshow("Ventana", img); /**< Muestra la imagen en una ventana llamada "Ventana" */

    // Esperar a que el usuario presione una tecla para cerrar la ventana
    cv::waitKey(0); /**< Espera indefinidamente hasta que se presione una tecla */

    return 0; /**< Retorna 0 para indicar una ejecución exitosa */
}