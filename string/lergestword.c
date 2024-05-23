#include <stdio.h>
#include <string.h>
int main() {
    char str[1000], largestWord[100];
    int maxLen = 0, curLen = 0, start = 0, end = 0;
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            curLen++;
        } else {
            if (curLen > maxLen) {
                maxLen = curLen;
                start = i - curLen;
                end = i;
            }
            curLen = 0;
        }
    }
    if (curLen > maxLen) {
        maxLen = curLen;
        start = len - curLen;
        end = len;
    }
    strncpy(largestWord, &str[start], maxLen);
    largestWord[maxLen] = '\0';
    printf("The largest word is \"%s\"\n", largestWord);
    return 0;
}
