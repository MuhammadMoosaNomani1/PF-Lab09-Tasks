#include <stdio.h>

float calculateItemTotal(int *quantity, float *price){
    return (*quantity) * (*price);
}

int main(){
    char name[50], item[50];
    int n;
    float total = 0;

    printf("Enter customer name: ");
    scanf("%s", name);
    printf("Enter number of items: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        int quantity;
        float price;
        printf("Enter item name: ");
        scanf("%s", item);
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        printf("Enter price per unit: ");
        scanf("%f", &price);
        total += calculateItemTotal(&quantity, &price);
    }

    printf("\nCustomer Name: %s\nTotal Bill: %.2f\n", name, total);
    return 0;
}

