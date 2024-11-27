#include<stdio.h>

int main() {
    int arr[10];
    printf("Enter the elements in the array: \n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    int oddcount = 0, evencount = 0;
    for(int i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0) {
            evencount++;
        }
        else {
            oddcount++;
        }
    }
    
    int resultarr[10], evenindex = 0, oddindex = evencount;
    for(int i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0) {
            resultarr[evenindex++] = arr[i];
        }
    }
    
    for(int i = 0; i < 10; i++) {
        if(arr[i] % 2 != 0) {
            resultarr[oddindex++] = arr[i];
        }
    }
        
    printf("The seperated array elements: [");
    for(int i = 0; i < oddcount + evencount; i++) {
        printf("%d", resultarr[i]);
        if(i < oddcount + evencount - 1) {
               printf(",");
        }
    }
    printf("]\n");
    return 0;
}
