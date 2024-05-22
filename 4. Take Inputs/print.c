#include <stdio.h> // Header file for input and output functions

int main() {
    // Declare variables to store user input
    int num, numTwo;           // Variable to store an 
    char a, b;                 // Variable to store an 
    float f;                   // Variable to store an 

    // Output the inputs received from the user
    scanf("%d", &num); 
    printf("%d\n", num);// Print the integer input

    // scanf("%d %d", &num, &numTwo); 
    // printf("%d %d", num, numTwo);// Print the integer input

    // scanf("%c %c", &a, &b); 
    // printf("%c %c", a, b);// Print the integer input

    // scanf("%f", &f); 
    // printf("%f", f);// Print the integer input
    // printf("%0.2f", f);// Print the integer input

    // How to print something like this 2% 10% after taking input like this: 2% 10%?
    
    // Method - 1
    // scanf("%d%c %d%c", &num, &a, &numTwo, &a); 
    // printf("%d%% %d%%", num, numTwo);// Print the integer input

    // Method - 2
    // scanf("%d%% %d%%", &num, &numTwo); 
    // printf("%d%% %d%%", num, numTwo);// Print the integer input
 
    // How to print something like this 2a 10b after taking input like this: 2a 10b
    // scanf("%da %db", &num, &numTwo); 
    // printf("%da %db", num, numTwo);// Print the integer input

    return 0; // Indicate that the program ended
}
