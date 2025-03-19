#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    
    scanf("%d", &a);

    
    scanf("%d", &b);

    // Check if neither of the numbers is greater than zero
    if ((a <= 0) && (b <= 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}

