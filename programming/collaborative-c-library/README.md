# Utility Libraries Project

This repository contains three utility libraries written in C: `MATH_UTILS`, `STRING_UTILS`, and `GEOMETRY_UTILS`. Each library provides a variety of useful functions related to mathematics, string manipulation, and geometry. These are defined in their respective header files (`math_utils.h`, `string_utils.h`, and `geometry_utils.h`).

## Contribution Guide

We are looking for contributors to implement the function definitions for the declarations provided in the header files. Each function should be implemented in its corresponding `.c` file, such as `math_utils.c`, `string_utils.c`, or `geometry_utils.c`.

### How to Contribute

1. **Fork this Repository**: Start by forking this repository to your GitHub account.

2. **Clone the Repository**: Clone the forked repository to your local machine using:

   ```bash
   git clone 'repo-url'
   cd utility-libraries

   ```

3. **Create a New Branch**: Create a branch to work on a specific feature or fix. For example:

   ```bash
   git checkout -b implement-math-functions

   ```

4. **Implement the Functions**:
   Navigate to the .c file corresponding to the header file. For example, if implementing a mathematical function, edit math_utils.c.

   Example: For the declaration in math_utils.h:
   int factorial(int n);

   Add the following definition in math_utils.c:
   int factorial(int n) {
   if (n < 0) return -1;
   int result = 1;
   for (int i = 1; i <= n; ++i) {
   result \*= i;
   }
   return result;
   }
