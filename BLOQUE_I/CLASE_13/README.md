# 💻 Clase 13: Memoria Dinámica en C y C++

En esta clase exploramos el concepto de **memoria dinámica** en **C** y **C++**, una herramienta fundamental para gestionar memoria en tiempo de ejecución, adaptando las necesidades del programa de manera flexible.

---

## 📚 Contenido

### **1️⃣ Qué es la Memoria Dinámica**

La memoria dinámica es una región de memoria que se asigna y libera en tiempo de ejecución. Permite manejar estructuras de datos cuyo tamaño no se conoce en tiempo de compilación.

| **Tipo**     | **Características**                                                              |
| ------------ | -------------------------------------------------------------------------------- |
| **Estática** | Tamaño fijo definido en tiempo de compilación.                                   |
| **Dinámica** | Tamaño flexible definido en tiempo de ejecución mediante funciones o operadores. |

---

### **2️⃣ Memoria Dinámica en C**

En **C**, la memoria dinámica se gestiona con las funciones de la biblioteca `stdlib.h`: `malloc`, `calloc`, `realloc` y `free`.

#### **Funciones de Asignación y Liberación de Memoria**

| **Función** | **Descripción**                                                | **Prototipo**                         |
| ----------- | -------------------------------------------------------------- | ------------------------------------- |
| `malloc`    | Asigna un bloque de memoria no inicializado.                   | `void *malloc(size_t size)`           |
| `calloc`    | Asigna un bloque de memoria inicializado a 0.                  | `void *calloc(size_t n, size_t size)` |
| `realloc`   | Cambia el tamaño de un bloque de memoria previamente asignado. | `void *realloc(void *ptr, size_t)`    |
| `free`      | Libera un bloque de memoria previamente asignado.              | `void free(void *ptr)`                |

#### **Ejemplo en C**

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *i = (int *)calloc(1, sizeof(int)); // Asignación dinámica con calloc
    *i = 10;
    printf("Valor almacenado: %d\n", *i);

    free(i); // Libera la memoria asignada
    i = NULL; // Evita el puntero colgante
    printf("Puntero liberado\n");

    return 0;
}
```

---

### **3️⃣ Memoria Dinámica en C++**

En **C++**, la memoria dinámica se gestiona con los operadores `new` y `delete`. Estos operadores permiten asignar y liberar memoria de manera eficiente.

#### **Operadores de Asignación y Liberación**

| **Operador** | **Descripción**                                   |
| ------------ | ------------------------------------------------- |
| `new`        | Asigna memoria dinámica para un objeto o arreglo. |
| `delete`     | Libera memoria asignada con `new`.                |
| `new[]`      | Asigna memoria dinámica para un arreglo.          |
| `delete[]`   | Libera memoria asignada con `new[]`.              |

#### **Ejemplo en C++**

```cpp
#include <iostream>
using namespace std;

int main() {
    int *i = new int(10); // Asignación dinámica con new
    cout << "Valor almacenado: " << *i << endl;

    delete i; // Libera la memoria asignada
    i = nullptr; // Evita el puntero colgante
    cout << "Puntero liberado" << endl;

    return 0;
}
```

---

### **4️⃣ Diferencias entre C y C++**

| **Aspecto**        | **C**                         | **C++**                        |
| ------------------ | ----------------------------- | ------------------------------ |
| **Asignación**     | `malloc`, `calloc`, `realloc` | `new` y `new[]`                |
| **Liberación**     | `free`                        | `delete` y `delete[]`          |
| **Inicialización** | Manual                        | Automática (con constructores) |
| **Tipo devuelto**  | `void*` (requiere casting)    | Tipo específico                |

---

## 🖼️ Capturas de Pantalla

1️⃣ **Gestión de Memoria Estática y Dinámica**&#x20;

2️⃣ **Diferencias entre **``**/**``** y **``**/**``&#x20;

3️⃣ **Ejemplo Adicional:** Manejo de Memoria Dinámica

**C++:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int *i = new int(10); // Reserva memoria
    cout << "Valor almacenado: " << *i << endl;

    delete i; // Libera la memoria
    i = nullptr; // Prevenir puntero colgante
    return 0;
}
```

**C:**

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *i = (int *)calloc(1, sizeof(int)); // Reserva memoria inicializada
    *i = 10;
    printf("Valor almacenado: %d\n", *i);

    free(i); // Libera la memoria
    i = NULL; // Prevenir puntero colgante
    return 0;
}
```

---

## 👨‍💻 Sobre el Autor

- **👤 Nombre:** Edwin Yoner
- **📧 Contacto:** [✉️ edwinyoner@gmail.com](mailto\:edwinyoner@gmail.com)
- **🌐 LinkedIn:** [🌐 linkedin.com/in/edwinyoner](https://www.linkedin.com/in/edwinyoner)

