#include <stdio.h> // Header file for input and output functions

int main() {
    // Declaration of variables
    int score = 75;

    // If-else ladder
    // Checking multiple conditions in sequence using if-else-if statements
    if (score >= 90) {
        printf("Grade: A\n");
    }
    else if (score >= 80) {
        printf("Grade: B\n");
    }
    else if (score >= 70) {
        printf("Grade: C\n");
    }
    else if (score >= 60) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F\n");
    }

    return 0; // Indicate that the program ended successfully
}

/* Explanation of If-Else Ladder */

// If-else ladder
// A sequence of if and else if statements to check multiple conditions in sequence.
// The conditions are checked one by one from top to bottom.
// When a condition is true, the corresponding block of code is executed.
// If none of the conditions are true, the block of code in the else statement (if present) is executed.

// Example:
// if (condition1) {
//     /* code */
// }
// else if (condition2) {
//     /* code */
// }
// else if (condition3) {
//     /* code */
// }
// ...
// else {
//     /* code */
// }
