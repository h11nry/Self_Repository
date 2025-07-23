#include <stdio.h>

int main() {

    // WEIGHT CONVERTER CALCULATOR

    int user_choice = 0;
    float weight_in_pounds = 0.0f;
    float weight_in_kilograms = 0.0f;

    printf("Welcome to the Weight Converter Calculator!\n");
    printf("You have 2 options:\n");
    printf("1. Convert Pounds to Kilograms\n");
    printf("2. Convert Kilograms to Pounds\n");
    printf("Please enter your choice (1 or 2): ");
    scanf("%d", &user_choice);

    if (user_choice == 1){
        // Convert Pounds to Kilograms
        printf("Please enter the weight in pounds: ");
        scanf("%f", &weight_in_pounds);
        weight_in_kilograms = weight_in_pounds * 0.453592;
        printf("%.2f pounds is equal to %.2f kilograms.\n", weight_in_pounds, weight_in_kilograms);
    }
    else if (user_choice == 2){
        // Convert Kilograms to Pounds
        printf("Please enter the weight in kilograms: ");
        scanf("%f", &weight_in_kilograms);
        weight_in_pounds = weight_in_kilograms / 0.453592;
        printf("%.2f kilograms is equal to %.2f pounds.\n", weight_in_kilograms, weight_in_pounds);
    }
    else {
        printf("Invalid choice. Please restart the program and select either 1 or 2.\n");
        return 1; // Exit the program with an error code
    }

    return 0;
}