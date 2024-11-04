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
    printf("The elements are: [");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        if (i < size - 1) {
            printf(",");
        }
    }
    printf("]\n");
    return 0;
}
