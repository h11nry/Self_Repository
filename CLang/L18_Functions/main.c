#include <stdio.h>
#include <string.h>

void happyBirthdaySong(char birthdayPerson[], int age) { // Parameters: birthdayPerson and age
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s!\n", birthdayPerson);
    printf("Happy Birthday to your %d birthday!\n", age);
}

int main() {

    // Functions in C = reusable blocks of code that perform a specific task
    // You can call the same function for multiple times within a program

    // Singing Happy Birthday Song for 3 times by using/not using functions

    // Without function-calling (Simple copy&paste)

    // With function-calling & user inputs
    printf("Enter the name of the birthday person: ");
    char name[50];
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // Remove the newline character

    printf("Enter the age of the birthday person: ");
    int age;
    scanf("%d", &age);

    happyBirthdaySong(name, age); // Arguments: name and age
    happyBirthdaySong(name, age);
    happyBirthdaySong(name, age);

    return 0;
}