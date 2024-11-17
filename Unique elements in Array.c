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
    int c;
    printf("The unique elements are: ");
    for(int i = 0; i < size; i++) {
        c = 1;
        for(int j = 0; j < size; j++) {
            if(i != j && arr[i] == arr[j]) {
                c = 0;
                break;
            }
        }
        if(c) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
