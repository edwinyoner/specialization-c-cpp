/**
 * @file lcd_display.ino
 * @brief Programa para mostrar caracteres y un contador en una pantalla LCD I2C.
 * @author Edwin Yoner
 * @date 12/12/2024
 *
 * Este programa utiliza una pantalla LCD I2C de 16x2 para mostrar un carácter "X"
 * que se desplaza por la primera fila y un contador en la segunda fila que se
 * actualiza cada segundo.
 */

#include <LiquidCrystal_I2C.h>  // Biblioteca para manejar pantallas LCD I2C

LiquidCrystal_I2C LCD(0x27, 16, 2); // Dirección I2C del LCD (0x27), 16 columnas y 2 filas
char msg[20]; // Cadena para almacenar el mensaje del contador

/**
 * @brief Configuración inicial del programa.
 *
 * Se inicializa la pantalla LCD y se enciende la retroiluminación.
 */
void setup() {
  LCD.init();       // Inicializa la pantalla LCD
  LCD.backlight();  // Enciende la retroiluminación
}

/**
 * @brief Bucle principal.
 *
 * Este bucle imprime un carácter "X" que se desplaza de izquierda a derecha
 * en la primera fila y un contador en la segunda fila.
 */
void loop() {
  for (int i = 0; i < 16; i++) {  // Recorre las 16 posiciones de la primera fila
    LCD.setCursor(i, 0);         // Mueve el cursor a la posición "i" de la primera fila
    LCD.print("X");              // Imprime el carácter "X"

    LCD.setCursor(2, 1);         // Mueve el cursor a la tercera posición de la segunda fila
    snprintf(msg, 20, " count: %d", i);  // Formatea el mensaje con el contador
    LCD.print(msg);              // Imprime el mensaje del contador

    delay(1000);  // Pausa de 1 segundo antes de pasar al siguiente carácter
  }
  LCD.clear();  // Limpia la pantalla al finalizar la secuencia
}