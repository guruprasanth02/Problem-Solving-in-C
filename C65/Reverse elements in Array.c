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
    printf("\n");
    printf("The reverse order of elements: [");
    for(int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
        if (i > 0) {
            printf(",");
        }
    }
    printf("]\n");
    return 0;
}
