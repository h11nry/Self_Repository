#include <stdio.h>
#include <string.h>

int main() {

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = ""; // Array to hold the name, initialized to an empty string

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // Note the space before %c to consume any leftover newline character

    // Clear the input buffer before reading a string as fgets cannot use scanf trick
    getchar();

    printf("Enter your name: ");

    // Cannot use scanf becasue it stops at whitespace, using fgets instead
    fgets(name, sizeof(name), stdin); // name of input variable + size of variable + stdin (standard input)

    // fgets reads the entire line including input space by user
    // Need to remove that by adding a null terminator at the end of the string
    // NEED TO ADD HEADER FILE <string.h> FOR THIS
    name[strlen(name) - 1] = '\0'; // Last character changes to be terminator

    printf("Your age is: %d\n", age);
    printf("Your GPA is: %.2f\n", gpa);
    printf("Your grade is: %c\n", grade);
    printf("Your name is: %s\n", name);
    
    return 0;
}