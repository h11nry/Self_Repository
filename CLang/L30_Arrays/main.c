#include <stdio.h>

int main() {

    // Array = a collection of elements that have the SAME data type
    // Similar to a variable but it can contains many values
    // Usage of array in C language is similar to list in Python

    int numbers[] = {10, 20, 30, 40, 50};
    char characters[] = {'A', 'B', 'C', 'D', 'F'};

    // Use for loop to display every element inside an array
    // If you directlt print the array, it will give you the pointer address that is point to this array

    for(int i=0; i < 5; i++){
        printf("%d ", numbers[i]);
    }

    printf("\n");

    for(int j=0; j < 5; j++){
        printf("%c ", characters[j]);
    }

    printf("\n");

    /*
    What if you do NOT know the number of elements inside an array?
    You can use sizeof() to calculate
    sizeof() returns the physical bytes that a certain variable has taken in the memory
    By using the total size divded by the first element size -> The number of elements
    */

    int size = sizeof(numbers) / sizeof(numbers[0]);

    for(int h=0; h < size; h++){
        printf("%d ", numbers[h]);
    }

    /*
    Final Result:
    10 20 30 40 50
    A B C D F
    10 20 30 40 50
    */

    return 0;
}