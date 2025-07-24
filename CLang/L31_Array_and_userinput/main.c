#include <stdio.h>

int main() {

    // We can ask the user to input something to act as the elements inside the array

    int scores[5] = {0}; // 5 is the number of elements inside the empty array; use 0 to clear all previously used values because C does NOT clear them for you

    for(int i=0; i < 5; i++)
    {
        printf("Please enter a socre: ");
        scanf("%d", &scores[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        printf("%d ", scores[j]);
    }

    return 0;
}