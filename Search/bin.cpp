#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1, mid;

    do {
        mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;

    } while (left <= right);

    return -1;
}

int main() {
    int size, target;

    cout << "Enter number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " sorted elements:\n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter number to search: ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}
