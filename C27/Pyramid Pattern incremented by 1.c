#include <stdio.h>

int main() {
   int rows, tot, a = 1;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   tot = rows + 4 - 1;
   for(int i = 0; i <= rows; i++) {
    for(int j = tot; j >= 1; j--) {
        printf(" ");
    }
    for(int k = 1; k <= i; k++) {
        printf("%d ", a++);
    }
    printf("\n");
    tot--;
   }
   return 0;
}
