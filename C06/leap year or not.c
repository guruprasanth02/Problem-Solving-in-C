#include <stdio.h>
#include <limits.h>

int main() {
    int num;
    printf("Enter the year: ");
    scanf("%d", &num);
    if (num % 400 == 0)    {
        printf("%d is Leap year", num);
    }
    else if (num % 100 ==0) {
        printf("%d is not a Leap year", num);
    }
     else if (num % 4 ==0) {
        printf("%d is Leap year", num);
    }
    else{
        printf("%d is not a Leap year", num);
    }
    return 0;

}
