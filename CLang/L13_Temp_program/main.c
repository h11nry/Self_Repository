#include <stdio.h>

int main (){

    // TEMPERATURE CONVERTER CALCULATOR
    char user_choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Welcome to the Temperature Converter Calculator!\n");
    printf("You have 2 options:\n");
    printf("Type 'C' to convert Fahrenheit to Celsius\n");
    printf("Type 'F' to convert Celsius to Fahrenheit\n");
    printf("Please enter your choice (C or F): ");
    scanf(" %c", &user_choice);

    if (user_choice == 'C' || user_choice == 'c') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", celsius);
    } else if (user_choice == 'F' || user_choice == 'f') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    } else {
        printf("Invalid choice. Please restart the program and select C or F.\n");
    }

    return 0;
}