#include <stdio.h>

int findMax(int arr[], int size, int i) {
  
    // Last index returns the element
    if (i == size - 1) {
        return arr[i];
    }

    // Find the maximum from the rest of the array
    int recMax = findMax(arr, size, i + 1);

    // Compare with i-th element and return
    return (recMax > arr[i]) ? recMax : arr[i];
}

int largest(int arr[], int size) {
    return findMax(arr, size, 0);
}

int main() {
    int arr[] = {10, 324, 45, 90, 9808};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d", largest(arr, size));
    return 0;
}