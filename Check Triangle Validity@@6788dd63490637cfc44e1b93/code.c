#include <stdio.h>

int main() {
    double a, b, c;  
    
    scanf("%lf %lf %lf", &a, &b, &c);

    
    if (a + b > c && a + c > b && b + c > a) {
        printf("The sides form a valid triangle.\n");
    } else {
        printf("The sides do not form a valid triangle.\n");
    }

    return 0;
}
