# 🧪 ft_printf Tester

This is a **robust and constantly growing test suite** designed to verify the accuracy, error handling, and behavior of your `ft_printf` function implementation, rigorously comparing it against the standard C library function `printf`.

---

## 🎯 Test Coverage

The goal of this suite is to ensure your `ft_printf` is 100% functional and faithful to the behavior of the original C function.

### 1. Format Specifiers

The following conversion types are exhaustively tested:

| Specifier | Argument Type | Description |
| :--- | :--- | :--- |
| `%c` | `char` | Character |
| `%s` | `char *` | String of characters (including `NULL`) |
| `%p` | `void *` | Pointer (in hexadecimal format) |
| `%d` / `%i` | `int` | Signed Integer |
| `%u` | `unsigned int` | Unsigned Integer |
| `%x` / `%X` | `unsigned int` | Hexadecimal (lowercase/UPPERCASE) |
| `%%` | N/A | Literal percent character |

### 2. Edge Cases

Critical situations are evaluated, including:
* Handling of `INT_MIN` and `INT_MAX` values.
* `NULL` pointers.
* Empty and null strings.
* Complex combinations of flags and precision.

---

## ⚙️ Usage and Integration

### 1. Requirements

Ensure your `ft_printf` is compiled into a file named **`libftprintf.a`** and that its prototype is available in a header file named **`ft_printf.h`**. Both files must be located in the **root directory** of this test repository.

### 2. Compilation and Linking

#### 2.1. Library Preparation

Make sure you have previously run the `make` command in your `ft_printf` repository to generate the **`libftprintf.a`** file.

#### 2.2. Linking the Tests

Once `libftprintf.a` is ready, you can compile the test file and **link** it with your library using the following command:

```bash
cc test_file_name.c -L. -lftprintf -o test_runner
