# 💻 Clase 25: Operadores Bit a Bit en C/C++

En esta clase exploramos los **operadores bit a bit** en **C/C++**, los cuales permiten manipular directamente los bits individuales de las variables. Este enfoque es muy útil en aplicaciones de bajo nivel como programación de microcontroladores, control de hardware y optimización de recursos.

---

## 📚 Contenido

### **1️⃣ Conceptos Clave de los Operadores Bit a Bit**

1. **AND (`&`):**
   - Realiza una operación lógica AND entre los bits de dos operandos.
   - Solo devuelve 1 si ambos bits son 1.
   - Ejemplo:
     ```c
     int a = 5;  // 0101 en binario
     int b = 3;  // 0011 en binario
     int resultado = a & b;  // 0001 (1 en decimal)
     ```

2. **OR (`|`):**
   - Realiza una operación lógica OR entre los bits.
   - Devuelve 1 si al menos uno de los bits es 1.
   - Ejemplo:
     ```c
     int resultado = a | b;  // 0111 (7 en decimal)
     ```

3. **XOR (`^`):**
   - Realiza una operación XOR (OR exclusivo) entre los bits.
   - Devuelve 1 solo si los bits son diferentes.
   - Ejemplo:
     ```c
     int resultado = a ^ b;  // 0110 (6 en decimal)
     ```

4. **NOT (`~`):**
   - Invierte todos los bits del operando.
   - Ejemplo:
     ```c
     int resultado = ~a;  // 1010 en complemento a dos (resultado negativo)
     ```

5. **Desplazamiento a la izquierda (`<<`):**
   - Desplaza los bits a la izquierda y agrega ceros a la derecha.
   - Cada desplazamiento equivale a multiplicar por 2.
   - Ejemplo:
     ```c
     int resultado = a << 1;  // 1010 (10 en decimal)
     ```

6. **Desplazamiento a la derecha (`>>`):**
   - Desplaza los bits a la derecha.
   - Cada desplazamiento equivale a dividir entre 2.
   - Ejemplo:
     ```c
     int resultado = a >> 1;  // 0010 (2 en decimal)
     ```

---

### **2️⃣ Ejemplo Completo en C: Uso de Operadores Bit a Bit**

Archivo `operadores_bit_a_bit.c`:

```c
/**
 * @file operadores_bit_a_bit.c
 * @brief Programa para demostrar el uso de operadores bit a bit en C.
 * @author Edwin Yoner
 * @date 28/12/2024
 */

#include <stdio.h>

int main() {
    int a = 5;  // 0101 en binario
    int b = 3;  // 0011 en binario

    printf("Operador AND (&): %d\n", a & b);  // Resultado: 1
    printf("Operador OR (|): %d\n", a | b);   // Resultado: 7
    printf("Operador XOR (^): %d\n", a ^ b);  // Resultado: 6
    printf("Operador NOT (~): %d\n", ~a);    // Resultado: -6 en complemento a dos
    printf("Desplazamiento Izquierda (<<): %d\n", a << 1);  // Resultado: 10
    printf("Desplazamiento Derecha (>>): %d\n", a >> 1);   // Resultado: 2

    return 0;  // Indica que el programa terminó correctamente.
}
```

---

### **3️⃣ Ejemplo Completo en C++: Uso de Operadores Bit a Bit**

Archivo `operadores_bit_a_bit.cpp`:

```cpp
/**
 * @file operadores_bit_a_bit.cpp
 * @brief Programa para demostrar el uso de operadores bit a bit en C++.
 * @author Edwin Yoner
 * @date 28/12/2024
 */

#include <iostream>
using namespace std;

int main() {
    int a = 5;  // 0101 en binario
    int b = 3;  // 0011 en binario

    cout << "Operador AND (&): " << (a & b) << endl;  // Resultado: 1
    cout << "Operador OR (|): " << (a | b) << endl;   // Resultado: 7
    cout << "Operador XOR (^): " << (a ^ b) << endl;  // Resultado: 6
    cout << "Operador NOT (~): " << (~a) << endl;    // Resultado: -6 en complemento a dos
    cout << "Desplazamiento Izquierda (<<): " << (a << 1) << endl;  // Resultado: 10
    cout << "Desplazamiento Derecha (>>): " << (a >> 1) << endl;   // Resultado: 2

    return 0;  // Indica que el programa terminó correctamente.
}
```

---

### **4️⃣ Explicación del Código**

1. **Operador AND (`&`):** Realiza la operación AND entre los bits de `a` y `b`.
2. **Operador OR (`|`):** Realiza la operación OR entre los bits de `a` y `b`.
3. **Operador XOR (`^`):** Devuelve 1 cuando los bits son diferentes.
4. **Operador NOT (`~`):** Invierte los bits de `a`.
5. **Desplazamiento Izquierda (`<<`):** Desplaza los bits de `a` una posición a la izquierda.
6. **Desplazamiento Derecha (`>>`):** Desplaza los bits de `a` una posición a la derecha.

---

### **5️⃣ Beneficios del Uso de Operadores Bit a Bit**

- **Eficiencia:** Permiten realizar operaciones rápidas a nivel de hardware.
- **Control de Flags:** Muy utilizados en programación de microcontroladores para encender y apagar bits específicos.
- **Compactación de Datos:** Ayudan a comprimir información en menos espacio.

---

### **6️⃣ Aplicaciones Prácticas**

- **Programación de Sistemas Embebidos:** Control de registros y bits en microcontroladores.
- **Criptografía:** Operaciones XOR para cifrado simple.
- **Compresión de Datos:** Manipulación de bits para comprimir datos.

---

### **7️⃣ Requisitos**

- Editor de código (VS Code, Code::Blocks, etc.).
- Compilador C/C++ (GCC).

---

### **8️⃣ Pasos para Ejecutar los Programas**

1. Abre el terminal o el entorno de desarrollo.
2. Copia y pega el código en archivos llamados `operadores_bit_a_bit.c` y `operadores_bit_a_bit.cpp`.
3. Compila el programa en C con:
   ```bash
   gcc operadores_bit_a_bit.c -o operadores_bit_a_bit_c
   ```
4. Compila el programa en C++ con:
   ```bash
   g++ operadores_bit_a_bit.cpp -o operadores_bit_a_bit_cpp
   ```
5. Ejecuta el programa:
   ```bash
   ./operadores_bit_a_bit_c
   ./operadores_bit_a_bit_cpp
   ```
6. Observa la salida de las operaciones bit a bit.

---

## 👨‍💻 Sobre el Autor

- **👤 Nombre:** Edwin Yoner
- **📧 Contacto:** [edwinyoner@gmail.com](mailto:edwinyoner@gmail.com)
- **🌐 LinkedIn:** [linkedin.com/in/edwinyoner](https://www.linkedin.com/in/edwinyoner)