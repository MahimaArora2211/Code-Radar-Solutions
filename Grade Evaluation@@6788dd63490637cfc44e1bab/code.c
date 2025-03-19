#include <stdio.h>

int main() {
    char num;

    // Take input as a character
    scanf("%c", &num);

    // Check the value of the input
    if (num == 'A') {
        printf("Excellent");
    } else if (num == 'B') {
        printf("Good");
    } else if (num == 'C') {
        printf("Average");
    } else if (num == 'D') {
        printf("Fail");
    } else if  (num == 'E') {
        printf("Fail");
    } else {
        printf("Invalid grade");
    }

    return 0;
}
