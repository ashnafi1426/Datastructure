/*#include<iostream>
using namespace std;
int A[]={1,5,0,3,4,5,6};
int n=7;
int insertionSort(int A[]){
    int temp;
    for(int i=1;i<n;i++){
        temp = A[i];
        for(int j=i;j>0&&temp<A[j-1];j--){
            A[j]=A[j-1];
            A[j-1]=temp;
        }
    }
}int main(){
    cout<<"before selection sorting"<<endl;
    for(int k=0;k<n;k++){
        cout<<A[k]<<" ";
    }
    insertionSort(A);
  
        cout<<"after selection sorting"<<endl;
        for(int k=0;k<n;k++){
            cout<<A[k]<<" ";
        }
    
    return 0;
}*/
#include <iostream>
using namespace std;

// Function to perform selection sort on an array
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        // Find the minimum element in unsorted array
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        
        // Swap the found minimum element with the first element
        if (min_idx != i) {
            swap(arr[min_idx], arr[i]);
        }
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
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Original array: ";
    printArray(arr, n);
    
    selectionSort(arr, n);
    
    cout << "Sorted array: ";
    printArray(arr, n);
    
    return 0;
}
