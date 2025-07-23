#include <stdio.h>
#include <windows.h> // For Sleep function

int main() {
    
    // For loop in C language is similar to Python & while loop
    // Repeat a block of code a certain number of times
    // The basic structure is:
    // initialization; condition; increment/decrement

    // Count up
    for(int number = 1; number <= 10; number++) {
        printf("The number is: %d\n", number);
    }

    // Count down
    for(int secondNumber = 10; secondNumber >= 1; secondNumber--) {
        printf("The second number is: %d\n", secondNumber);
    }

    // How to add sleep function to the loop?
    // Using the "Sleep(milliseconds)" function in Windows
    // Remeber to include the header file <windows.h>

    for(int i = 0; i < 5; i++) {
        printf("Sleeping for 1 second...\n");
        Sleep(1000); // Sleep for 1000 milliseconds (1 second)
        printf("Woke up after 1 second!\n");
    }

    // Count down + time control
    for(int j = 10; j > 0; j--) {
        printf("New year after %d seconds!\n", j);
        Sleep(1000); // Sleep for 1000 milliseconds (1 second)
    }

    return 0;
}