#include <stdio.h>
#include <ctype.h>

int countWords(char *str) {
    int count = 0, inWord = 0;
    while (*str) {
        if (isspace(*str)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Total number of words in the string: %d\n", countWords(str));
    return 0;
}
