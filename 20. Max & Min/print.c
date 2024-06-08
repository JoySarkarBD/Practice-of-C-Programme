#include <stdio.h> // Header file for input and output functions

int main()
{
    int A, B, C;
    int min, max;

    // Prompt the user to enter three numbers
    printf("Enter three numbers (A, B, C):\n");

    // Input three numbers
    scanf("%d %d %d", &A, &B, &C);

    // Print the entered numbers
    printf("You entered: %d, %d, %d\n", A, B, C);

    // Determine the minimum number
    min = A;
    if (B < min)
    {
        min = B;
    }
    if (C < min)
    {
        min = C;
    }

    // Determine the maximum number
    max = A;
    if (B > max)
    {
        max = B;
    }
    if (C > max)
    {
        max = C;
    }

    // Print the results
    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);

    return 0; // Indicate that the program ended successfully
}
