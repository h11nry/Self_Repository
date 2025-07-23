#include <stdio.h>

int main() {

    // While loop in C language is the same as in Python
    // Infinite while loop
    // Conditional while loop
    // Basic logic is that the condition inside the while parameter is TRUE
    // The loop will continue to execute until the condition becomes FALSE


    // Check the inital condition FIRST to start the loop
    int conditionCheck = 1;
    while (conditionCheck > 0) {
        printf("Please enter a number that is smaller than 0:\n");
        scanf("%d", &conditionCheck);
    }

    // Use DO-WHILE loop to check the condition at the end
    // The loop will execute at least once
    int doWhileCondition = -1;
    do {
        printf("Again. Please enter a number that is smaller than 0:\n");
        scanf("%d", &doWhileCondition);
    } while (doWhileCondition > 0);

    return 0;
}