#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main () {
    // IF STATEMENT EXAMPLE

    // if statement for int checking
    int age = 0;

    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age >= 60){
        printf("You are a senior citizen.\n");
    } else if (age >= 18) {
        printf("You are an adult.\n");
    } else if (age >= 13) {
        printf("You are a teenager.\n");
    } else if (age >= 0) {
        printf("You are a child.\n");
    } else {
        printf("You have not been borned yet.\n");
    }

    while (getchar() != '\n'); // 清除缓冲区的换行符

    // if statement for boolean checking
    bool isStudent = false;

    if (isStudent) {
        printf("You are a student.\n");
    } else {
        printf("You are not a student.\n");
    }

    // if statement for string checking
    char name[50] = "";

    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // Remove newline character

    if (strlen(name) == 0) {
        printf("You did not enter a name.\n");
    } else {
        printf("Hello, %s!\n", name);
    }

    return 0;
}