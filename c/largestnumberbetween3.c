#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter 3 integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int max;
    if (num1 >= num2 && num1 >= num3) {
        max = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        max = num2;
    } else {
        max = num3;
    }
    printf("The maximum number is: %d\n",max);
    return 0;
}

