#include <stdio.h> // Header file for input and output functions

int main() {
    // int data type can typically store values from -2,147,483,648 to 2,147,483,647 (on a 32-bit system)
    // The value 10000000000000000 exceeds this range and will cause an overflow.
    int a = 10000000000000000; // This will result in an overflow and undefined behavior.

    printf("a = %d\n", a);

    // long long int data type can store values from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (on a 64-bit system)
    // The value 11111111111111111111 exceeds this range and will cause an overflow.
    long long int b = 11111111111111111111; // This will result in an overflow and undefined behavior.

    // To correctly print a long long int, use the %lld format specifier.
    // Using %d will not properly print a long long int and can lead to incorrect output.
    printf("b = %lld\n", b);

    // float data type can typically store values with a precision of about 6 to 7 decimal digits.
    // It can represent a wide range of values, from approximately 1.2E-38 to 3.4E+38 (positive and negative).
    float c = 3.14f; // 'f' suffix indicates a float literal
    printf("c = %f\n", c); // Using %f format specifier for printing float values

    // double data type can typically store values with a precision of about 15 to 16 decimal digits.
    // It can represent a wide range of values, from approximately 2.3E-308 to 1.7E+308 (positive and negative).
    double d = 3.141592653589793; // A double literal with higher precision
    printf("d = %lf\n", d); // Using %lf format specifier for printing double values

    // Examples of double data type usage
    double e = 1.234567890123456; // This value is within the precision range of double
    double f = 1234567890123456.0; // This value is within the range of double
    double g = 2.3e-308; // A very small value within the double range
    double h = 1.7e+308; // A very large value within the double range

    printf("e = %.15lf\n", e); // Print with precision up to 15 decimal places
    printf("f = %.1lf\n", f); // Print with one decimal place
    printf("g = %e\n", g); // Using %e format specifier for scientific notation
    printf("h = %e\n", h); // Using %e format specifier for scientific notation

    return 0; // Indicate that the program ended
}

/* Examples of Correct Data Type Usage */

// Example 1: Using int within its range
// int x = 2147483647; // Maximum positive value for int
// int y = -2147483648; // Minimum negative value for int

// Example 2: Using long long int within its range
// long long int z = 9223372036854775807LL; // Maximum positive value for long long int
// long long int w = -9223372036854775808LL; // Minimum negative value for long long int

// Example 3: Using float within its range
// float i = 3.141592f; // A value with precision within the float range
// float j = 1.234567e-5f; // A small value using scientific notation
// float k = 9.876543e10f; // A large value using scientific notation

// Example 4: Using double within its range
// double l = 3.141592653589793; // A value with precision within the double range
// double m = 2.718281828459045; // Another value with precision within the double range
// double n = 1.234567890123456e-100; // A very small value using scientific notation
// double o = 1.234567890123456e100; // A very large value using scientific notation
