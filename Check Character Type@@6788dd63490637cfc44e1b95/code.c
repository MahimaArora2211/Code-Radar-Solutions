#include <stdio.h>
#include <ctype.h>  // For isdigit() function

int main() {
    char ch;  // Declare a variable to store the input character

    // Prompt the user for input
    
    scanf("%c", &ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The character is a vowel.\n");
    }
    // Check if the character is a consonant
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("The character is a consonant.\n");
    }
    // Check if the character is a digit
    else if (isdigit(ch)) {
        printf("The character is a digit.\n");
    }
    // If none of the above, the character is a special character
    else {
        printf("The character is a special character.\n");
    }

    return 0;
}
