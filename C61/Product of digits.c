#include<stdio.h>

int main() {
    int num, product = 1, rem;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    if (num == 0) {
        printf("Invalid Input.");
        return 0;
    }
    
    if (num < 0) {
        num = -num;
    }
    
    while(num != 0) {
        rem = num % 10;
        if (rem == 0) {
            printf("Invalid Input.");
            return 0;
        }
        product = product * rem;
        num = num / 10;
    }
    printf("%d", product);
    return 0;
}

