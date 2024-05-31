#include <stdio.h>
#define MAXIMUM_SIZE 10

float Determinant(float matrix[MAXIMUM_SIZE][MAXIMUM_SIZE], int size) {
    float determinant = 0;
    if (size == 1) {
        return matrix[0][0];
    } else if (size == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    } else {
        float submatrix[MAXIMUM_SIZE][MAXIMUM_SIZE];
        for (int k = 0; k < size; k++) {
            int subrow = 0;
            for (int i = 1; i < size; i++) {
                int subcol = 0;
                for (int j = 0; j < size; j++) {
                    if (j == k) {
                        continue;
                    }
                    submatrix[subrow][subcol] = matrix[i][j];
                    subcol++;
                }
                subrow++;
            }
            int sign = (k % 2 == 0) ? 1 : -1;
            determinant += sign * matrix[0][k] * Determinant(submatrix, size - 1);
        }
        return determinant;
    }
}

float Minor(float matrix[MAXIMUM_SIZE][MAXIMUM_SIZE], int row, int col, int size) {
    float submatrix[MAXIMUM_SIZE][MAXIMUM_SIZE];
    int subrow = 0;
    for (int i = 0; i < size; i++) {
        if (i == row) {
            continue;
        }
        int subcol = 0;
        for (int j = 0; j < size; j++) {
            if (j == col) {
                continue;
            }
            submatrix[subrow][subcol] = matrix[i][j];
            subcol++;
        }
        subrow++;
    }
    float determinant = Determinant(submatrix, size - 1);
    return determinant;
}

int main() {
    int size;
    printf("Enter the size of the square matrix  (MAX %d): ", MAXIMUM_SIZE);
    scanf("%d", &size);

    if (size < 2 || size > MAXIMUM_SIZE) {
        printf("Invalid matrix size.\n");
        return 1;
    }
    int matrix[MAXIMUM_SIZE][MAXIMUM_SIZE];
    printf("Enter the elements of the %dx%d matrix:\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }
    int row, col;
    printf("Enter the row index and column index for  calculate the minor & cofactor: ");
    scanf("%d %d", &row, &col);

    if (row < 1 || row > size || col < 1 || col > size) {
        printf("Invalid index.\n");
        return 1;
    }
    // Calculate  minor and cofactor
    float minor = Minor(matrix, row - 1, col - 1, size);
    float cofactor = minor * (((row + col) % 2 == 0) ? 1 : -1);
    printf("The minor of the element in position [%d, %d] is: %.2f \n", row, col,minor);
    printf("The cofactor of the element in position [%d, %d] is: %.2f \n", row, col,cofactor);

    return 0;
}
