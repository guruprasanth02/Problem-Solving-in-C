#include <stdio.h>

int main() {
   int rows, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);

   for( i = 0; i < rows; i++) {
        for(int j = 1; j <= rows - i; j++)
            printf(" ");

        for(j = 1; j <= 2 * i - 1; j++)
            printf("* ");

        printf("\n");

   }
   return 0;
}
