#include <stdio.h>

int main()
{
    int rollno,phy,chem,ca,tot;
    float per;
    char name[20], div[10];
    printf("Enter the Roll number: \n");
    scanf("%d", &rollno);
    printf("Enter your Name: \n");
    scanf("%s", &name);
    printf("Enter the marks of physics,chemistry and computer application: \n");
    scanf("%d %d %d", &phy,&chem,&ca);

    tot = phy + chem + ca;
    per = tot/ 3.0;

    printf("Roll No: %d\n", rollno);
    printf("Name of the student: %s\n", name);
    printf("Marks in physics: %d\n", phy);
    printf("Marks in chemistry: %d\n", chem);
    printf("Marks in computer application: %d\n", ca);
    printf("Total Marks: %d\n", tot);
    printf("Percentage: %5.2f\n", per);
    if (per >= 60) {
        printf("Division: First", div);
    }
    else if (per < 60 && per >= 48) {
        printf("Division: Second", div);
    }
    else if (per < 48 && per >=36 ) {
        printf("Division: Pass", div);
    }
    else {
      printf("Division: Fail", div);
    }

    return 0;
}
