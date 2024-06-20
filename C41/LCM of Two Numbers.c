#include <stdio.h>

int main()
{
    int a,b,low, lcm;
    printf("Enter the numbers: \n");
    scanf("%d %d", &a, &b);
    if(a < b) {
        low = a;
    }
    else {
        low = b;
    }
    while(1){
        if (low % a == 0 && low % b == 0) {
              lcm = low;
              break;
    }
    low++;
    }
    printf("%d\n", lcm);
    return 0;
}
