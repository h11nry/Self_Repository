#include <stdio.h>
#include <string.h>

int main() {

    /*
    String itself is a type of arrary. For example: "Apple" contains 5 elements inside a arrary
    It may seems like the 2D string array contains only pro-elements, but actually not
    */

    char words[][10] = {"Apple", "Banana", "Coconut"};
    int size = sizeof(words) / sizeof(words[0]); // Also use the trick to calculate the pro-element inside the 2D string array

    for(int i=0; i<size; i++){
        printf("%s\n", words[i]);
    }

    // Practice: Combine 2D string array with user input to record names
    char names[3][20] = {0};

    for(int j=0; j<3; j++){
        printf("Please enter a name: ");
        fgets(names[j], sizeof(names[j]), stdin);
        names[j][strlen(names[j]) - 1] = '\0';
    }

    for(int h=0; h<3; h++){
        printf("%s\n", names[h]);
    }

    return 0;
}