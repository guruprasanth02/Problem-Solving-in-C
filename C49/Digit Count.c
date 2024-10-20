#include<stdio.h>

int main() {
    long long int num, n, a = 1,count = 0;
    printf("Enter the number: ");
    scanf("%lld", &num);
    n= num;
    
    if(n == 0) {
        printf("%lld", a);
        return 0;
    }
    
    while(num != 0) {
        num = num / 10;
        count++;
    }
    printf("The number of digits in the given integer is %lld", count);
    return 0;
}


