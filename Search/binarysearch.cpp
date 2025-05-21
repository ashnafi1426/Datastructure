#include <iostream>
#include <algorithm> // For std::sort if needed
using namespace std;

// Iterative binary search function
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Prevents potential overflow

        if (arr[mid] == target) {
            return mid; // Target found
        }
        else if (arr[mid] < target) {
            left = mid + 1; // Search right half
        }
        else {
            right = mid - 1; // Search left half
        }
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter a number to search: ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result == -1) {
        cout << target << " not found in the array." << endl;
    }
    else {
        cout << target << " found at index " << result << endl;
    }

    return 0;
}
//recursively inserte binary s earch
/*// Recursive binary search function
int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid;
    }
    else if (arr[mid] < target) {
        return binarySearchRecursive(arr, mid + 1, right, target);
    }
    else {
        return binarySearchRecursive(arr, left, mid - 1, target);
    }
}

// To call it: binarySearchRecursive(arr, 0, size-1, target);*/
