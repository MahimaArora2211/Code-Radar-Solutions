#include <stdio.h>

int main() {
    float a=5;
    float b=10;
    float c=15;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("Average: %.2f", a+b+c/3);
    return 0;
}