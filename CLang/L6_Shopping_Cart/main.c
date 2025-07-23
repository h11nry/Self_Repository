#include <stdio.h>
#include <string.h>

int main() {
    int itemCount = 0;
    float itemPrice = 0.0f;
    float totalPrice = 0.0f;
    char itemName[30] = "";

    printf("What item would you like to add to your shopping cart? ");
    fgets(itemName, sizeof(itemName), stdin);

    // Remove the newline character from fgets input
    itemName[strlen(itemName) - 1] = '\0';

    printf("How many of %s would you like to add? ", itemName);
    scanf("%d", &itemCount);

    if (strcmp(itemName, "pizza") == 0)
    {
        itemPrice = 9.99f; // Price for pizza
    }
    else if (strcmp(itemName, "burger") == 0)
    {
        itemPrice = 5.99f; // Price for burger
    }
    else if (strcmp(itemName, "soda") == 0)
    {
        itemPrice = 1.99f; // Price for soda
    }
    else
    {
        printf("Sorry, we don't have %s available.\n", itemName);
        return 1; // Exit the program if the item is not available
    }
    
    // Calculate total price
    totalPrice = itemCount * itemPrice;
    printf("The total price for your is %.2f\n", totalPrice);
    printf("Thank you for your shopping! Have a nice day!");

    return 0;
}