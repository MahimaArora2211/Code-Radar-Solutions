#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if (num%3==0 && num %5==0){
        printf("Divisble by both");
    } else if(num%3==0){
        printf("Divisble by 3");
    } else if (num % 5==0){
        printf("Divisble by 5");
    } else {
        printf("Not Divisble");
    }
    return 0;
}

