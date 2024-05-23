#include <stdio.h> // Header file for input and output functions

int main() {
    // Declaration of variables
    int a = 10, b = 3;
    float c = 5.5, d = 2.0;

    // Addition
    int sum_int = a + b; // Adding two integers
    float sum_float = c + d; // Adding two floats
    printf("Sum of %d and %d is: %d\n", a, b, sum_int);
    printf("Sum of %.1f and %.1f is: %.1f\n", c, d, sum_float);

    // Subtraction
    int diff_int = a - b; // Subtracting two integers
    float diff_float = c - d; // Subtracting two floats
    printf("Difference between %d and %d is: %d\n", a, b, diff_int);
    printf("Difference between %.1f and %.1f is: %.1f\n", c, d, diff_float);

    // Multiplication
    int prod_int = a * b; // Multiplying two integers
    float prod_float = c * d; // Multiplying two floats
    printf("Product of %d and %d is: %d\n", a, b, prod_int);
    printf("Product of %.1f and %.1f is: %.1f\n", c, d, prod_float);

    // Division
    int div_int = a / b; // Dividing two integers (integer division)
    float div_float = c / d; // Dividing two floats
    printf("Quotient of %d divided by %d is: %d\n", a, b, div_int);
    printf("Quotient of %.1f divided by %.1f is: %.1f\n", c, d, div_float);

    // Modulus
    int mod_int = a % b; // Modulus operator gives the remainder of the division of two integers
    printf("Remainder of %d divided by %d is: %d\n", a, b, mod_int);

    return 0; // Indicate that the program ended successfully
}

/* Examples of Arithmetic Operators */

// Addition (+)
// Adds two operands.
// Example: int sum = a + b; // If a is 10 and b is 3, sum will be 13

// Subtraction (-)
// Subtracts the second operand from the first.
// Example: int diff = a - b; // If a is 10 and b is 3, diff will be 7

// Multiplication (*)
// Multiplies two operands.
// Example: int prod = a * b; // If a is 10 and b is 3, prod will be 30

// Division (/)
// Divides the first operand by the second operand.
// For integer division, the result is an integer quotient, any fractional part is discarded.
// Example: int quotient = a / b; // If a is 10 and b is 3, quotient will be 3

// Modulus (%)
// Gives the remainder of the division of the first operand by the second operand.
// Example: int remainder = a % b; // If a is 10 and b is 3, remainder will be 1
