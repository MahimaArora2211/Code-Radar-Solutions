#include <stdio.h>

int main() {
    int age;  // Declare variable to store age
    scanf("%d", &age);  // Input the age value from the user

    // Check if the person is eligible based on age
    if (age >= 18) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }

    return 0;
}
