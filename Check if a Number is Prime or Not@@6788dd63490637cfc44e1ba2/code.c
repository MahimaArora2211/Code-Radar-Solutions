#include <stdio.h>
#include <math.h>

int main() {
    int num, i;

    // Read the input number
   
    scanf("%d", &num);

    // Handle edge case: numbers less than 2 are not prime
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;  // Exit the program
    }

    // Check divisibility from 2 to sqrt(num
