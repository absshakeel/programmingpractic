#include <stdio.h>

void concatenate(char *destination, char *source) {
    while (*destination) {
        destination++;
    }
    while (*source) {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
}

int main() {
    char str1[100], str2[50];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    concatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}

