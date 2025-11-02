#include <stdio.h>

int findHCF(int *a, int *b){
    int x = *a, y = *b;
    while(x != y){
        if(x > y)
            x -= y;
        else
            y -= x;
    }
    return x;
}

int findLCM(int *a, int *b){
    int h = findHCF(a, b);
    return (*a * *b) / h;
}

int main(){
    int num1, num2, choice, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Press 1 for HCF\nPress 2 for LCM\nEnter your choice: ");
    scanf("%d", &choice);
    if(choice == 1){
        result = findHCF(&num1, &num2);
        printf("HCF = %d\n", result);
    } else if(choice == 2){
        result = findLCM(&num1, &num2);
        printf("LCM = %d\n", result);
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}

