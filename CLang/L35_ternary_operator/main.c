#include <stdio.h>
#include <stdbool.h>

int main() {

    /*
    Ternary Operator = another form of if_else statement
    Such operator is NOT shown in Python

    How to use?
    (Condition) ? anything_if_condition_is_true : anything_if_condition_is_false
    ? = ternary operator

    Equal to:
    if(Condition){
        anything_if_condition_is_true    
    }
    else{
        anything_if_condition_is_false
    }
    */

    // Example 1: int comparison
    int x = 5;
    int y = 10;

    printf("%d\n", (x > y)? x : y); // Print x if x > y; else print y

    // Exmaple 2: bool online/offline
    bool isOnline = true;

    printf("%s\n", (isOnline)? "Online" : "Offline");

    // Example 3: even number / odd number
    int i = 20;
    printf("%d is %s\n", i, (i % 2 == 0)? "even" : "odd\n");

    // Example 4: military time display
    int hour = 16;
    int min = 31;

    printf("%d:%d %s\n", hour, min, (hour < 12)? "AM" : "PM\n");


    return 0;
}
