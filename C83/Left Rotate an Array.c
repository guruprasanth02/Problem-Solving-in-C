#include<stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int rot;
    printf("Enter the rotation size: ");
    scanf("%d", &rot);
    
    int arr[size];
    printf("Enter the elements in the array: \n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    rot = rot % size; 
    
    for(int i = 0; i < rot; i++) {
        int first = arr[0];
        for(int j = 0; j < size - 1; j++) { 
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = first;
    }

    printf("The left rotated array is: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
