//search elemnt
#include<iostream>
using namespace std;
int linearSearch(int arr[], int n,int target){
  for(int i=0; i<n;++i){
    if(arr[i]==target){
      return i;
    }
  }
  return -1;
}
int main(){
  int data[] = {1,2,3,4,5,8,33,22,44,33,4,4,5,5,666,66};
  int size= sizeof(data)/sizeof(data[0]);
  int searchElement=3;
  int result = linearSearch(data,size,searchElement);
  if(result!=-1){
    cout<<"Element"<<searchElement<<"found at index:"<<result<<endl;
  }else{
    cout<<"Element"<<searchElement<<" not found in the array"<<endl;
  }
}