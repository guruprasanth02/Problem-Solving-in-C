#include <stdio.h>


int main() {
    int m,n;
    printf("Input the  value of m :");
    scanf("%d", &m);
    if (m !=0) {
            if (m > 0) {
                n = 1;
            }
            else {
                n = -1;
            }
    }
    else{
        n = 0;
    }
    printf("The value of n is : %d\n", n);
    return 0;

}
