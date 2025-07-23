#include <stdio.h>

int main() {

    // Logic Operators = usually used for conditional statements
    // AND = &&
    // OR = ||
    // NOT = !

    // AND Operator
    int temp = 10;

    if (temp > 5 && temp < 15) {
        printf("The temperature is between 5 and 15 degrees.\n");
    } else {
        printf("The temperature is not in the range.\n");
    }

    // OR Operator
    int humidity = 80;

    if (humidity < 30 || humidity > 70) {
        printf("The humidity is either too low or too high.\n");
    } else {
        printf("The humidity is in the optimal range.\n");
    }


    // NOT Operator
    int isRaining = 0; // 0 means false, 1 means true

    if (!isRaining) {
        printf("It is not raining.\n");
    } else {
        printf("It is raining.\n");
    }

    // Combining Operators
    if (temp > 5 && temp < 15 && humidity > 30 && humidity < 70 && !isRaining) {
        printf("The weather is perfect for outdoor activities.\n");
    } else {
        printf("The weather is not suitable for outdoor activities.\n");
    }
    
    return 0;
}