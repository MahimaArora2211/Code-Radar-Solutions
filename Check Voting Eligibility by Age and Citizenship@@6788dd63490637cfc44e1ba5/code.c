#include <stdio.h>

int main() {
    int age;  // Declare variable to store age
    scanf("%d", &age);  // Input the age value from the user
    int c;
    scanf("%d",&c);

    // Check if the person is eligible based on age
    if ((age >= 18) && (c==1))  {
        printf("Eligible");
    } else if ((age >= 18) && (c==0)){
        printf("Not Eligible");
    } else if ((age<=18) && c==1) {
        printf("Not Eligible");
    } else {
        printf("Not Eligible");
    }

    return 0;
}
