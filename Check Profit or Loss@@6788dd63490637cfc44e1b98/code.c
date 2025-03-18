 #include <stdio.h>

int main() {
    int CP, SP;

    // Ask user to input cost price and selling price
    printf("Enter the cost price: ");
    scanf("%d", &CP);

    printf("Enter the selling price: ");
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
