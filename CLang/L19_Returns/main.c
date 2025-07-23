#include <stdio.h>
#include <stdbool.h>

int square(int num) {

    return num*num;
}

bool isEven(int num) {

    return num % 2 == 0;
}

float getMax(float a, float b) {

    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {

    // Returns = What does the function give back after execution?
    printf("%d\n", square(2));
    printf("%d\n", square(3));
    printf("%d\n", square(4));

    printf("%d\n", isEven(2));
    printf("%d\n", isEven(3));
    printf("%d\n", isEven(4));

    printf("%f\n", getMax(2.5, 3.5));
    printf("%f\n", getMax(3.5, 2.5));
    printf("%f\n", getMax(4, 2));

    return 0;
}