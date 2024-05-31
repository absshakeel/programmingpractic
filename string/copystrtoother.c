#include <stdio.h>

void copyString(char *destination, char *source) {
    while (*source) {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
}

int main() {
    char str1[100], str2[100];
    printf("Enter a string: ");
    gets(str1);
    copyString(str2, str1);
    printf("Copied string: %s\n", str2);
    return 0;
}

