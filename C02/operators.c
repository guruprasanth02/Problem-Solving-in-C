#include <stdio.h>


int main() {
    int var = 75;
    int var2 = 56;
    int sum;
    sum = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0;
    printf("%d", sum);
    return 0;

}
