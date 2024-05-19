#include <stdio.h>

#define MAX_SIZE 10

// Function to calculate the determinant of a square matrix
int determinant(int mat[MAX_SIZE][MAX_SIZE], int size) {
    int det = 0;
    if (size == 1) {
        return mat[0][0];
    } else if (size == 2) {
        return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
    } else {
        int submat[MAX_SIZE][MAX_SIZE];
        for (int k = 0; k < size; k++) {
            int subi = 0;
            for (int i = 1; i < size; i++) {
                int subj = 0;
                for (int j = 0; j < size; j++) {
                    if (j == k) {
                        continue;
                    }
                    submat[subi][subj] = mat[i][j];
                    subj++;
                }
                subi++;
            }
            int sign = (k % 2 == 0) ? 1 : -1;
            det += sign * mat[0][k] * determinant(submat, size - 1);
        }
        return det;
    }
}

// Function to calculate the minor of a matrix element
int minor(int mat[MAX_SIZE][MAX_SIZE], int row, int col, int size) {
    int submat[MAX_SIZE][MAX_SIZE];
    int subi = 0;
    for (int i = 0; i < size; i++) {
        if (i == row) {
            continue;
        }
        int subj = 0;
        for (int j = 0; j < size; j++) {
            if (j == col) {
                continue;
            }
            submat[subi][subj] = mat[i][j];
            subj++;
        }
        subi++;
    }
    // Calculate determinant of the submatrix
    int det = determinant(submat, size - 1);
    return det;
}

int main() {
    int size = 4;
    int mat[MAX_SIZE][MAX_SIZE] = {
        {1,2,3,40},
        {5,6,70,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    // Calculate and display the minor and cofactor
    printf("Minor and cofactor of the matrix elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int m = minor(mat, i, j, size);
            int cof = m * (((i + j) % 2 == 0) ? 1 : -1);
            printf("Element at (%d, %d):\n", i+1, j+1);
            printf("Minor: %d\n", m);
            printf("Cofactor: %d\n", cof);
        }
    }

    return 0;
}
