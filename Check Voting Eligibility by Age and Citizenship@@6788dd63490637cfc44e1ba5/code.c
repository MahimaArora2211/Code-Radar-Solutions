#include <stdio.h>

int main() {
    int age;  // Declare variable to store age
    scanf("%d", &age);  // Input the age value from the user
    int citizenship;
    scanf("%d",&citizenship);

    // Check if the person is eligible based on age
    if (age >= 18) && (citizenship==1) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }

    return 0;
}
