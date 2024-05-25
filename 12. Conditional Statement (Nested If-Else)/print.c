#include <stdio.h> // Header file for input and output functions

int main() {
    // Declaration of variables
    int age = 25;
    int weight = 70;

    // Nested if-else statements
    // Checking multiple conditions using if-else statements within another if-else statement
    if (age >= 18) {
        printf("You are eligible for voting.\n");

        if (weight >= 50) {
            printf("You meet the weight requirement for voting.\n");
        } else {
            printf("You do not meet the weight requirement for voting.\n");
        }
    } else {
        printf("You are not eligible for voting.\n");
    }

    return 0; // Indicate that the program ended successfully
}

/* Explanation of Nested If-Else */

// Nested if-else statements
// Using if-else statements inside another if-else statement to check multiple conditions.
// The inner if-else statements are executed only if the condition in the outer if statement is true.
// Nested if-else statements can have multiple levels of nesting.

// Example:
// if (condition1) {
//     /* code */
//     if (condition2) {
//         /* code */
//     }
//     else {
//         /* code */
//     }
// }
// else {
//     /* code */
// }
