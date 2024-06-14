#include <stdio.h>

int main() {
   int n, first = 0, second = 1, fib;
   printf("Enter the number: ");
   scanf("%d", &n);
   if(n < 0) {
    printf("Invalid Input");
   }
   for(int i = 0; i < n; i++) {
    if(i <= 1) {
        fib = i;
    }
    else {
        fib = first + second;
        first = second;
        second = fib;
    }
    printf("%d ", fib);
   }
   return 0;

}
