#include <stdio.h>
#include <string.h>
#include <limits.h>
int main() {
    char str[1000], smallestWord[100];
    int minLen = INT_MAX, curLen = 0, start = 0, end = 0;
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
            if (curLen < minLen && curLen > 0) {
                minLen = curLen;
                start = i - curLen;
                end = i;
            }
            curLen = 0;
        }
    }
    if (curLen < minLen && curLen > 0) {
        minLen = curLen;
        start = len - curLen;
        end = len;
    }
    strncpy(smallestWord, &str[start], minLen);
    smallestWord[minLen] = '\0';
    printf("The smallest word is \"%s\"\n", smallestWord);
    return 0;
}
