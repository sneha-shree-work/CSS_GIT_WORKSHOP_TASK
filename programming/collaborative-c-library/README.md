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
Navigate to the .c file corresponding to the header file. For example, if implementing a geomatrical function, edit geomatry_utils.c.

Example: For the declaration in geomatry_utils.h:


 ```bash
   double area_circle(double radius);

   ```

Add the following definition in geomatry_utils.c:
```bash
double area_circle(double radius) {
    double area = 3.14 * radius * radius;
    return area;
}
```
Example: For the declaration in geomatry_utils.h:


 ```bash
   double area_rectangle(double length, double width);

   ```

Add the following definition in geomatry_utils.c:
```bash
double area_rectangle(double length, double width) {
    double area = length * width;
    return area;
}
```
Example: For the declaration in math_utils.h:


 ```bash
   int factorial(int n);

   ```
Add the following definition in math_utils.c:

```bash
int factorial(int n) {
    if(n<0) return -1;
    int ans = 1;
    while(n>0) {
        ans *= n;
        n--;
    } 
    return ans;
}
```
Example: For the declaration in math_utils.h:


 ```bash
   int gcd(int a, int b);

   ```

Add the following definition in math_utils.c:
```bash
int gcd(int a, int b) {
    if(b==0) return a;
    int remainder = a%b;
    return gcd(b, remainder);
}
```
Example: For the declaration in string_utils.h:


 ```bash
   char* reverse_string(const char* str);

   ```

Add the following definition in string_utils.c:
```bash
char* reverse_string(const char* str) {
    if (str == NULL) {
        return NULL; 
    }
    int length = strlen(str);
    char* reversed = (char*)malloc(length + 1);
    for (int i = 0; i < length; ++i) {
        reversed[i] = str[length-1-i];
    }
    
    reversed[length] = '\0';

    return reversed;
}
```
Example: For the declaration in string_utils.h:


 ```bash
   char* to_uppercase(const char* str);

   ```

Add the following definition in string_utils.c:
```bash
char* to_uppercase(const char* str) {
    if(str==nullptr) return nullptr;
    int length = strlen(str);
    char* result = (char*)malloc(length + 1);
    for (int i = 0; i < length; ++i) {
        char c = str[i] - 32;
        result[i] = c;
    }
    result[length] = '\0';
    return result;
}
```