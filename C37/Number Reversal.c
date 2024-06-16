#include <stdio.h>

int main() {
   int n, q, result = 0, rem;
   printf("Enter a number to reverse: ");
   scanf("%d", &n);

   q = n;

   while(q != 0) {
       rem = q % 10;
       result = result * 10 + rem;
       q = q / 10;
   }
   printf("The Reversed Number: %d ", result);
   return 0;

}
