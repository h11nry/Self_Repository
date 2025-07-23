#include <stdio.h>

int main() {
    
    // Nested loop = iterations inside iterations
    // Very useful for working with multi-dimensional data structures like matrices
    // To write and read this type of loop, you need you handle the outer and inner loop separately
    // The outer loop controls the number of rows, and the inner loop controls the number of columns

    // Example: Print a 3x3 grid of numbers
    for (int i = 1; i <= 3; i++) { // Outer loop for rows
        for (int j = 1; j <= 3; j++) { // Inner loop for columns
            printf("%d ", i * j); // Print the product of the current row and column
        }
        printf("\n"); // New line after each row
    }

    // First outer loop iteration (i=1):
    // Inner Loop 1: 1 * 1 = 1
    // Inner Loop 2: 1 * 2 = 2
    // Inner Loop 3: 1 * 3 = 3

    // Second outer loop iteration (i=2):
    // Inner Loop 1: 2 * 1 = 2
    // Inner Loop 2: 2 * 2 = 4
    // Inner Loop 3: 2 * 3 = 6

    // Third outer loop iteration (i=3):
    // Inner Loop 1: 3 * 1 = 3
    // Inner Loop 2: 3 * 2 = 6
    // Inner Loop 3: 3 * 3 = 9



    // Next example: user enter row number, column number and the specific icon to print
    // Print out a grid of icon according to user inputs
    int rows, cols = 0;
    char icon = '\0';

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter the icon to print: ");
    scanf(" %c", &icon); // Note the space before %c to consume any leftover newline character

    for (int i = 0; i < rows; i++) { // Outer loop for rows
        for (int j = 0; j < cols; j++) { // Inner loop for columns
            printf("%c ", icon); // Print the icon
        }
        printf("\n"); // New line after each row
    }


    return 0;
}