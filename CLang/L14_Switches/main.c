#include <stdio.h>

int main() {

    // Switch is an alternative of if-else statement
    // It is used to execute one block of code among many alternatives
    // Exmaples:

    int date_of_the_week = 0;
    printf("Enter the date of the week (1-7): ");
    scanf("%d", &date_of_the_week);

    switch(date_of_the_week){
        case 1:
            printf("Today is Monday.\n");
            break; // VERY IMPORTANT. ALL CASES FOLLOWING THE MATCHING CASE WILL BE EXECUTED UNTIL A BREAK IS ENCOUNTERED
        case 2:
            printf("Today is Tuesday.\n");
            break;
        case 3:
            printf("Today is Wednesday.\n");
            break;
        case 4:
            printf("Today is Thursday.\n");
            break;
        case 5:
            printf("Today is Friday.\n");
            break;
        case 6:
            printf("Today is Saturday.\n");
            break;
        case 7:
            printf("Today is Sunday.\n");
            break;
        default: // If no case matched, the dafault case will be executed
            printf("Invalid input. Please enter a number between 1 and 7.\n");
            break;
    }

    // In addition to int, switch can also be used with char and enum types.
    char grade = '\0';
    printf("Enter your grade (A-F): ");
    scanf(" %c", &grade);

    switch(grade){
        case 'A':
            printf("A-Excellent!\n");
            break;
        case 'B':
            printf("B-Well done!\n");
            break;
        case 'C':
            printf("C-Good effort!\n");
            break;
        case 'D':
            printf("D-You passed.\n");
            break;
        case 'F':
            printf("F-Better luck next time.\n");
            break;
        default:
            printf("Invalid grade. Please enter a grade between A and F.\n");
            break;
    }

    return 0;
}