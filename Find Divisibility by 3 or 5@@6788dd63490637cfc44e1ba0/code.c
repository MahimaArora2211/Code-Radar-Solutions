#include <stdio.h>

int main() {
    int num;  // Declare variable to store the input number

    // Read the input number from the user
    scanf("%d", &num);

    // Check if the number is divisible by both 3 and 5
    if (num % 3 == 0 && num % 5 == 0) {
        printf("Divisible by both");
    }
    // Check if the number is divisible by 3
    else if (num % 3 == 0) {
        printf("Divisible by 3");
    }
    // Check if the number is divisible by 5
    else if (num % 5 == 0) {
        printf("Divisible by 5");
    }
    // If not divisible by 3 or 5
    else {
        printf("Not Divisible");
    }

    return 0;
}

