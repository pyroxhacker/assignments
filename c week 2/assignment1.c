#include <stdio.h>

#define ROW 4
#define COL 4

void spirallyTraverse(int mat[ROW][COL], int m, int n) {
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; i++) {
            printf("%d ", mat[top][i]);
        }
        top++;

        // Print right column
        for (int i = top; i <= bottom; i++) {
            printf("%d ", mat[i][right]);
        }
        right--;

        // Print bottom row (if still within bounds)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", mat[bottom][i]);
            }
            bottom--;
        }

        // Print left column (if still within bounds)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", mat[i][left]);
            }
            left++;
        }
    }
}

int main() {
    int mat[ROW][COL] = {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}, 
        {13, 14, 15, 16}
    };

    spirallyTraverse(mat, ROW, COL);

    return 0;
}
