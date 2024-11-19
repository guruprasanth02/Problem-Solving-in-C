#include<stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements: \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int del = size;
    for(int i = 0; i < del; i++) {
        for(int j = i + 1; j < del; j++) {
            if(arr[i] == arr[j]) {
                for(int k = i; k < del - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                del--;
                j--;
            }
        }
    }
    printf("The Array elements after deleting an element: ");
    for(int i = 0; i < del; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
