#include<stdio.h>

int main() {
    int size, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements: \n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++) {
        if(arr[i] < 0) {
            count++;
        }
    }
    printf("The Negative elements are: %d\n", count);
    return 0;
}
