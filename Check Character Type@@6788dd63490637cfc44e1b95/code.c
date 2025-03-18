#include <stdio.h>
#include <ctype.h>  // For isdigit() function

int main() {
    char ch;

    // Prompt the user to enter a character
    
    scanf("%c", &ch);

    // Check if the character is an alphabet
    if (isalpha(ch)) {
        // Convert to lowercase to handle both uppercase and lowercase vowels
        ch = tolower(ch);

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
         
