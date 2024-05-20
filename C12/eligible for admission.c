#include <stdio.h>

int main()
{
    int physics, chemistry, maths, total, mathphy;

    printf("Eligibility Criteria :\n");
    printf("Marks in Maths >=65\n");
    printf("and Marks in Physics >=55\n");
    printf("and Marks in Chem>=50\n");
    printf("and Total in all three subject >=190\n");
    printf("or Total in Maths and Physics >=140\n");
    printf("-------------------------------------\n");

    printf("Input the marks obtained in Physics :");
    scanf("%d", &physics);
    printf("Input the marks obtained in Chemistry :");
    scanf("%d", &chemistry);
    printf("Input the marks obtained in Mathematics :");
    scanf("%d", &maths);

    printf("Total marks of Maths, Physics and Chemistry : %d\n", maths + physics + chemistry);
    printf("Total marks of Maths and Physics : %d\n", maths + physics);

    if (maths >= 65)
        if (physics >= 55)
            if (chemistry >= 50)
                if ((maths + physics + chemistry) >= 190 || (maths + physics) >= 140)
                    printf("The candidate is eligible for admission.\n");
                else
                    printf("The candidate is not eligible.\n");
            else
                printf("The candidate is not eligible.\n");
        else
            printf("The candidate is not eligible.\n");
    else
        printf("The candidate is not eligible.\n");
}
