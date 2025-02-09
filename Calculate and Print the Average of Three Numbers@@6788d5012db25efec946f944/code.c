#include <stdio.h>

int main() {
    int a=5;
    int b=10;
    int c=15;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    float average=(a+b+c)/3.0;
    scanf("%e",average);
    printf("Average: %.2f", average);
    return 0;
}