#include <stdio.h>

#define MAX 100  // Maximum degree + 1

// Function to add two polynomials
void addPolynomials(int A[], int B[], int m, int n, int sum[]) {
    int size = (m > n) ? m : n;

    // Initialize the result with 0s
    for (int i = 0; i < size; i++) {
        sum[i] = 0;
    }

    // Copy A[] to sum[]
    for (int i = 0; i < m; i++) {
        sum[i] = A[i];
    }

    // Add B[] to sum[]
    for (int i = 0; i < n; i++) {
        sum[i] += B[i];
    }
}

// Function to print a polynomial
void printPolynomial(int poly[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", poly[i]);
        if (i != 0) {
            printf("x^%d", i);
        }
        if (i != n - 1) {
            printf(" + ");
        }
    }
    printf("\n");
}

int main() {
    // Polynomial A: 5 + 0x + 10x^2 + 6x^3
    int A[] = {5, 0, 10, 6};
    // Polynomial B: 1 + 2x + 4x^2
    int B[] = {1, 2, 4};

    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);

    int size = (m > n) ? m : n;
    int sum[MAX];

    printf("First polynomial is:\n");
    printPolynomial(A, m);

    printf("Second polynomial is:\n");
    printPolynomial(B, n);

    addPolynomials(A, B, m, n, sum);

    printf("Sum polynomial is:\n");
    printPolynomial(sum, size);

    return 0;
}
