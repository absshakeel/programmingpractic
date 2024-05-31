#include <stdio.h>

void substring(char *source, char *dest, int start, int length) {
    while (length > 0 && source[start] != '\0') {
        *dest = source[start];
        dest++;
        start++;
        length--;
    }
    *dest = '\0';
}

int main() {
    char str[100], sub[100];
    int start, length;

    printf("Enter a string: ");
    gets(str);
    printf("Enter the starting position and length of the substring: ");
    scanf("%d %d", &start, &length);
    substring(str, sub, start, length);
    printf("Extracted substring: %s\n", sub);
    return 0;
}

