def findMax(arr, i):
  
    # Last index returns the element
    if i == len(arr) - 1:
        return arr[i]

    # Find the maximum from the rest of the list
    recMax = findMax(arr, i + 1)

    # Compare with i-th element and return
    return max(recMax, arr[i])


def largest(arr):
    return findMax(arr, 0)

if __name__ == '__main__':
  arr = [10, 324, 45, 90, 9808]
  print(largest(arr))