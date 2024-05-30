#include <stdio.h>

int main() {
    int num;

    printf("Enter the number of terms: ");
    scanf("%s", &num);

    for(int i = 1; i <= num; i++) {
        printf("Number is: %d and cube of the %d is: %d\n", i, i, (i * i * i));
    }
    return 0;
}
