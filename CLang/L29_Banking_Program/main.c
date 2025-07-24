#include <stdio.h>

// Banking Program
// Allowing user to input the choice of operation first
// Then input the number of money to operate
// Operations available for user
// 1. Deposite
// 2. Withdrawl
// 3. Quit

// This program will run in a looping style until the user choose to quit
// Every round of update, the bandking program will update the current money deposited in the bank
// No matter the previous operation is deposite or withdrawl

// In the beginning, the deposited amount is $100
// User can deposite any amount including 0 or float
// User can withdrawl any amount below the current deposite in the bank
// If user wants to withdrawl more than that, the system will give a warning and start another round without changing the amount

float save(float balance);
float withdrawl(float balance);

int main(){
    float balance = 100;
    int userChoice = 0;

    do{
        printf("\nHere is your current bank account situation: \n");
        printf("You have a deposit of $%.2f\n", balance);

        printf("What would you like to do?\n");
        printf("1. Save\n");
        printf("2. Withdraw\n");
        printf("3. Quit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &userChoice);

        if(userChoice == 1){
            balance = save(balance);
        }
        else if(userChoice == 2){
            balance = withdrawl(balance);
        }
        else if(userChoice == 3){
            break;
        }
        else {
            printf("Invalid choice. Please try again.\n");
        }

    }while(userChoice != 3);

    printf("You have exited your bank account. Thank you for using our service.\n");

    return 0;
}

float save(float balance) {
    float userSave = 0.0f;

    printf("Please enter the amount you want to save: ");
    scanf("%f", &userSave);

    if(userSave >= 0){
        balance = balance + userSave;
    }
    else{
        printf("Please enter a valid amount.\n");
    }

    return balance;
}

float withdrawl(float balance){
    float userWithdrawl = 0.0f;

    printf("Please enter the amount you want to withdraw: ");
    scanf("%f", &userWithdrawl);

    if(userWithdrawl >= 0 && userWithdrawl <= balance){
        balance = balance - userWithdrawl;
        printf("$%.2f has been withdrawn from your account.\n", userWithdrawl);
    }
    else if(userWithdrawl > balance) {
        printf("Insufficient funds. You cannot withdraw more than your current balance.\n");
    }
    else{
        printf("Please enter a valid amount.\n");
    }

    return balance;
}
