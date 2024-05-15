#include <stdio.h>
#include <limits.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age > 18) {
        printf("Congratulations! You are eligible for casting your vote");
    }
    else{
        printf("Oops! You are not eligible for casting your vote");
    }
    return 0;

}
