#include <stdio.h>

void pushZerosToEnd(int* arr, int n) {
    
    // Count of non-zero elements
    int count = 0;  

    // If the element is non-zero, replace the element at
    // index 'count' with this element and increment count
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0)
            arr[count++] = arr[i];
    }

    // Now all non-zero elements have been shifted to
    // the front. Make all elements 0 from count to end.
    while (count < n)
        arr[count++] = 0;
}

int main() {
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    pushZerosToEnd(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}