# 🧪 ft_printf Tester

Esta es una **suite de pruebas robusta y en constante crecimiento** diseñada para verificar la exactitud, el manejo de errores y el comportamiento de la implementación de tu función `ft_printf`, comparándola rigurosamente con la función estándar `printf` de la librería de C.

---

## 🎯 Cobertura de Tests

El objetivo de esta suite es garantizar que tu `ft_printf` sea 100% funcional y fiel al comportamiento de la versión original.

### 1. Especificadores de Formato

Se prueban exhaustivamente los siguientes tipos de conversión:

| Especificador | Tipo de Argumento | Descripción |
| :--- | :--- | :--- |
| `%c` | `char` | Carácter |
| `%s` | `char *` | Cadena de caracteres (incluyendo `NULL`) |
| `%p` | `void *` | Puntero (en formato hexadecimal) |
| `%d` / `%i` | `int` | Entero con signo |
| `%u` | `unsigned int` | Entero sin signo |
| `%x` / `%X` | `unsigned int` | Hexadecimal (minúsculas/MAYÚSCULAS) |
| `%%` | N/A | Carácter de porcentaje literal |

### 2. Casos Límite (Edge Cases)

Se evalúan situaciones críticas como:
* Manejo de valores `INT_MIN` y `INT_MAX`.
* Punteros `NULL`.
* Cadenas vacías y nulas.
* Combinaciones complejas de *flags*.

---

## ⚙️ Uso e Integración

### 1. Requisitos

Asegúrate de que tu `ft_printf` esté compilada en un archivo llamado **`libftprintf.a`** y que su prototipo esté disponible en un archivo de cabecera llamado **`ft_printf.h`** en el mismo directorio.

### 2.1. Compilación

Simplemente ejecuta el comando `make` en la raíz del repositorio:

```bash
make

**### 2.2. ⚙️ Compilación y Enlazado (Running the Tests)**

Para ejecutar esta suite de tests, es **obligatorio** que tu implementación de `ft_printf` esté compilada como una **librería estática** (`.a`).

### 1. Preparación de la Librería

Asegúrate de que has compilado tu código fuente (`ft_printf.c` y sus archivos relacionados) para generar el archivo **`libftprintf.a`**. Este archivo debe estar ubicado en el **directorio raíz** de este repositorio de tests.

### 2. Compilación y Enlazado de los Tests

Una vez que tengas `libftprintf.a` lista, puedes compilar el archivo de pruebas y **enlazarlo** con tu librería usando el siguiente comando:

```bash
cc nombre_del_test.c -L. -lftprintf -o test_runner
