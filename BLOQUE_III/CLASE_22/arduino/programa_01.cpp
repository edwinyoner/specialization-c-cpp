/**
 * @file blink_led.ino
 * @author Edwin Yoner
 * @date 10/12/2024
 *
 * Este programa hace parpadear un LED conectado al pin digital 13 de la placa Arduino.
 */

#define LED_PIN 13 /**< Pin al que está conectado el LED */

void setup() {
  // Configura el pin como salida
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Enciende el LED
  digitalWrite(LED_PIN, HIGH);
  delay(1000); // Espera 1 segundo (1000 ms)

  // Apaga el LED
  digitalWrite(LED_PIN, LOW);
  delay(1000); // Espera 1 segundo (1000 ms)
}