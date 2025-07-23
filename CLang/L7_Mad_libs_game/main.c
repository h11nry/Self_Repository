#include <stdio.h>
#include <string.h>

int main() {

    // MAD LIBS GAME VARIABLES
    char noun[30] = "";
    char verb[30] = "";
    char adjective1[30] = "";
    char adjective2[30] = "";
    char adjective3[30] = "";

    printf("Welcome to the Mad Libs game!\n");
    printf("Please enter a noun: ");
    fgets(noun, sizeof(noun), stdin);

    printf("Please enter a verb: ");
    fgets(verb, sizeof(verb), stdin);

    printf("Please enter an adjective: ");
    fgets(adjective1, sizeof(adjective1), stdin);

    printf("Please enter another adjective: ");
    fgets(adjective2, sizeof(adjective2), stdin);

    printf("Please enter one more adjective: ");
    fgets(adjective3, sizeof(adjective3), stdin);

    // Remove the newline character from fgets input
    noun[strlen(noun) - 1] = '\0';

    printf("Your Mad Libs story:\n");
    printf("Once upon a time, there was a %s %s who loved to %s.\n", adjective1, noun, verb);
    printf("One day, it met a %s %s and they became best friends.\n", adjective2, noun);
    printf("They went on many adventures together, always having a %s time.\n", adjective3);
    printf("The end!\n");

    return 0;
}