#include <iostream>
using namespace std;

// Recursive bubble sort function
void recursiveBubbleSort(int arr[], int size) {
    // Base case: array with 1 or 0 elements is already sorted
    if (size <= 1) {
        return;
    }
    
    // One pass of bubble sort (moves largest element to end)
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    
    // Recursively sort the remaining array (last element is already in place)
    recursiveBubbleSort(arr, size - 1);
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    printArray(arr, size);
    
    recursiveBubbleSort(arr, size);
    
    cout << "Sorted array: ";
    printArray(arr, size);
    
    return 0;
}