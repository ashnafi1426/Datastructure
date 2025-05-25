#include<iostream>
using namespace std;
int Stack[10],bottom=-1,top=-1,n=4;
void push(){
 int  var[n];
  if(top=n-1){
    cout<<"stack is over fow"<<endl;
  }
  else{
    if(bottom=-1)
    bottom=0;
    for(int i=0;i<=n;i++){
      cout<<"enter the first item"<<endl;
      cin>>var[i]; 
      top++;
    }
  }
}
int main(){



  return 0;
}
