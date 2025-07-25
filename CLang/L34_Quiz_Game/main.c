#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
This practice game will pop questions in certain order
For each question, user should choose an answer by selecting 1,2,3,4
The avilable choices for each question are the same

Q1. Which compount has Voltage/Current relationship of a linear curve?
Q2. Which compount cannot have sudden voltage rise/drop?
Q3. Which compount cannot have suddent current rise/drop?
Q4. Which compount can be used as the amplifier in the circuit?

Avilable Choices:
1. Capacitors
2. Operational Amplifier
3. Resistors
4. Inductors
*/

int main() {

    int correctNumber = 0;
    int allNumber = 0;
    int choiceList[4] = {0};
    int keyList[] = {3, 1, 4, 2};

    char Questions[][200] = 
    {
        "Q1. Which compount has Voltage/Current relationship of a linear curve?",
        "Q2. Which compount cannot have sudden voltage rise/drop?",
        "Q3. Which compount cannot have suddent current rise/drop?",
        "Q4. Which compount can be used as the amplifier in the circuit?"
    };

    char Answers[][200] =
    {
        "1. Capacitors",
        "2. Operational Amplifiers",
        "3. Resistors",
        "4. Inductors"
    };

    printf("**Welcome to the quiz game!**\n");
    printf("LETS PLAY!!!");
    printf("\n");

    for(int i=0; i<4; i++){
        printf("\n%s\n", Questions[i]);
        printf("\n");

        for(int j=0; j<4; j++){
            printf("%s\n", Answers[j]); 
        }

        printf("Please enter your choice for this question: ");
        scanf("%d", &choiceList[i]);
    }

    for(int h=0; h<4; h++){
        if(choiceList[h] == keyList[h]){
            correctNumber++;
            allNumber++;
        }
        else{
            allNumber++;
        }
    }

    printf("\nYou have got %d corrects out of %d questions!", correctNumber, allNumber);
    
    return 0;
}
