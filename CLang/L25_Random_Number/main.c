#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Random Number / Pseudo-Random Number Generation
    // The rand() function generates pseudo-random numbers
    // The random function is included in the stdlib.h header file

    // If we directly print out the rand(), it will give the same number every time
    // Therefore, we need to introduce the time, and generate the time seed for real random

    // A specific formula is used to generate the random number (Just remeber it)

    srand(time(NULL)); // Seed the random number generator with the current time

    int min = 1;
    int max = 100;

    // Generate a random number between min and max
    int random_number = (rand() % (max - min + 1)) + min; // Formula used (Remeber it)

    printf("%d", random_number);

    return 0;
}