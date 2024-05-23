
#include <stdio.h>
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}
int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int numDigits = countDigits(num);
    while (originalNum != 0) {
        int digit = originalNum % 10;
        int power = 1;
        for (int i = 0; i < numDigits; i++) {
            power *= digit;
        }
        sum += power;
        originalNum /= 10;
    }
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    printf("Input any number: ");
    scanf("%d", &num);
    if (isArmstrong(num)) {
        printf("The %d is an Armstrong number.\n", num);
    } else {
        printf("The %d is not an Armstrong number.\n", num);
    }
    return 0;
}
