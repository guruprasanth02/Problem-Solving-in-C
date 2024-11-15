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
    int position;
    printf("Enter the position: ");
    scanf("%d", &position);
    
    for(int i = position - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("The array after deleting an element: [");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        if (i < size - 1) {
            printf(",");
        }
    }
    printf("]\n");
    return 0;
}
