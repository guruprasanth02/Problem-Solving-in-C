#include<stdio.h>
#include<math.h>

int main() {
    int num, last, power, l,sum = 0, temp, first;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    temp = num;
    l = (int) log10(num) + 1;
    power = pow(10, l - 1);
    last = temp % 10;
    first = temp/power;
    sum = first + last;
    printf("The Sum of first and last digits is %d", sum);
    return 0;
}
