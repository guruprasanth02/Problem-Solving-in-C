#include<stdio.h>

int main() {
    int year, count = 0, leap;
    printf("Enter the year: ");
    scanf("%d", &year);
    
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a Leap year", year);
    }
    else {
        printf("%d is not a Leap year", year);
    }
    for(int i = year + 1; i <= year + 10; i++) {
        if((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)) {
            count++;
        }
    }
    printf("\nLeap years: %d", count);
    leap = 10 - count;
    printf("\nNon-leap years: %d", leap);
    return 0;
}
