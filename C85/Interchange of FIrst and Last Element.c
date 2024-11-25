#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    if (size > 1) {
        int temp = arr[0];
        arr[0] = arr[size - 1];
        arr[size - 1] = temp;
    }

    printf("Modified array: [");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        if (i < size - 1){
            printf(",");
        }
    }
    printf("]\n");

    return 0;
}
