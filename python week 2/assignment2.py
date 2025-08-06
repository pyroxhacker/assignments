# Function to rotate the matrix by 90 degrees clockwise
def rotate90(mat):
    n = len(mat)

    # Initialize the result matrix with zeros
    res = [[0] * n for _ in range(n)]

    # Flip the matrix clockwise using nested loops
    for i in range(n):
        for j in range(n):
            res[j][n - i - 1] = mat[i][j]

    # Update the original matrix with the result
    for i in range(n):
        for j in range(n):
            mat[i][j] = res[i][j]


mat = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12],
    [13, 14, 15, 16]
]

rotate90(mat)

# Print the rotated matrix
for row in mat:
    print(" ".join(map(str, row)))