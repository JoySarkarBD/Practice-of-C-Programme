#include <stdio.h> // Header file for input and output functions

int main() {
    // Example 1: Using break in a for loop
    printf("Example 1: Using break in a for loop\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i); // Print the value of 'i'
        if (i == 5) {
            printf("\n(Breaking loop)\n");
            break; // Exit the loop when i becomes 5
        }
    }
    printf("\n\n");

    // Example 2: Using break in a while loop
    printf("Example 2: Using break in a while loop\n");
    int j = 1; // Initialize loop variable
    while (j <= 10) {
        printf("%d ", j); // Print the value of 'j'
        if (j == 7) {
            printf("\n(Breaking loop)\n");
            break; // Exit the loop when j becomes 7
        }
        j++; // Increment 'j'
    }
    printf("\n\n");

    // Example 3: Using break in a do-while loop
    printf("Example 3: Using break in a do-while loop\n");
    int k = 1; // Initialize loop variable
    do {
        printf("%d ", k); // Print the value of 'k'
        if (k == 3) {
            printf("\n(Breaking loop)\n");
            break; // Exit the loop when k becomes 3
        }
        k++; // Increment 'k'
    } while (k <= 10);
    printf("\n\n");

    // Example 4: Using break in a nested loop
    printf("Example 4: Using break in a nested loop\n");
    for (int m = 1; m <= 3; m++) {
        for (int n = 1; n <= 3; n++) {
            printf("(%d, %d) ", m, n); // Print the value of 'm' and 'n'
            if (m == 2 && n == 2) {
                printf("\n(Breaking loop)\n");
                break; // Exit both loops when m is 2 and n is 2
            }
        }
    }
    printf("\n\n");

    return 0; // Indicate that the program ended successfully
}
