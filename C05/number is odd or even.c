#include <stdio.h>
//#include <limits.h>

int main() {
    int num;
    printf("Enter the number: );
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is an Even integer", num);
    }
    else{
        printf("%d is a Odd integer", num);
    }
    return 0;

}
