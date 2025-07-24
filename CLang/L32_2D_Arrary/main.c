#include <stdio.h>

int main() {

    /*
    2D array = arrary inside each element of another array
    int 2Darrary[][] = {
                        {},
                        {},
                        }

    You can take it as a matrix: number in the first [] = row; number in the second [] = col
    */ 

    int matrix[][3] = // C Language requires you to define what is the number of sub-element within each pro-element / number of cols
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // Use nested for loop to print out every sub-element of the 2D arrary
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", matrix[i][j]);
        }
    }

    return 0;
}