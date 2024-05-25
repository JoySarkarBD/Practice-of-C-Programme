#include <stdio.h> // Header file for input and output functions

int main() {
    // Example 1: Using continue in a for loop
    printf("Example 1: Using continue in a for loop\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            printf("Skipping iteration for i = %d\n", i);
            continue; // Skip the rest of the loop body for i = 3
        }
        printf("%d ", i); // Print the value of 'i'
    }
    printf("\n\n");

    // Example 2: Using continue in a while loop
    printf("Example 2: Using continue in a while loop\n");
    int j = 1; // Initialize loop variable
    while (j <= 5) {
        if (j == 4) {
            printf("Skipping iteration for j = %d\n", j);
            j++; // Increment 'j' to avoid infinite loop
            continue; // Skip the rest of the loop body for j = 4
        }
        printf("%d ", j); // Print the value of 'j'
        j++; // Increment 'j'
    }
    printf("\n\n");

    // Example 3: Using continue in a do-while loop
    printf("Example 3: Using continue in a do-while loop\n");
    int k = 1; // Initialize loop variable
    do {
        if (k == 2) {
            printf("Skipping iteration for k = %d\n", k);
            k++; // Increment 'k' to avoid infinite loop
            continue; // Skip the rest of the loop body for k = 2
        }
        printf("%d ", k); // Print the value of 'k'
        k++; // Increment 'k'
    } while (k <= 5);
    printf("\n\n");

    return 0; // Indicate that the program ended successfully
}
