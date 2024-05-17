#include <stdio.h>


int main() {
    int height;
    printf("Enter your Height: ");
    scanf("%d", &height);
    if (height < 150) {
        printf("The person is Dwarf");
    }
    else if (height == 150) {
        printf("The person is in Average Height");
    }
    else {
        printf("The person is Tall");
    }
    return 0;

}
