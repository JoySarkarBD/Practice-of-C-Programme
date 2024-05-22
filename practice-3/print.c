// Variables and Data Types

/*
1. int    => -100, 0, 100
2. float  => -2.5, 5.46
3. char   => 'a', 'A', '@', 'z'
4. bool   => true or false (represented as 1 or 0 in C)
*/

// Format Specifier

/*
1. %d   => int
2. %f   => float
3. %c   => char
*/

// Note:
// In C, multiple char values cannot be printed directly using a single printf statement with one %c format specifier.
// To print multiple characters, each character needs its own %c format specifier, or you can use a string.

#include <stdio.h>

int main() {
    // Declare integer variables
    int count = 10;
    int countTwo = 20;

    // Declare float variable
    float a = 2.345;

    // Declare char variables
    char letter1 = 'A';
    char letter2 = 'B';
    char letter3 = '@';

    // Print integer variable using format specifier %d
    printf("%d\n", count);

    // Print two integer variables
    printf("%d %d\n", count, countTwo);

    // Print float variable using format specifier %f
    printf("%f\n", a);

    // Print float variable with 2 decimal places
    printf("%0.2f\n", a);

    // Print char variables using multiple %c format specifiers
    printf("%c %c %c\n", letter1, letter2, letter3);

    return 0;
}
