#include <stdio.h>

int main()
{
    int angle1,angle2,angle3;
    printf("Enter the angles: \n");
    scanf("%d %d %d", &angle1,&angle2,&angle3);

    if (angle1 == angle2 && angle2 == angle3) {
        printf("This is an Equilateral Triangle\n");
    }
    else if (angle1 == angle2 || angle2 ==angle3 || angle3 == angle1) {
        printf("This is an Isosceles Traingle");
    }
    else {
      printf("This is a Scalene Traingle");
    }

    return 0;
}
