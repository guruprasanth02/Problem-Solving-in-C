#include<stdio.h>
#include<math.h>

int main() {
    int num, rem, power, l,sum = 0, temp, middle;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    temp = num;
    l = (int) log10(num) + 1;
    power = pow(10, l - 1);
    middle = num % power;
    middle = middle / 10;
    while(middle != 0) {
        rem = middle % 10;
        sum = sum + rem;
        middle = middle / 10;
    }
    printf("The sum of middle digits is %d", sum);
    return 0;
}
