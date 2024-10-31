#include <stdio.h>

int main() {
    int num;
    printf("Enter the number of rows: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid number of rows\n");
        return 0; 
    }
    int current = 1; 

    for (int i = 1; i <= num; i++) {
        int n = current;
        for (int j = 1; j <= i; j++) {
            printf("%d ", n++);
        }
        n = n - 2;

        for (int j = 1; j < i; j++) {
            printf("%d ", n--);
        }
        printf("\n");
        current += i;
    }
    return 0;
}
