#include <stdio.h> // Header file for input and output functions

int main() {
    // Declaration of variables
    int a = 10, b = 20;
    float c = 10.5, d = 5.5;

    // Equal to (==)
    // Checks if two operands are equal
    if (a == b) {
        printf("%d is equal to %d\n", a, b);
    } else {
        printf("%d is not equal to %d\n", a, b);
    }

    // Not equal to (!=)
    // Checks if two operands are not equal
    if (a != b) {
        printf("%d is not equal to %d\n", a, b);
    } else {
        printf("%d is equal to %d\n", a, b);
    }

    // Greater than (>)
    // Checks if the left operand is greater than the right operand
    if (a > b) {
        printf("%d is greater than %d\n", a, b);
    } else {
        printf("%d is not greater than %d\n", a, b);
    }

    // Less than (<)
    // Checks if the left operand is less than the right operand
    if (a < b) {
        printf("%d is less than %d\n", a, b);
    } else {
        printf("%d is not less than %d\n", a, b);
    }

    // Greater than or equal to (>=)
    // Checks if the left operand is greater than or equal to the right operand
    if (a >= b) {
        printf("%d is greater than or equal to %d\n", a, b);
    } else {
        printf("%d is neither greater than nor equal to %d\n", a, b);
    }

    // Less than or equal to (<=)
    // Checks if the left operand is less than or equal to the right operand
    if (a <= b) {
        printf("%d is less than or equal to %d\n", a, b);
    } else {
        printf("%d is neither less than nor equal to %d\n", a, b);
    }

    return 0; // Indicate that the program ended successfully
}

/* Examples of Relational Operators */

// Equal to (==)
// Returns true if the left operand is equal to the right operand, otherwise false.
// Example: if (a == b) { /* code */ }

// Not equal to (!=)
// Returns true if the left operand is not equal to the right operand, otherwise false.
// Example: if (a != b) { /* code */ }

// Greater than (>)
// Returns true if the left operand is greater than the right operand, otherwise false.
// Example: if (a > b) { /* code */ }

// Less than (<)
// Returns true if the left operand is less than the right operand, otherwise false.
// Example: if (a < b) { /* code */ }

// Greater than or equal to (>=)
// Returns true if the left operand is greater than or equal to the right operand, otherwise false.
// Example: if (a >= b) { /* code */ }

// Less than or equal to (<=)
// Returns true if the left operand is less than or equal to the right operand, otherwise false.
// Example: if (a <= b) { /* code */ }
