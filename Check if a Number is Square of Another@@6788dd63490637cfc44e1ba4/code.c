#include <stdio.h>

int main() {
    int a, b;

    // Take input for a and b
    scanf("%d", &a);
    scanf("%d", &b);

    // Check if a is equal to b squared
    if (a == b * b) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
