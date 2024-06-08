#include <stdio.h>

int main() {
   int n, even, sum = 0;
   printf("Enter the number of terms: ");
   scanf("%d", &n);

   if(n <= 0) {
    printf("Invalid Input");
    return 1;
   }

   printf("The even numbers are: ");
   for(int i = 1; i <= n; i++) {
        even = 2* i;
        printf("%d ", even);
        sum = sum + even;
   }
   printf("\nThe sum of even natural numbers upto %d is: %d",n, sum);
   return 0;
}
