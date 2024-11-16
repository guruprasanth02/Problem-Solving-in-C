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
    for(int i = 0; i < size; i++) {
        c = 1;
        if(arr[i] != -1) {
            for(int j = i + 1; j < size; j++) {
                if(arr[i] == arr[j]) {
                    arr[j] = -1;
                    c++;
                }
            }
            printf("The Frequency of %d  is %d times\n", arr[i], c);
        }
    }
    return 0;
}
