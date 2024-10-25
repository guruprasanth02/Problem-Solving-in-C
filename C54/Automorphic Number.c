#include<stdio.h>
#include<math.h>

int main() {
    int num, square, last, l;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    square = num * num;
    l = (int) log10(num) + 1;
    last = square % (int) pow(10,l);
    if(last == num) {
        printf("It is a Automorphic number");
    }
    else {
        printf("It is not an automorphic number");
    }
    return 0;
}
