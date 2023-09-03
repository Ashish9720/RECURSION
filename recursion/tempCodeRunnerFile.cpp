#include <iostream>

// Function to find the index of the minimum element in an array
int findMinIndex(int arr[], int start, int end) {
    int minIndex = start;
    for (int i = start + 1; i <= end; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

// Function to perform selection sort recursively
void selectionSortRecursive(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }

    // Find the minimum element's index in the unsorted portion of the array
    int minIndex = findMinIndex(arr, start, end);

    // Swap the minimum element with the first element of the unsorted portion
    std::swap(arr[start], arr[minIndex]);

    // Recursively sort the remaining portion of the array
    selectionSortRecursive(arr, start + 1, end);
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    selectionSortRecursive(arr, 0, n - 1);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
