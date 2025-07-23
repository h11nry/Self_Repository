#include <stdio.h>
#include <math.h>

int main() {

    int x = 9;
    int y = 2;
    int z = 3;
    float h = 3.14f;
    float j = 2.71828f;


    x = sqrt(x); // Calculate the square root of x
    printf("The square root of 9 is: %d\n", x);

    y = pow(y, z); // Calculate y raised to the power of z
    printf("2 raised to the power of 3 is: %d\n", y);

    h = ceil(h); // Round h up to the nearest integer
    printf("The ceiling of 3.14 is: %.0f\n", h);

    j = floor(j); // Round j down to the nearest integer
    printf("The floor of 3.14 is: %.0f\n", j);

    // Calculate the absolute value of -5
    int absoluteValue = abs(-5);

    // Calculate the logarithm of 10 with base 10
    double logValue = log10(10.0);

    // Calculate the sine of 30 degrees
    double sineValue = sin(30.0);


    return 0;
}