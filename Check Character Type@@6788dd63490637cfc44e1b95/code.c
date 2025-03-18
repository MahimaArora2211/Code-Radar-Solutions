#include <stdio.h>
#include <ctype.h>  // For isdigit() function

int main() {
    char ch;  // Declare a variable to store the input character

    // Prompt the user for input
    
    scanf("%c", &ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    }
    // Check if the character is a consonant
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant\n");
    }
    // Check if the character is a digit
    else if (isdigit(ch)) {
        printf("Digit\n");
    }
    
    else {
        printf("Special Character\n");
    }

    return 0;
}
