#include <stdio.h>

#define MAX 100

// Function to check if matrix is sparse
int isSparse(int array[MAX][MAX], int m, int n) {
    int counter = 0;

    // Count the number of zeros in the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (array[i][j] == 0) {
                counter++;
            }
        }
    }

    // If number of zeros > half of total elements
    return (counter > (m * n) / 2);
}

int main() {
    int array[MAX][MAX] = {
        {1, 0, 3},
        {0, 0, 4},
        {6, 0, 0}
    };

    int m = 3, n = 3;

    if (isSparse(array, m, n)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
