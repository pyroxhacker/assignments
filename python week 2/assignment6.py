# Simple Python 3 program to add two
# polynomials

# A utility function to return maximum 
# of two integers

# A[] represents coefficients of first polynomial
# B[] represents coefficients of second polynomial
# m and n are sizes of A[] and B[] respectively
def add(A, B, m, n):

    size = max(m, n);
    sum = [0 for i in range(size)]

    # Initialize the product polynomial
    
    for i in range(0, m, 1):
        sum[i] = A[i]

    # Take ever term of first polynomial
    for i in range(n):
        sum[i] += B[i]

    return sum

# A utility function to print a polynomial
def printPoly(poly, n):
    for i in range(n):
        print(poly[i], end = "")
        if (i != 0):
            print("x^", i, end = "")
        if (i != n - 1):
            print(" + ", end = "")

# Driver Code
if __name__ == '__main__':
    
    # The following array represents
    # polynomial 5 + 10x^2 + 6x^3
    A = [5, 0, 10, 6]

    # The following array represents
    # polynomial 1 + 2x + 4x^2
    B = [1, 2, 4]
    m = len(A)
    n = len(B)

    print("First polynomial is")
    printPoly(A, m)
    print("\n", end = "")
    print("Second polynomial is")
    printPoly(B, n)
    print("\n", end = "")
    sum = add(A, B, m, n)
    size = max(m, n)

    print("sum polynomial is")
    printPoly(sum, size)
    
# This code is contributed by
# Sahil_Shelangia