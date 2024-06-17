#include <stdio.h>

int main() {
    int l;
    char ch, name[50];

    printf("Enter the string: ");
    scanf("%s", &name);

    l = strlen(name);
    for(int i = 0; i <= l / 2; i++) {
        ch = name[i];
        name[i] = name[l - 1 - i];
        name[l - 1 - i] = ch;
    }
    printf("The reversed string: %s\n", name);

    return 0;
