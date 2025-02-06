#include <stdio.h>

int main() {
    int a=5;
    int b=10;
    int c=15;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("Average: %.2f", a+b+c/3);
    return 0;
}