#include <stdio.h>

int main() {
    int a, shift;

    
    scanf("%d", &a);
    
    scanf("%d", &shift);

    
    int result = a << shift;

    // Output the result of the left shift
    printf("%d\n", result);

    return 0;
}
