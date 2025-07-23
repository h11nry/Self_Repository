#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    // nested if statements = if inside another if

    // Ticket price example
    // Full price = $10
    // Student price = %9
    // Senior citizen price = $8
    // Both price = $7

    float price = 10.0f;
    bool is_student = false;
    bool is_senior = false;

    // Get user input for ticket price conditions
    char input[10];
    printf("Are you a student? (yes/no): ");
    scanf("%s", input);
    is_student = (strcmp(input, "yes") == 0);
    // strcmp is used to compare strings by checking if the input matches "yes"

    printf("Are you a senior citizen? (yes/no): ");
    scanf("%s", input);
    is_senior = (strcmp(input, "yes") == 0);

    if (is_student) {
        if (is_senior) {
            price = 7.0f; // Both student and senior citizen
        } else {
            price = 9.0f; // Student only
        }
    } else if (is_senior) {
        price = 8.0f; // Senior citizen only
    }

    // After processing all price judging and modification
    // The final price could be printed out
    printf("The ticket price is: $%.2f\n", price);
    
    return 0;
}