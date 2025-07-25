#include <stdio.h>

typedef int Number;
typedef char String[50]; // typedef can also be used to define the default size or style -> Every char created in this program will be 50 size

int main() {

    /*
    typedef = type define
    Use a new nickname to rename the existed type

    How to use?
    typedef existed_type nickname

    ** The typedef should be used globally to have the entire effect
    */

    Number x = 5;
    Number y = 10;
    Number z = x * y;
    printf("%d\n", z);

    char word1[] = "HelloWorld";
    char word2[] = "WorldHello";
    printf("%s\n%s", word1, word2);

    return 0;
}