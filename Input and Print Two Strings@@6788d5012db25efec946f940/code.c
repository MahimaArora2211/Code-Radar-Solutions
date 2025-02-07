#include <stdio.h>
int main() {
    char str="Hello";
    char strn="World";
    scanf("%s",&str);
    scanf("%s",&strn);
    printf("You entered: %s", str ,"and %s",strn);
    return 0;
}