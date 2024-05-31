
#include <stdio.h>
#include <ctype.h>

void countCharacters(char *str, int *alphabets, int *digits, int *specialChars) {
    *alphabets = *digits = *specialChars = 0;
    while (*str) {
        if (isalpha(*str)) {
            (*alphabets)++;
        } else if (isdigit(*str)) {
            (*digits)++;
        } else {
            (*specialChars)++;
        }
        str++;
    }
}

int main() {
    char str[100];
    int alphabets, digits, specialChars;
    printf("Enter a string: ");
    gets(str);
    countCharacters(str, &alphabets, &digits, &specialChars);
    printf("Alphabets: %d\nDigits: %d\nSpecial Characters: %d\n", alphabets, digits, specialChars);
    return 0;
}
