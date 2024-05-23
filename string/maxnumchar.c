#include <stdio.h>

int main() {
    char str[1000];
    int freq[256] = {0};
    int maxFreq = 0;
    char maxChar;
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {
            freq[(unsigned char)str[i]]++;
        }
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }
    printf("The highest frequency of character '%c'\n", maxChar);
    printf("appears number of times: %d\n", maxFreq);

    return 0;
}
