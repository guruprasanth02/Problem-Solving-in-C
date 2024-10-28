#include<stdio.h>
#include<math.h>

int main() {
    int num, last, power, l, sum = 0, temp, first, swap, middle;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    temp = num;
    l = (int) log10(num) + 1;
    power = pow(10, l - 1);
    last = temp % 10;
    first = temp / power;
    middle = temp % power;
    middle = middle / 10;
    middle = middle * 10;
    swap = (power * last) + (middle + first);
    printf("After Swapping the first ad last digits.\nThe number will be %d", swap);
    return 0;
}

