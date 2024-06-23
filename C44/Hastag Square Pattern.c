#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("%d is Invalid input.\n", n);
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("# ");
        }
        printf("\n");
    }

    return 0;
}
