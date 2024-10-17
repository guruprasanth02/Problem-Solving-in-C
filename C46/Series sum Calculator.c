#include<stdio.h>

int main() {
    int term, numterm, nextterm, sum = 0;
    printf("Enter the nexterm of the series: ");
    scanf("%d", &nextterm);
    
     printf("Enter the number of terms of the series: ");
    scanf("%d", &numterm);
    
    for(int i = 1; i <= numterm; i++) {
        term = term * 10 + nextterm;
        printf("%d", term);
        
        sum = sum + term;
        if(i != numterm ) {
            printf(" + ");
        }
    }
    printf("\n%d\n", sum);
    return 0;
}
