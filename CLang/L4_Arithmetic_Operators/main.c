#include <stdio.h>

int main() {
    // Arithmetic operators: +, -, *, /, %, ++, --

    int x = 10;
    int y = 3;
    int z = 0;

    // Addition
    // z = x + y;

    // Subtraction
    // z = x - y;

    // Multiplication
    // z = x * y;

    // Division
    // z = x / y;
    // Note: This will perform integer division since both x and y are integers.
    // If you want floating-point division, at least one of the operands should be a float or double.
    // In this case, y should be changed from a int to a float or double.

    // Modulus
    // z = x % y;
    // Note: Modulus operator (%) gives the remainder of the division of x by y.

    /*
    shortcuts:
    z += x; // Equivalent to z = z + x;
    z -= x; // Equivalent to z = z - x;
    z *= x; // Equivalent to z = z * x;
    z /= x; // Equivalent to z = z / x;
    z %= x; // Equivalent to z = z % x;
    Very helpful for updateing values
    */


    // Increment
    // z = ++x; // Pre-increment: x is incremented first, then z is assigned the new value of x.
    // z = x++; // Post-increment: z is assigned the current value of x

    // Decrement
    // z = --x; // Pre-decrement: x is decremented first, then z is assigned the new value of x.
    // z = x--; // Post-decrement: z is assigned the current value of x

    /*
    To be noticed that Pre/Post handles DOES give different values of z in some cases
    */

    return 0;
}