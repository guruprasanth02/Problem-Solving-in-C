#include<stdio.h>

int main() { 

    int num, product, rem;

    printf("Enter the number: ");

    scanf("%d", &num);

    if(num == 0) {

        printf("Invalid Input"); 

        return 0;

    }

    while(num != 0) {

        rem = num % 10;

        if(rem == 0) {

            printf("Invalid Input. ");

            return 0;

        }

        product = product * rem;

        num = num / 10;

    }

    printf("%d", product);

    return 0;

}
