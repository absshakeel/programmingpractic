#include <stdio.h>

int main() {
    int n;
    printf(" matrix size: ");
    scanf("%d", &n);
    int m[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    int diagonalSum = 0;
    for (int i = 0; i < n; i++) {
        diagonalSum += m[i][i];
    }
    printf("Sum of diagonal elements of the matrix: %d",diagonalSum);
    return 0;
}

