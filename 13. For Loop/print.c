#include <stdio.h> // Header file for input and output functions

int main() {
    // For Loop (Type-1)
    // Syntax: for (initialization; condition; update) { /* code */ }
    // Initialization: Executed only once at the beginning of the loop.
    // Condition: Checked before each iteration. If true, the loop continues; otherwise, it terminates.
    // Update: Executed after each iteration.
    // The loop continues until the condition becomes false.

    // Example of For Loop (Type-1)
    printf("Example of For Loop (Type-1):\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i); // Print the value of 'i' from 1 to 5
    }
    printf("\n\n");

    // For Loop (Type-2)
    // Syntax: for (initialization; condition; )
    // Initialization: Executed only once at the beginning of the loop.
    // Condition: Checked before each iteration. If true, the loop continues; otherwise, it terminates.
    // The loop continues indefinitely until the condition becomes false.

    // Example of For Loop (Type-2)
    printf("Example of For Loop (Type-2):\n");
    int j = 1; // Initialization outside the loop
    for (; j <= 5; ) {
        printf("%d ", j); // Print the value of 'j' from 1 to 5
        j++; // Update 'j' inside the loop
    }
    printf("\n\n");

    // For Loop (Type-3)
    // Syntax: for ( ; condition; update)
    // Initialization: Not required; can be done before the loop.
    // Condition: Checked before each iteration. If true, the loop continues; otherwise, it terminates.
    // Update: Executed after each iteration.
    // The loop continues until the condition becomes false.

    // Example of For Loop (Type-3)
    printf("Example of For Loop (Type-3):\n");
    int k = 1; // Initialization before the loop
    for ( ; k <= 5; k++) {
        printf("%d ", k); // Print the value of 'k' from 1 to 5
    }
    printf("\n\n");

    return 0; // Indicate that the program ended successfully
}
