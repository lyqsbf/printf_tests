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
```
**⚠️ Replace** `test_file_name.c` with the name of the test file you want to execute (e.g., `test_general.c`).

---

## 💡 Explanation of the linking

The use of the flags '-L' and '-l' are crucial to avoid the error `undefined reference to 'ft_printf'`.

| Flag | Purpose | Explanation |
| :--- | :--- | :--- |
| **`-L.`** | Library path | Indicates to the linker to search for static libraries in the **current directory** (`.`). |
| **`-lftprintf`** | Library name | Tells to the linker to search for a library called **`libftprintf.a`** in the specified paths. |

---

### 3. Execution

After compiling and linking, execute the genereted test program:

```bash
./test_runner
