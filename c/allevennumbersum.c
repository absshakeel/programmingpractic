#include <stdio.h>
int main() {
    int N, sum = 0;
    printf("Enter a positive  number: ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Please Enter a positive number.\n");
        return 1;
    }
    for (int i=2;i<=N;i+=2) {
        sum += i;
    }
    printf("Sum is: %d\n",sum);

    return 0;
}

