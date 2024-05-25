#include <stdio.h> // Header file for input and output functions

int main() {
    // While Loop
    // Syntax: while (condition) { /* code */ }
    // The loop continues until the condition becomes false.

    // Example of While Loop
    printf("Example of While Loop:\n");
    int x = 1; // Initialization
    while (x <= 5) {
        printf("%d ", x); // Print the value of 'x' from 1 to 5
        x++; // Increment 'x'
    }
    printf("\n\n");

    // Do-While Loop
    // Syntax: do { /* code */ } while (condition);
    // The loop executes the code block at least once, and then the condition is checked.
    // If the condition is true, the loop continues; otherwise, it terminates.

    // Example of Do-While Loop
    printf("Example of Do-While Loop:\n");
    int y = 1; // Initialization
    do {
        printf("%d ", y); // Print the value of 'y' from 1 to 5
        y++; // Increment 'y'
    } while (y <= 5);
    printf("\n\n");

    return 0; // Indicate that the program ended successfully
}
