#include <stdio.h>

int main() {
    int num, factorial = 1, i;

    printf("Enter an odd number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid\n");
    } else if (num % 2 == 0) {
        printf("Please enter a valid odd number\n");
    } else {
        for (i = 1; i <= num; i += 2) {
            factorial *= i;
        }

        printf("The factorial of %d is: %d\n", num, factorial);
    }

    return 0;
}
