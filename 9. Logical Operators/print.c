#include <stdio.h> // Header file for input and output functions

int main() {
    // Declaration of variables
    int a = 10, b = 20, c = 0;

    // Logical AND (&&)
    // Returns true if both operands are true
    if (a > 0 && b > 0) {
        printf("Both %d and %d are greater than 0\n", a, b);
    } else {
        printf("At least one of %d and %d is not greater than 0\n", a, b);
    }

    // Logical OR (||)
    // Returns true if at least one operand is true
    if (a > 0 || b > 0) {
        printf("At least one of %d and %d is greater than 0\n", a, b);
    } else {
        printf("Both %d and %d are not greater than 0\n", a, b);
    }

    // Logical NOT (!)
    // Reverses the logical state of its operand
    if (!c) {
        printf("%d is false (zero)\n", c);
    } else {
        printf("%d is true (non-zero)\n", c);
    }

    return 0; // Indicate that the program ended successfully
}

/* Examples of Logical Operators */

// Logical AND (&&)
// Returns true if both operands are true, otherwise false.
// Example: if (a > 0 && b > 0) { /* code */ }

// Logical OR (||)
// Returns true if at least one operand is true, otherwise false.
// Example: if (a > 0 || b > 0) { /* code */ }

// Logical NOT (!)
// Returns true if the operand is false, otherwise false.
// Example: if (!c) { /* code */ }
