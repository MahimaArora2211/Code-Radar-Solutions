#include <stdio.h>
int main(){
    int CP;
    int SP;
    scanf("%d",&CP);
    scanf("%d",&SP);
    if (CP>SP) {
        printf("Loss");
    } else if (SP>CP) {
        printf("Profit");
    } else {
        printf("No Profit No loss");
    }
    return 0;
}