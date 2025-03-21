#include <stdio.h>

int main() {
    int month, year;

    // Ask the user for the month
    
    scanf("%d", &month);

    // Check if the month is valid
    if (month < 1 || month > 12) {
        printf("Invalid month\n");
        return 1;
    }

    // Ask for the year if the month is February
    if (month == 2) {
      
        scanf("%d", &year);

        // Check for leap year: divisible by 4 but not 100, unless divisible by 400
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("28\n");
        } else {
            printf("29\n");
        }
    } else {
        // For other months, display the number of days based on the month
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            printf("30\n");
        } else {
            printf("31");
        }
    }

    return 0;
}
