
#include <stdio.h>

char maxOccurringCharacter(char *str) {
    int frequency[256] = {0};
    char maxChar = '\0';
    int maxCount = 0;

    while (*str) {
        frequency[*str]++;
        if (frequency[*str] > maxCount) {
            maxCount = frequency[*str];
            maxChar = *str;
        }
        str++;
    }
    return maxChar;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    char maxChar = maxOccurringCharacter(str);
    printf("Maximum occurring character: %c\n", maxChar);
    return 0;
}
