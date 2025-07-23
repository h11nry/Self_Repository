#include <stdio.h>

int main () {

    // Break & Continue are similar to the ones in Python
    // Break is used to directly break a loop
    // Continue is used to skip the current iteration of a loop

    // Break example
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Breaking the loop at i = %d\n", i);
            break; // Exit the loop when i is 5
        }
        printf("Current value of i: %d\n", i);
    }
    // This example will print all numbers from 1 to 4 and then exit the loop.

    printf("\n");

    // Continue example
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Skipping the iteration at i = %d\n", i);
            continue; // Skip the rest of the loop when i is 5
        }
        printf("Current value of i: %d\n", i);
    }
    // This example will print all numbers from 1 to 10 except for 5. Namely skipping the number 5.

    return 0;
}