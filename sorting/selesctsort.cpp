#include <iostream>
using namespace std;

// Function to find the index of the minimum element in the array
int findMinIndex(int arr[], int start, int end) {
    if (start == end) {
        return start;
    }
    
    int minIndex = findMinIndex(arr, start + 1, end);
    
    return (arr[start] < arr[minIndex]) ? start : minIndex;
}

// Recursive selection sort function
void recursiveSelectionSort(int arr[], int size, int start = 0) {
    if (start >= size - 1) {
        return; // Base case: array is sorted
    }
    
    // Find the index of minimum element in unsorted part
    int minIndex = findMinIndex(arr, start, size - 1);
    
    // Swap the found minimum element with the first element of unsorted part
    if (minIndex != start) {
        swap(arr[minIndex], arr[start]);
    }
    
    // Recursively sort the remaining unsorted part
    recursiveSelectionSort(arr, size, start + 1);
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    printArray(arr, size);
    
    recursiveSelectionSort(arr, size);
    
    cout << "Sorted array: ";
    printArray(arr, size);
    
    return 0;
}