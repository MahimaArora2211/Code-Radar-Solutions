#include <stdio.h>

int have_opposite_signs(int a, int b) {
    return (a > 0 && b < 0) || (a < 0 && b > 0);
}

int main() {
    int num1, num2;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Check if they have opposite signs
    if (have_opposite_signs(num1, num2)) {
        printf("True");
    } else {
        printf("False");
    }
    
    return 0;
}
