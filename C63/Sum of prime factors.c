#include <stdio.h>

int main() {
    int num, sum = 0, org;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("The number should be a positive integer.\n");
        return 1;
    }

    org = num;

    if (num % 2 == 0) {
        sum = sum + 2;
        while (num % 2 == 0) {
            num = num / 2;
        }
    }
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            sum = sum + i;
            while (num % i == 0) {
                num = num / i;
            }
        }
    }
    if (num > 2) {
        sum =  sum + num;
    }
    printf("The sum of prime factors: %d", sum);
    return 0;
}
