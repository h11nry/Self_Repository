#include <stdio.h>
#include <stdbool.h>

int add(int a, int b); // Function prototype = declaration
bool ageCheck(int age);

// Want to place the functions used in the main function after the main function
// Use function prototype to "Take a place holder" for the function definition
// so that the compiler knows about the function before it is used in main.
// Because the compiler reads the file from top to bottom

int main() {
    int result = add(5, 10);
    int age = 0;
    printf("The sum is: %d\n", result);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Is %d years old an adult? %s\n", age, ageCheck(age) ? "Yes" : "No");
    return 0;
}

int add(int a, int b) {
    return a + b;
} 

bool ageCheck(int age) {
    return age >= 18;
}