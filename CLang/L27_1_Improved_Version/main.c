#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
int checkWin(int user_input, int random_number);

int main() {
    printf("**ROCK, PAPER, SCISSOR GAME BEGIN!!!**");

    printf("Choice Intro: \n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissor\n");
    printf("Please Enter Your Choice From Above: \n");

    int userChoice = getUserChoice();
    printf("You chose: %d\n", userChoice);
    int computerChoice = getComputerChoice();
    printf("Computer chose: %d\n", computerChoice);
    int result = checkWin(userChoice, computerChoice);

    switch (result)
    {
        case -1:
            printf("YOU LOSE");
            break;
        case 0:
            printf("YOU HAVE QUIT THE GAME");
            break;
        case 1:
            printf("YOU WIN THE GAME BY YOUR ROCK TO THE SCISSOR");
            break;
        case 2:
            printf("YOU WIN THE GAME BY YOUR PAPER TO THE ROCK");
            break;
        case 3:
            printf("YOU WIN THE GAME BY YOUR SCISSOR TO THE PAPER");
            break;
        case 4:
            printf("IT IS A DRAW");
            break;
    }

    return 0;
}

int getComputerChoice(){
    srand(time(NULL));
    int min = 1;
    int max = 3;

    int computerChoice = (rand() % 3) + 1;

    return computerChoice;
}

int getUserChoice() {
    int userChoice = 0;
    scanf("%d", &userChoice);
    return userChoice;
}

int checkWin(int user_input, int random_number){
    // 1: Rock, 2: Paper, 3: Scissor
    // Returns: 1 (Rock beats Scissor), 2 (Paper beats Rock), 3 (Scissor beats Paper), 0 (quit), -1 (lose or draw)
    if (user_input == 0) {
        return 0; // quit
    }
    if (user_input == random_number) {
        return 4; // draw
    }
    // Rock(1) beats Scissor(3)
    if (user_input == 1 && random_number == 3) {
        return 1;
    }
    // Paper(2) beats Rock(1)
    if (user_input == 2 && random_number == 1) {
        return 2;
    }
    // Scissor(3) beats Paper(2)
    if (user_input == 3 && random_number == 2) {
        return 3;
    }
    // Otherwise, user loses
    return -1;
}