#include<stdio.h>

int main() {

int num;

printf("Enter the number: ");

scanf("%d", &num);

if(num < 1 || num > 40) {

printf("Invalid Input");

return 0;

}

while(num >= 40) {

printf("XL");

num = num - 40;

}

while(num >= 10) {

printf("X");

num = num - 10;

}

while(num >= 9) {

printf("IX");

num = num - 9;

}

while(num >= 5) {

printf("V");

num = num - 5;

}

while(num >= 4) {

printf("IV");

num = num - 4;

}

while(num >= 1) {

printf("I");

num = num - 1;

}

return 0;
}
