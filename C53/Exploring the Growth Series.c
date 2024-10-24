#include<stdio.h>

int main() {
    int num, start, exp;
    printf("Enter the number of series: ");
    scanf("%d", &num);
    
    printf("Enter the starting value: ");
    scanf("%d", &start);
    
    for(int i = 1; i <= num; i++) {
       printf("%d ", start);
       start = start + start;
    }
    return 0;
}
