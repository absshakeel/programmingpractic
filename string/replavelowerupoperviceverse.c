#include <stdio.h>
#include <ctype.h>

void swapCase(char *str) {
    while (*str) {
        if (islower(*str)) {
            *str = toupper(*str);
        } else if (isupper(*str)) {
            *str = tolower(*str);
        }
        str++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    swapCase(str);
    printf("String after case swap: %s\n", str);
    return 0;
}

