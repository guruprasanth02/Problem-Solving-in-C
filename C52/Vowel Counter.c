#include<stdio.h>
#include<ctype.h>

int main() {
    char n[100], lower;
    int c = 0;
    printf("Enter the vowel: ");
    scanf("%s", &n);
    
    for(int i = 0; n[i] != '\0'; i++) {
        lower = tolower(n[i]);
        if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u' ) {
            c++;
        }
    }
    printf("The Vowels present in the string is %d", c);
    return 0;
}


