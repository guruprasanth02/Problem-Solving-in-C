#include<stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements in the array: \n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i < size - 1; i++) {
        if(arr[i] > arr[i + 1] && arr[i] > arr[i - 1]) {
            arr[i] = arr[i] + arr[i + 1] + arr[i - 1];
        }
    }
    
     printf("The Modified array is: [");
     for(int i = 0; i < size; i++) {
         printf("%d", arr[i]);
         if (i < size - 1) {
            printf(",");
         }
     }
     printf("]\n");
    return 0;
}    

