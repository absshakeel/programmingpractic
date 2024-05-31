
#include <stdio.h>

void frequencyOfCharacters(char *str, int *frequency) {
    while (*str) {
        frequency[*str]++;
        str++;
    }
}

int main() {
    char str[100];
    int frequency[256] = {0}; // ASCII characters

    printf("Enter a string: ");
    gets(str);
    frequencyOfCharacters(str, frequency);

    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] != 0) {
            printf("%c: %d\n", i, frequency[i]);
        }
    }
    return 0;
}
