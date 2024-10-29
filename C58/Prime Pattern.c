#include<stdio.h>

int main() {
    int num, sum, add;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    for(int i = 2; i <= num; i++) {
        add = 0;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                add++;
                break;
            }
        }
        if(add == 0) {
            for(int k = 1; k <= i; k++) {
                printf(" * ");
            }
            printf("\n");
        }
    }
    return 0;
}
