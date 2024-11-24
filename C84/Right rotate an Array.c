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
        int last = arr[size - 1];
        for(int j = size - 1; j > 0; j--) {  
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }

    printf("The right rotated array is: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
