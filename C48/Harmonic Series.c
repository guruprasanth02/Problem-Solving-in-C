#include<stdio.h>

int main() {
    int num;
    float sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    if(num < 0) {
        printf("Invalid Input");
        return 0;
    }
    
    for(int i = 1; i <= num; i++) {
        float a = 1.0 / (float) i;
        sum = sum + a;
    }
    printf("%.2f", sum);
    return 0;
}

