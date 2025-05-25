#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int target){
  for(int i=0;i<n;++i){
  if(arr[i]==target){
    return i;
  }else{
    return -1;
  }
}
}
int main(){
  int data[]={1,2,3,3,4,5,5};
  int size=sizeof(data)/sizeof(data[0]);
  int searchelement=4;
  int result=linearSearch(data,size,searchelement);
  if(result!=-1){
    cout<<"element"<<searchelement<<"found at index"<<result<<endl;
  }else{
    cout<<"not found"<<endl;
  }
  return 0;
}