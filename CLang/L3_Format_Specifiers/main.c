#include <stdio.h>

int main() {
    /*
    Format Specifiers are special characters to show the type of data to be printed.
    They are used in the printf() function to format the output.

    Common format specifiers include:
    %d - for integers
    %f - for floating point numbers
    %lf - for double precision floating point numbers
    %c - for characters
    %s - for strings (character arrays)

    Formate specifiers can also be used for optional control such as width, precision, and flags.
    */

    // Normal usages for replacing variables
    int myInt = 42;
    float myFloat = 3.14f;
    double pi = 3.141592653589793;
    char myChar = 'A';
    char myString[] = "Hello, World!";

    printf("\nBelow are examples for normal replacing\n");
    printf("Integer: %d\n", myInt);    // Using %d for integer
    printf("Float: %f\n", myFloat);    // Using %f for float
    printf("Double: %lf\n", pi);       // Using %lf for double
    printf("Character: %c\n", myChar); // Using %c for character
    printf("String: %s\n", myString);  // Using %s for string

    // Optional control
    printf("\nBelow are examples for optional control\n");

    // Width
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    printf("%d\n", num1);        // Default width
    printf("%d\n", num2);
    printf("%d\n", num3);

    printf("%3d\n", num1);       // Minimum width of 3
    printf("%3d\n", num2);
    printf("%3d\n", num3);

    printf("%03d\n", num1);       // Minimum width of 3 with leading zeros
    printf("%03d\n", num2);
    printf("%03d\n", num3);

    // Precision
    float price1 = 19.99;
    float price2 = 100.5;
    float price3 = 1000.75;
    printf("%f\n", price1);      // Default precision
    printf("%f\n", price2);
    printf("%f\n", price3);

    printf("%.2f\n", price1);    // Precision of 2 decimal places (rounded number)
    printf("%.2f\n", price2);
    printf("%.2f\n", price3);

    printf("%7.2f\n", price1);  // Minimum width of 7 with precision of 2
    printf("%7.2f\n", price2);  // Using both width and precision
    printf("%7.2f\n", price3);
}