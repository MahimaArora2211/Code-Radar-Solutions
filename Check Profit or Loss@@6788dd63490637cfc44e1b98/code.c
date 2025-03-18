 #include <stdio.h>

int main() {
    int CP, SP;
    scanf("%d", &CP);
    scanf("%d", &SP);

    if (SP > CP) {
        printf("Profit\n");
    } else if (SP < CP) {
        printf("Loss\n");
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
