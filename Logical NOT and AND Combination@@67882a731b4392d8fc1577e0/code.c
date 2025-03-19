#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    // Check if neither of the numbers is greater than zero
    if ((a <= 0) && (b <= 0)) {
        printf("Neither of the two numbers is greater than zero.\n");
    } else {
        printf("At least one of the numbers is greater than zero.\n");
    }

    return 0;
}

