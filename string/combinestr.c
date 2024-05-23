#include <stdio.h>

int main() {
    char str1[100], str2[100], combined[200];
    int i = 0, j = 0;
    printf("Input the first string: ");
    fgets(str1, sizeof(str1), stdin);
    if (str1[(i = strlen(str1) - 1)] == '\n') str1[i] = '\0';
    printf("Input the second string: ");

    fgets(str2, sizeof(str2), stdin);
    if (str2[(j = strlen(str2) - 1)] == '\n') str2[j] = '\0';

    for (i = 0; str1[i] != '\0'; i++) combined[i] = str1[i];
    combined[i++] = ' ';

    for (j = 0; str2[j] != '\0'; j++, i++) combined[i] = str2[j];
    combined[i] = '\0';

    printf("Combined string: %s\n", combined);

    return 0;
}
