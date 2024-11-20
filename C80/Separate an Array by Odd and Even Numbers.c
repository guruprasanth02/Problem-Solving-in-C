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
    int ecount = 0, ocount = 0, odd[size], even[size]; 
    for(int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[ecount] = arr[i];
            ecount++;
        }
        else {
            odd[ocount] = arr[i];
            ocount++;
        }
    }
    printf("The Even Array elements : ");
    for(int i = 0; i < ecount; i++) {
        printf("%d ", even[i]);
    }
    printf("\nThe Odd Array elements : ");
    for(int i = 0; i < ocount; i++) {
        printf("%d ", odd[i]);
    }
    
    return 0;
}
