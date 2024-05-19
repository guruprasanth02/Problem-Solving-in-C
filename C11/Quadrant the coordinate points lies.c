#include <stdio.h>


int main() {
    int num1,num2;
    printf("Enter your number1: ");
    scanf("%d", &num1);
    printf("Enter your number2: ");
    scanf("%d", &num2);
    if (num1 > 0 && num2 > 0) {
        printf("The coordinates (%d,%d) lies in the First quadrant\n", num1, num2);
    }
    else if (num1 > 0 && num2 < 0) {
        printf("The coordinates (%d,%d) lies in the Fourth quadrant\n", num1, num2);
    }
     else if (num1 < 0 && num2 > 0) {
        printf("The coordinates (%d,%d) lies in the Second quadrant\n", num1, num2);
    }
    else if (num1 < 0 && num2 < 0) {
        printf("The coordinates (%d,%d) lies in the Third quadrant\n", num1, num2);
    }
    else if (num1 == 0 && num2 == 0) {
        printf("The coordinates (%d,%d) lies at the Origin\n", num1, num2);
    }
    return 0;

}
