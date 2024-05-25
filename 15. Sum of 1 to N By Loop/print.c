#include <stdio.h> // Header file for input and output functions

int main() {
    int N = 5; // Define N as 5 for demonstration

    // Using For Loop to Calculate Sum of 1 to N
    printf("Using For Loop:\n");
    int sum_for = 0; // Initialize sum variable
    for (int i = 1; i <= N; i++) {
        sum_for += i; // Add current value of 'i' to sum
    }
    printf("Sum of numbers from 1 to %d: %d\n\n", N, sum_for);

    // Using While Loop to Calculate Sum of 1 to N
    printf("Using While Loop:\n");
    int sum_while = 0; // Initialize sum variable
    int j = 1; // Initialize loop variable
    while (j <= N) {
        sum_while += j; // Add current value of 'j' to sum
        j++; // Increment 'j'
    }
    printf("Sum of numbers from 1 to %d: %d\n\n", N, sum_while);

    // Using Do-While Loop to Calculate Sum of 1 to N
    printf("Using Do-While Loop:\n");
    int sum_do_while = 0; // Initialize sum variable
    int k = 1; // Initialize loop variable
    do {
        sum_do_while += k; // Add current value of 'k' to sum
        k++; // Increment 'k'
    } while (k <= N);
    printf("Sum of numbers from 1 to %d: %d\n\n", N, sum_do_while);

    return 0; // Indicate that the program ended successfully
}
