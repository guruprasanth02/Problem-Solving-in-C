#include<stdio.h>

int main() {
    int size, odd = 0, even = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements: \n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            even = even + 1;
        }
        else {
            odd = odd + 1;
        }
    }
    printf("The Even elements are: %d\n", even);
    printf("The Odd elements are: %d", odd);
    return 0;
}
