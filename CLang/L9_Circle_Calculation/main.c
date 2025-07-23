#include <stdio.h>
#include <math.h>

int main() {

    // Calculate the values of a circle once the user inputs the radius
    // Also calculate the surface are and volume of a sphere with the same radius
    float radius = 0.0f;
    float circumference = 0.0f;
    float area = 0.0f;
    float pi = 3.14159f;
    float surfaceArea = 0.0f;
    float volume = 0.0f;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Your chosen radies is %.2f\n", radius);

    // Calculate the circumference of the circle
    circumference = 2 * pi * radius;
    printf("The circumference of the circle is: %.2f\n", circumference);

    // Calculate the area of the circle
    area = pi * radius * radius;
    printf("The area of the circle is: %.2f\n", area);

    // Calculate the surface area of the sphere
    surfaceArea = 4 * pi * radius * radius;
    printf("The surface area of the sphere is: %.2f\n", surfaceArea);

    // Calculate the volume of the sphere
    volume = (4.0f / 3.0f) * pi * radius * radius * radius;
    printf("The volume of the sphere is: %.2f\n", volume);

    printf("Thank you for using the Circle Calculation program!\n");


    return 0;
}