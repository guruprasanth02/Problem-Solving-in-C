#include <stdio.h>


int main() {
    int idno, unit;
    float charge, surcharge = 0,net,gram;
    char name[20];
    printf("Enter the customer IDNO: \n");
    scanf("%d", &idno);
    printf("Enter your name: \n");
    scanf("%s", &name);
    printf("Enter the unit consumed: \n");
    scanf("%d", &unit);
    if (unit < 200) {
            charge = 1.20;
    }
    else if (unit >= 200 && unit < 400) {
        charge = 1.50;
    }
    else if (unit >= 400 && unit < 600) {
        charge = 1.80;
    }
    else {
        charge = 2.00;
    }

    gram = unit * charge;

    if (gram > 300) {
        surcharge = gram * 15 / 100.0;
    }

    net = gram + surcharge;

    if (net < 100) {
        net = 100;
    }

    printf("\nElectricity Bill\n");
    printf("Customer IDNO                       :%d\n", idno);
    printf("Customer Name                       :%s\n", name);
    printf("unit Consumed                       :%d\n", unit);
    printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n", charge, gram);
    printf("Surchage Amount                     :%8.2f\n", surcharge);
    printf("Net Amount Paid By the Customer     :%8.2f\n", net);
    return 0;

}
