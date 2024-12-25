# 💻 Clase 12: Estructuras, Uniones, Enumeraciones y Uso de `extern` y Name Mangling

En esta clase exploramos tres conceptos fundamentales en **C** y **C++**: **Estructuras**, **Uniones** y **Enumeraciones**, además del uso de **`extern`** y **Name Mangling** en programas que combinan C y C++.

---

## 📚 Contenido

### **1️⃣ Estructuras**
Las **estructuras** en C y C++ son una colección de variables (de diferentes o iguales tipos) agrupadas bajo un mismo nombre. Cada variable dentro de la estructura se llama **miembro**.

#### **Estructuras Nombradas**
Se definen con un nombre y pueden ser reutilizadas:
```c
struct Pais {
    string nombre;
    int codigoPostal;
};

struct Humano {
    char nombre[30];
    int edad;
    struct Pais pais;
};
```

#### **Estructuras Anónimas**
No tienen nombre de tipo y se utilizan de forma directa, ya sea independientes o anidadas dentro de otras estructuras.

1. **Estructura Anónima Independiente:**
```c
struct {
    char nombre[30];
    int edad;
} anonimo;

anonimo.edad = 25;
printf("Edad: %d\n", anonimo.edad);
```

2. **Estructura Anónima Anidada:**
```c
struct Contenedor {
    int id;
    struct { /**< Estructura anónima dentro de otra estructura. */
        char nombre[30];
        int edad;
    } datos; /**< Nombre del miembro que contiene la estructura anónima. */
};

struct Contenedor objeto;
objeto.datos.edad = 30;
printf("Edad: %d\n", objeto.datos.edad);
```

#### **Inicialización y Uso**
```c
struct Humano juan = {"Juan", 27};
printf("Nombre: %s\n", juan.nombre);
```

---

### **2️⃣ Uniones**
Las **uniones** son similares a las estructuras, pero comparten el mismo espacio de memoria para todos sus miembros. Esto significa que sólo uno de los miembros puede almacenar un valor a la vez.

#### **Definición y Uso**
```c
union Dato {
    int entero;
    float decimal;
    char caracter;
};

union Dato valor;
valor.entero = 42;
printf("Entero: %d\n", valor.entero);
valor.decimal = 3.14;
printf("Decimal: %.2f\n", valor.decimal);
```

#### **Ventajas**
- Uso eficiente de la memoria.
- Ideal para manejar datos que no se usan simultáneamente.

---

### **3️⃣ Enumeraciones**
Las **enumeraciones** son un conjunto de constantes enteras con nombres descriptivos. Ayudan a mejorar la legibilidad del código.

#### **Definición y Uso**
```c
enum DiaSemana {
    LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO
};

enum DiaSemana hoy = LUNES;
printf("Hoy es el día: %d\n", hoy);
```

#### **Enumeraciones con Valores Personalizados**
```c
enum Estado {
    INACTIVO = 0,
    ACTIVO = 1,
    PAUSADO = 2
};

enum Estado sistema = ACTIVO;
printf("El estado del sistema es: %d\n", sistema);
```

---

### **4️⃣ Uso de `extern` y Name Mangling**

#### **¿Qué es `extern`?**
`extern` se utiliza para declarar variables o funciones definidas en otro archivo o ámbito. Esto permite compartir código entre múltiples archivos fuente.

#### **¿Qué es Name Mangling?**
En C++, el Name Mangling transforma los nombres de funciones para incluir información sobre los tipos de argumentos, lo que permite la sobrecarga de funciones. Para evitar conflictos con C, se usa `extern "C"`.

#### **Ejemplo con `extern` y Name Mangling**

##### Archivo `math_operations.h`
```c
#ifndef MATH_OPERATIONS_H
#define MATH_OPERATIONS_H

#ifdef __cplusplus
extern "C" {
#endif

int sumar(int a, int b); /**< Suma dos números. */
int restar(int a, int b); /**< Resta dos números. */

#ifdef __cplusplus
}
#endif

#endif // MATH_OPERATIONS_H
```

##### Archivo `math_operations.c`
```c
#include "math_operations.h"

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}
```

##### Archivo `main.cpp`
```cpp
#include <iostream>
#include "math_operations.h"

int main() {
    int a = 10, b = 5;

    std::cout << "Suma: " << sumar(a, b) << std::endl;
    std::cout << "Resta: " << restar(a, b) << std::endl;

    return 0;
}
```

---

### **5️⃣ Variables Globales con `extern`**

#### **¿Qué son las Variables Globales con `extern`?**
`extern` permite declarar variables globales que pueden ser utilizadas en múltiples archivos fuente. La variable se define en un archivo, y en los demás se declara con `extern`.

#### **Ejemplo de Variables Globales con `extern`**

##### Archivo `globales.h`
```c
#ifndef GLOBALES_H
#define GLOBALES_H

extern int contador; /**< Declaración de una variable global. */

#endif // GLOBALES_H
```

##### Archivo `globales.c`
```c
#include "globales.h"

int contador = 0; /**< Definición de la variable global. */
```

##### Archivo `main.c`
```c
#include <stdio.h>
#include "globales.h"

int main() {
    printf("Valor inicial del contador: %d\n", contador);
    contador++;
    printf("Valor del contador después de incrementar: %d\n", contador);
    return 0;
}
```

**Salida esperada:**
```
Valor inicial del contador: 0
Valor del contador después de incrementar: 1
```

---

### **6️⃣ Comparación de Uso**
| Concepto        | Característica Clave                            | Ejemplo de Uso                 |
|-----------------|------------------------------------------------|--------------------------------|
| **Estructuras** | Agrupan múltiples variables.                   | Información de un usuario.    |
| **Uniones**     | Uso eficiente de la memoria (un solo miembro). | Datos alternativos (int/float).|
| **Enumeraciones** | Conjunto de constantes con nombres descriptivos.| Estados o días de la semana.  |
| **`extern`**    | Interoperabilidad entre archivos.              | Compartir funciones o variables en múltiples archivos. |
| **Name Mangling**| Resolver nombres únicos en C++                | Evitar conflictos con C.       |

---

## 🖼️ Capturas de Pantalla
A continuación, se muestran ejemplos visuales utilizados en esta clase:

1️⃣ **Estructuras Nombradas y Anónimas**
![Estructuras Nombradas y Anónimas](images/1.png)

2️⃣ **Uniones**
![Uniones](images/2.png)

3️⃣ **Enumeraciones**
![Enumeraciones](images/3.png)

4️⃣ **Uso de `extern` y Name Mangling**
![Extern y Name Mangling](images/4.png)

5️⃣ **Variables Globales con `extern`**
![Variables Globales](images/5.png)

---

## 👨‍💻 Sobre el Autor
- **👤 Nombre:** Edwin Yoner
- **📧 Contacto:** [✉️ edwinyoner@gmail.com](mailto:edwinyoner@gmail.com)
- **🌐 LinkedIn:** [🌐 linkedin.com/in/edwinyoner](https://www.linkedin.com/in/edwinyoner)