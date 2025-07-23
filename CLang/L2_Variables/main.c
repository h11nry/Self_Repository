#include <stdio.h> // This is header file for C language - needed for every C program

#include <stdbool.h> // This is header file for boolean type in C - needed if using bool

int main() {
    // Declare a variable of type int
    int myNumber = 24;

    printf("This is my number %d\n", myNumber);

    // Declare a variable of type float
    float myFloat = 3.14f;

    printf("This is my float %f\n", myFloat);

    // Declare a variable of type double (long floating point)
    double myDouble = 2.718281828459045;

    printf("This is my double %lf\n", myDouble);

    // Declare a variable of type char
    char myChar = 'A';

    printf("This is my character %c\n", myChar);

    // Declare a varibale of string type (using char array)
    char myString[] = "Hello, World!";

    printf("This is my string %s\n", myString);

    // Declare a variable of type bool
    bool myBool = true;

    if (myBool){
        printf("This is a boolean value: true\n");
    } else {
        printf("This is a boolean value: false\n");
    }

    return 0; // Return 0 to indicate successful execution
}