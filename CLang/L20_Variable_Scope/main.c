#include <stdio.h>

int main() {

    // Variable Scope = the field of a variable where it can be accessed
    // Global variables can be accessed from anywhere in the program
    // Local variables can only be accessed within the function they are declared in

    // Global variables can be accessed from anywhere
    // Local variables can only be accessed within the function

    // Variables can share the same name as long as they are in different scopes
    // Functions cannot see variables from other functions

    // Need to notice the scope of variables when using them
    // Avoid using Global variables unless necessary (Unchanged consts, etc.)
    // Always prefer local variables for debugging
    return 0;
}