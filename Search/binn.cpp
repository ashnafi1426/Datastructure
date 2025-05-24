#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    int mid;

    if (size == 0) return -1;

    do {
        mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    } while (left <= right);

    return -1;  // Not found
}

int main() {
    int arr[] = {3, 8, 15, 23, 42, 56, 78};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}
