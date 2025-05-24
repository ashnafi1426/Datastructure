#include<iostream>
using namespace std;
int linearSearch(int arr[], int n,int target){
  for (int i = 0; i < n; i++)
  {
    if(arr[i]== target){
      return i;
    }
  }
  return -1;
}
int main(){
  int data[] = {2,3,4,6,7,7,6};
  int size= sizeof(data)/sizeof(data[0]);
  int searchElement= 6;
  int result = linearSearch(data, size,searchElement);
  if(result!=-1){
    cout<<"element"<<searchElement<<"  "<<"found at index"<<result<<endl;
  }else{
    cout<<"element"<<searchElement<<"not found elemtnt in the array"<<endl;
  }
  return 0;
}