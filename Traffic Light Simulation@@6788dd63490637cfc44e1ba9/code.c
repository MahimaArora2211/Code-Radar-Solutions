#include <stdio.h>

int main() {
    char a;

    // Take input as a single character
    scanf("%c", &a);

    // Check the value of the input
    if (a == 'R') {
        printf("Stop");
    } else if (a == 'G') {
        printf("Go");
    } else if (a == 'Y') {
        printf("Slow Down");
    } else {
        printf("Invalid Input");
    }

    return 0;
}
