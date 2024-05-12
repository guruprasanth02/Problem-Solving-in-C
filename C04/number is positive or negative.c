#include <stdio.h>
//#include <limits.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num > 0)    {
        printf("%d is an Positive number", num);
    }
    else{
        printf("%d is a Negative number", num);
    }
    return 0;

}
