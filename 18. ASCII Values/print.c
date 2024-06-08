#include <stdio.h> // Header file for input and output functions

int main() 
{
    char c;

    // Prompt user for a character
    printf("Enter a character: ");
    scanf("%c", &c);

    // Print ASCII value of the input character
    printf("The ASCII value of '%c' is %d\n", c, c);

    // Print all ASCII values from 0 to 127
    printf("\nASCII Table:\n");
    printf("============\n");
    printf("Character | ASCII\n");
    printf("-----------------\n");
    for (int i = 0; i < 128; i++) {
        printf("    %c     |  %d\n", i, i);
    }

    return 0; // Indicate that the program ended successfully
}
