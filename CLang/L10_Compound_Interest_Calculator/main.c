#include <stdio.h>
#include <math.h>

int main() {

    // COMPOUND INTEREST CALCULATOR
    float principal = 0.0f; // Initial amount of money
    float rate = 0.0f;      // Annual interest rate (in percentage)
    int duration = 0;           // Time of duration in years
    int compoundFrequency = 0; // Number of times interest is compounded per year
    float amount = 0.0f;    // Final amount after interest

    printf("Welcome to the Compound Interest Calculator!\n");
    printf("Please enter the principal amount (initial investment): ");
    scanf("%f", &principal);

    printf("Please enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Please enter the duration (in years): ");
    scanf("%d", &duration);

    printf("Please enter the number of times interest is compounded per year: ");
    scanf("%d", &compoundFrequency);

    // Calculate the final amount using the compound interest formula
    amount = principal * pow((1 + (rate / 100) / compoundFrequency),
                             compoundFrequency * duration);

    printf("The final amount after %.2f years is: %.2f\n", (float)duration, amount);
    printf("Thank you for using the Compound Interest Calculator!\n");


    return 0;
}