# 🧪 ft_printf Tester

A **Spanish** version of the README is also available (see document `README_es.md`)
---
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
```

---

## 🤝 Contributions (Reporting Issues)

Contributions are highly welcome and are crucial for improving the quality of this test suite!

If you encounter any of the following issues, please **open an issue** in this repository:

1.  **False Negative:** If you believe your `ft_printf` works correctly, but the test suite marks a **FAIL**.
2.  **False Positive:** If you know your `ft_printf` has a bug, but the test marks **PASS** (meaning a test case is missing).
3.  **Tester Errors:** If you find any errors in the syntax, logic, or compilation of the tester code itself.

---

### How to Contribute

1.  **Report an Issue:** Open a new *Issues* tab on GitHub and describe the error you found, including the **exact test case** that is failing or missing.
2.  **Submit a Pull Request (Optional):** If you have created a new test to fix the problem, you can directly submit a *Pull Request* for us to review and integrate.

**Your collaboration ensures that this test suite is as robust and complete as possible for the entire community.**
