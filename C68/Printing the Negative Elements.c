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
    printf("The negative elements are: ");
    for(int i = 0; i < size; i++) {
        if(arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
