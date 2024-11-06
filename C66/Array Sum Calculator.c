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
    int first = arr[0] + arr[size - 1];
    int second = arr[1] + arr[size - 2];
    int sum = first + second;
    
    printf("The sum of first and last element: %d\n", first);
    printf("The sum of second and second last element: %d\n", second);
    printf("The total sum of two sums: %d\n", sum);
    return 0;
}
