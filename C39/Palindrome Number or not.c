#include <stdio.h>

int main() {
   int n, q, result = 0, rem;
   printf("Enter a number to reverse: ");
   scanf("%d", &n);

   q = n;

   while(n != 0) {
       rem = n % 10;
       result = result * 10 + rem;
       n = n / 10;
   }
   if(q == result) {
    printf("%d is a Palindrome Number", q);
   }
   else {
    printf("%d is not a Palindrome Number", q);
   }
   return 0;

}
