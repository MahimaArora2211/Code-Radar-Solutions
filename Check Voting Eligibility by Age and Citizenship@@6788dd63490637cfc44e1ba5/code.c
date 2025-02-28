#include <stdio.h>
int main(){
    int a,b;
    
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>=18 && b>=18){
         printf("'Eligible' or 'Eligible'");
    } else if (a<=18 && b<=18){
         printf("'Not Eligible' or 'Not Eligible'");
    } else if (a>=18 && b<=18){
         printf("'Eligible' or 'Not Eligible'");
    } else if (a<=18 && b>=18){
         printf("'Not Eligible' or 'Eligible'");
    }
    return 0;

}