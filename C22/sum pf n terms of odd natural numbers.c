#include <stdio.h>

int main() {
     int num, sum = 0;
     printf("Enter the number of terms : ");
     scanf("%d", &num);
     printf("\nThe odd numbers are: ");
     for (int i = 1; i <= num; i++) {
        printf("%d ", 2 * i - 1);
        sum = sum + (2 * i - 1);
     }
     printf("\nThe sum of odd Natural Number upto %d terms: %d\n", num, sum);
     return 0;
}
