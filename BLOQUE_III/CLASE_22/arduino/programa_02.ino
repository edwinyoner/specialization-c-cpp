/**
 * @file lcd_display.ino
 * @brief Programa para mostrar caracteres y un contador en una pantalla LCD I2C usando Arduino Uno.
 * @author Edwin Yoner
 * @date 10/12/2024
 *
 * Este programa muestra una "X" que se mueve por la primera línea de la pantalla
 * LCD y un contador en la segunda línea que incrementa de 0 a 15.
 */

#include <Wire.h> // Biblioteca para comunicación I2C
#include <LiquidCrystal_I2C.h> // Biblioteca para manejar el LCD I2C

// Inicializa la pantalla LCD con la dirección I2C (0x27), 16 columnas y 2 filas
LiquidCrystal_I2C LCD(0x27, 16, 2);
char msg[20]; // Cadena para mostrar el contador

void setup() {
  LCD.init(); // Inicializa la pantalla LCD
  LCD.backlight(); // Enciende la luz de fondo del LCD
}

void loop() {
  for (int i = 0; i < 16; i++) {
    LCD.setCursor(i, 0); // Coloca el cursor en la posición 'i' de la primera fila
    LCD.print("X"); // Imprime la letra "X" en la posición actual

    LCD.setCursor(2, 1); // Coloca el cursor en la tercera posición de la segunda fila
    snprintf(msg, 20, " count: %d", i); // Formatea el texto del contador
    LCD.print(msg); // Muestra el contador

    delay(1000); // Espera 1 segundo
  }
  LCD.clear(); // Limpia la pantalla antes de repetir el bucle
}