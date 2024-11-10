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
    int max1 = arr[0];
    int max2 = arr[0];
    for(int i = 0; i < size; i++) {
        if(max1 < arr[i]) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (max1 > arr[i] && max2 < arr[i]) {
            max2 = arr[i];
        }
    }
    printf("The second maximum element is: %d", max2);
    return 0;
}

