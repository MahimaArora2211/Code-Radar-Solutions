#include <stdio.h>

int main() {
    int num, i;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle edge case: numbers less than or equal to 1 are not prime
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;  // Exit the program
    }

    // Check if the number is divisible by any number between 2 and num-1
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            // If divisible, it is not prime
            printf("%d is not a prime number.\n", num);
            return 0;
        }
    }

    // If no divisors found, it is a prime number
    printf("%d is a prime number.\n", num);

    return 0;
}



