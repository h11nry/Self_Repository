#include <stdio.h>

/*
enum = connecting certain variable to int, which is a easy to use varaible
Very useful for condition checking

By default the first variable in enum will be assigned as '0', and the next is +1 and so on
But can also self-define the numbers used
*/

enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    TURESDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
}; // This is a kind of style to define enum (Still need to write enum in the main function -> make it clear what type it is)

typedef enum
{
    SUCCESSFUL,
    FAILURE,
    PENDING
}Status; // This is another way to define enum (Dont need to write enum in the main function)

void checkingStatus(Status status);

int main() {

    enum Day today = SUNDAY;
    printf("Today is %s\n", (today < 5)? "Weekday" : "Weekend");

    Status status = SUCCESSFUL;
    checkingStatus(status);
    return 0;
}

void checkingStatus(Status status) {
    switch (status)
    {
        case 0:
            printf("The connection is successful\n");
            break;
        case 1:
            printf("Cannot connect to the server\n");
            break;
        case 2:
            printf("Connecting...\n");
            break;
    }


}