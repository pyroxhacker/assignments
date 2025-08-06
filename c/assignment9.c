#include <stdio.h>
#include <stdlib.h>

// Comparator for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find the first index of a given element
int bisect_left(int arr[], int n, int x) {
    int low = 0, high = n;
    while (low < high) {
        int mid = (low + high) / 2;
        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

// Function to find the last index + 1 (like bisect_right)
int bisect_right(int arr[], int n, int x) {
    int low = 0, high = n;
    while (low < high) {
        int mid = (low + high) / 2;
        if (arr[mid] <= x)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

// Function to count frequency of elements
void countFreq(int arr[], int n) {
    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    int i = 0;
    while (i < n) {
        int firstIndex = bisect_left(arr, n, arr[i]);
        int lastIndex = bisect_right(arr, n, arr[i]) - 1;

        int freq = lastIndex - firstIndex + 1;
        printf("%d %d\n", arr[i], freq);

        i = lastIndex + 1;
    }
}

int main() {
    int arr[] = {10, 20, 10, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    countFreq(arr, n);

    return 0;
}
