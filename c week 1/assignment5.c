#include <stdio.h>
#include <stdlib.h>

void rotate(int *arr, int n) {
  
    // i and j pointing to first and last
    // element respectively
    int i = 0, j = n - 1;
    while (i != j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    rotate(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}