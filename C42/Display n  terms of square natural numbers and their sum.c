#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("\nThe square natural numbers up to %d terms are :", n);
    for (int i = 1; i <= n; i++) {
            printf("%d ", i * i);
            sum = sum + i;
    }
    printf("\nThe Sum of Square Natural Numbers up to %d terms = %d \n", n, sum);
    return 0;
}
