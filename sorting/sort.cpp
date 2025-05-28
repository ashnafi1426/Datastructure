#include <iostream>
using namespace std;
/*
// Function to perform insertion sort on an array
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];  // Current element to be inserted
        int j = i - 1;     // Start comparing with previous element

        // Shift elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;  // Insert the key in its correct position
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    insertionSort(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
//recursively inserted sort
/*void recursiveInsertionSort(int arr[], int size) {
    if (size <= 1) return;
    
    recursiveInsertionSort(arr, size - 1);
    
    int key = arr[size - 1];
    int j = size - 2;
    
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
}*/
void insertsort(int arr[],int n){
    for(int i=1;i<0;i++){
        int key=arr[i];
       int j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[]={8,5,3,0,1,2,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result= insertsort(arr,size);
    int printarry(arr,size);
    return 0;
}