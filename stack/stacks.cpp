#include<iostream>
using namespace std;
#define MAX 100;
int top=-1;
void push(int value){
  if(top==MAX-1){
    cout<<"stack overflow"<<endl;
  }
  else{
   cout<< stack[++top]=value;
  }
}
int pop(){
  if(top==-1){
    cout<<"stack underflow"<<endl;
  }
  return stack[top--];
}
void show() {
  if (top == -1) {
      cout << "Stack is empty!\n";
      return;
  }
  for (int i = 0; i <= top; i++) {
      cout << stack[i] << " ";
  }
  cout << endl;
};
int main(){
  push(1);
  push(2);
  push(1);
  return 0;
}