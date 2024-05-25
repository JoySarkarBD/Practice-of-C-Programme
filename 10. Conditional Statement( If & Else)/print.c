#include <stdio.h> // Header file for input and output functions

int main() {
    // Declaration of variables
    int score = 85;

    // Conditional statement: if
    // Checks if the condition is true and executes the block of code inside the if statement if it is
    if (score >= 90) {
        printf("Grade: A\n");
    }

    // Conditional statement: else if
    // Checks if the condition in the if statement is false and if the condition in the else if statement is true
    // Executes the block of code inside the else if statement if the condition is true
    else if (score >= 80) {
        printf("Grade: B\n");
    }

    // Conditional statement: else
    // Executes the block of code inside the else statement if none of the preceding conditions are true
    else {
        printf("Grade: C\n");
    }

    return 0; // Indicate that the program ended successfully
}

/* Explanation of Conditional Statements */

// Conditional statement: if
// Checks if a condition is true. If true, executes a block of code.
// Example: if (condition) { /* code */ }

// Conditional statement: else if
// Checks for an additional condition if the preceding if statement's condition is false.
// If true, executes a block of code.
// Example: else if (condition) { /* code */ }

// Conditional statement: else
// Executes a block of code if none of the preceding conditions are true.
// Example: else { /* code */ }
