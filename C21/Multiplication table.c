#include <stdio.h>

int main() {
     int num;
     printf("Enter the number (Table to be calculated) : ");
     scanf("%d", &num);
     printf("\n----Multiplication Table----\n");
     for (int i = 1; i <= num; i++) {
        printf("%d x %d = %d\n", i , num, (i * num));
     }
     return 0;
}
