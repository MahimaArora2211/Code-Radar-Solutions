#include <stdio.h>

int main() {
    double a, b, c;  // Declare variables for the three sides of the triangle

    // Prompt the user to enter the lengths of the three sides
    
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check if the sides are valid (i.e., the sum of any two sides should be greater than the third side)
    if (a + b > c && a + c > b && b + c > a) {
        // Check if all sides are equal (Equilateral)
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        }
        // Check if exactly two sides are equal (Isosceles)
        else if (a == b || a == c || b == c) {
            printf("Isosceles triangle\n");
        }
        // If no sides are equal (Scalene)
        else {
            printf("Scalene triangle\n");
        }
    }
    return 0;
}
