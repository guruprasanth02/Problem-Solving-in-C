#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements: \n");
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }

    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i = 0; i < size; i++){
        if(num == arr[0]){
            printf("There is no less than a neighboring element.\n");
            printf("%d",arr[1]);
            break;
        }
        else if(num == arr[size - 1]){
            printf("%d\n",arr[size - 2]);
            printf("There is no more than neighboring element.");
            break;
        }
        else if(num==arr[i]){
            printf("%d\n",arr[i-1]);
            printf("%d",arr[i+1]);
            break;
        }
    }
    return 0;
}
