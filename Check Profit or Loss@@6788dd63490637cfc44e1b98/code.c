#include <stdio.h>
int main(){
    int CP;
    scanf("%d",&CP);
    int SP;
    scanf("%d",&SP);
    if (SP > CP) {
        printf("Profit");
    } else if ( SP < CP) {
        printf("Loss");
    } else {
        printf("No Profit No loss");
    }
    return 0;
}