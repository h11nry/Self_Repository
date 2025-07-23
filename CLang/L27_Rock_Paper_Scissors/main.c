#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Rock, Paper, Scissor Game
    // The computer will randomly select its choice from Rock, Paper, and Scissor
    // Then the user will be prompted to select her choice
    // Then the results will be compared and decide the winner of the game
    // Rock > Scissor, Scissor > Paper, Paper > Rock

    // The user can type 0 to quit the game when she is asked to enter a choice
    // 1 = Rock
    // 2 = Paper
    // 3 = Scissor
    // Anything else will be invalid and be asked to enter again

    srand(time(NULL));
    int min = 1;
    int max = 3;

    float user_input = 0.0f;

    do{
        int random_number = (rand() % 3) + 1;

        printf("PLEASE ENTER YOUR CHOICE BY 1, 2, OR 3\n");
        scanf("%f", &user_input);    

        if(user_input > random_number){
            if(user_input == 3){
                printf("YOU WIN!!! YOU HAVE BEATEN THE COMPUTER BY YOUR SCISSOR AND ITS PAPER\n");
                continue;
            }
            else if(user_input == 2){
                printf("YOU WIN!!! YOU HAVE BEATEN THE COMPUTER BY YOUR PAPER AND ITS ROCK\n");
                continue;
            }
        }
        else if(user_input == 1 && random_number == 3){
            printf("YOU WIN!!! YOU HAVE BEATEN THE COMPUTER BY YOUR ROCK AND ITS SCISSOR\n");
            continue;
        }
        else if(user_input == random_number){
            printf("IT IS A DRAW\n");
            continue;
        }
        else{
            printf("YOU LOSE!!!\n");
            continue;
        }

    }while(user_input != 0);

    return 0;
}