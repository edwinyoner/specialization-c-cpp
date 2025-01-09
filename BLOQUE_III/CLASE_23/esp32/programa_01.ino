/**
 * @file main.c
 * @brief Programa para parpadear un LED utilizando FreeRTOS y la ESP32.
 * @author Edwin Yoner
 * @date 12/12/2024
 *
 * Este programa hace que un LED conectado al pin GPIO 2 de la ESP32
 * parpadee cada segundo. Utiliza las funciones de la biblioteca FreeRTOS
 * para manejar las demoras.
 */

#include <stdio.h>
#include "freertos/FreeRTOS.h" // Biblioteca principal de FreeRTOS
#include "freertos/task.h"     // Biblioteca para la creación de tareas
#include "driver/gpio.h"       // Biblioteca para el manejo de pines GPIO

/**
 * @brief Función principal de la aplicación FreeRTOS.
 *
 * Esta función configura el pin GPIO 2 como salida y lo hace parpadear
 * alternando entre encendido y apagado con un intervalo de 1 segundo.
 */
void app_main() {
    gpio_set_direction(GPIO_NUM_2, GPIO_MODE_OUTPUT); // Configura el pin GPIO 2 como salida

    while (1) {
        gpio_set_level(GPIO_NUM_2, 1); // Enciende el LED
        vTaskDelay(1000 / portTICK_PERIOD_MS); // Espera 1 segundo (1000 ms)
        gpio_set_level(GPIO_NUM_2, 0); // Apaga el LED
        vTaskDelay(1000 / portTICK_PERIOD_MS); // Espera 1 segundo antes de repetir el ciclo
    }
}