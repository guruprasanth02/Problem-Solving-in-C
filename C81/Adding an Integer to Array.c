#include<stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements: \n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int number, n = 0, result;
    printf("Enter the number: ");
    scanf("%d", &number);
    for(int i = 0; i < size; i++) {
        n = n * 10 + arr[i];
    }
    result = n + number;
    int resultarr[10];
    int resultsize = 0;
    while(result > 0) {
        resultarr[resultsize++] = result % 10;
        result = result / 10;
    }
    if (resultsize > size) {
        resultsize = size;
    }
    printf("The updated array: [");
    for(int i = resultsize - 1; i >= 0; i--) {
        printf("%d", resultarr[i]);
        if (i > 0) {
            printf(",");
        }
    }
    printf("]\n");
    return 0;
}
