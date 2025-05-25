#include<iostream>
using namespace std;
int A[]={1,5,0,334,4,5,6};
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
    cout<<"before insertion sorting"<<endl;
    for(int k=0;k<n;k++){
        cout<<A[k]<<" ";
    }
    insertionSort(A);
  
        cout<<"after insertion sorting"<<endl;
        for(int k=0;k<n;k++){
            cout<<A[k]<<" ";
        }
    
    return 0;
}