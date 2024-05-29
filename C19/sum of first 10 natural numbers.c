#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The first 10 natural numbers: \n");
    for(int i = 1; i <= num; i++) {
        sum = sum + i;
        printf("%d\n", i);
    }
    printf("The sum of first 10 natural numbers: %d\n", sum);

    return 0;
}
