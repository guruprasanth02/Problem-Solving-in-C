#include<stdio.h>

int main() {
    int num;
    float n = 1.0, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++) {
        float a = 1.0 / n;
        sum =sum + a;
        n = n * 2;
    }
    printf("%.2f", sum);
    return 0;
}

