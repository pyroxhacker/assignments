def rotate(arr):
  
    # i and j pointing to first and last
    # element respectively
    i, j = 0, len(arr) - 1
    while i != j:
        arr[i], arr[j] = arr[j], arr[i]
        i += 1

if __name__ == "__main__":
  arr = [1, 2, 3, 4, 5]
  rotate(arr)
  for i in range(0, len(arr)):
    print(arr[i], end=' ')