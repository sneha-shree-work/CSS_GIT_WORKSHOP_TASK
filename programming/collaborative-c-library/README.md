# Utility Libraries Project

This repository contains three utility libraries written in C: `MATH_UTILS`, `STRING_UTILS`, and `GEOMETRY_UTILS`. Each library provides a variety of useful functions related to mathematics, string manipulation, and geometry. These are defined in their respective header files (`math_utils.h`, `string_utils.h`, and `geometry_utils.h`).

## Contribution Guide

We are looking for contributors to implement the function definitions for the declarations provided in the header files. Each function should be implemented in its corresponding `.c` file, such as `math_utils.c`, `string_utils.c`, or `geometry_utils.c`.

### Description of Files

- **Header Files (`.h`)**: Contain the function declarations.
- **Source Files (`.c`)**: Contributors will define the functions here.
- **`main.c`**: A driver file to test the implemented functions.
- **`README.md`**: Documentation for the project.

**How to Implement the Functions**:
Navigate to the .c file corresponding to the header file. For example, if implementing a mathematical function, edit math_utils.c.

Example: For the declaration in math_utils.h:


 ```bash
   int factorial (int n);

   ```

Add the following definition in math_utils.c:
```bash
int factorial(int n) {
    if (n < 0) return -1;
        int result = 1;
        for (int i = 1; i <= n; ++i) {
        result \*= i;
    }
    return result;
}
```
