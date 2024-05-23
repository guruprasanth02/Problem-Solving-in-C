#include <stdio.h>

int main() {
     char word;
     printf("Enter the character: \n");
     scanf("%c", &word);
     if ((word >= 'a' && word <= 'z') || (word >= 'A' && word <= 'Z'))  {
        printf("This is a Alphabet.\n");
     }
     else if (word >= '0' && word <= '9' ) {
        printf("This is a digit.\n");
     }
     else {
        printf("This  is a special character.\n");
     }
     return 0;
     }
