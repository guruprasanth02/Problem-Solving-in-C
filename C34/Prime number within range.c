#include <stdio.h>

int main() {
   int n, count, start, end;
   printf("Enter the  starting number: ");
   scanf("%d", &start);

   printf("Enter the ending number: ");
   scanf("%d", &end);

   for(n = start; n <= end; n++) {
      count = 0;
      for(int i = 2; i <= n / 2; i++) {
          if(n % i == 0) {
             count++;
             break;
          }
      }
      if(count == 0 && n != 1) {
          printf("%d ", n);
      }
   }
   return 0;
}
