#include <stdio.h>


int main() {
    int num1,num2,num3;
    printf("Enter your number1: ");
    scanf("%d", &num1);
    printf("Enter your number2: ");
    scanf("%d", &num2);
    printf("Enter your number3: ");
    scanf("%d", &num3);
    printf("1st Number = %d,  2nd Number = %d,    3rd Number = %d\n", num1, num2, num3);
    if (num1 > num2 && num1 > num3) {
        printf("The 1st Number is the greatest among three ");
    }
    else if (num2 > num1 && num2 > num3) {
        printf("The 2nd Number is the greatest among three");
    }
    else {
        printf("The 3rd Number is the greatest among three");
    }
    return 0;

}
