#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Number Guessing Game
    // The user has to guess a random number between 1 and 100
    // The program will give hints if the guess is too high or too low

    // For example: if the random number is 72
    // User guesses 50: "Too low!"
    // User guesses 80: "Too high!"
    // The game will continue until the user guesses the correct number
    // In addition, the program will count the number of attempts

    srand(time(NULL)); // Seed the random number generator with the current time
    int min = 1;
    int max = 100;

    // Generate a random number between min and max
    int random_number = (rand() % (max - min + 1)) + min;

    float guess = 0.0f;
    int attempts = 0;

    do {
        printf("Please enter your guess about this random number: \n");
        scanf("%f", &guess);
        attempts++;

        if(guess > random_number){
            printf("TOO HIGH!!!\n");
        }
        else if(guess < random_number){
            printf("TOO LOW!!!\n");
        }
        else if(guess == random_number){
            printf("Congrat!!! You guess the number in %d attempts. The correct number is %d!!!", attempts, random_number);
        }
        else{
            printf("Please enter a valid guess!!!\n");
            continue;
        }
    }while(guess != random_number);

    return 0;
}