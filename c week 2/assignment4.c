#include <stdio.h>

#define N 4  // Size of the square matrix

void transpose(int mat[N][N]) {
    // Traverse the upper triangle and swap with corresponding lower triangle elements
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            // Swap mat[i][j] and mat[j][i]
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
}

void printMatrix(int mat[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[N][N] = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4}
    };

    transpose(mat);
    printMatrix(mat);

    return 0;
}
