#include<stdio.h>

int main() {
    int num, cube;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    if(num <= 0) {
        printf("Invalid Input");
        return 0;
    }
    printf("The cubes of three consecutive numbers are: \n");
    for(int i = num; i <= num + 2; i++) {
        cube = i * i * i;
        printf("%d\n", cube);
    }
    return 0;
}
