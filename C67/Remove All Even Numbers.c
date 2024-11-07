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
    printf("The elements after removing the even numbers: \n");
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}
