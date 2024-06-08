#include <stdio.h> // Header file for input and output functions
#include <ctype.h> // Header file for character type functions

int main() 
{
    char c;

    // Prompt user for a character
    printf("Enter a character: ");
    scanf("%c", &c);

    // Check if the character is a digit
    if (isdigit(c)) {
        printf("'%c' is a digit.\n", c);
    }
    // Check if the character is an alphabet
    else if (isalpha(c)) {
        printf("'%c' is an alphabet.\n", c);

        // Determine if it is uppercase or lowercase
        if (isupper(c)) {
            printf("'%c' is an uppercase letter.\n", c);
        } else {
            printf("'%c' is a lowercase letter.\n", c);
        }
    }
    // If it's neither a digit nor an alphabet
    else {
        printf("'%c' is neither a digit nor an alphabet.\n", c);
    }

    return 0; // Indicate that the program ended successfully
}
