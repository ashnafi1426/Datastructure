#include<iostream>
#include<stack>
using namespace std;
void printStackElements(stack<int>  stack){
  while (!stack.empty())
  {
    cout<<stack.top()<<endl;
    stack.pop();
  }
}
int main(){
  /* to do full stack application is very easy so try an try again and again repeatedly do any thing*/
  //empty,size,push,pop,top;
 

  stack<int>numbersStack; 
  numbersStack.push(1);
  numbersStack.push(2);
  numbersStack.push(1);
  numbersStack.push(0);
  numbersStack.push(9);
  numbersStack.pop();
  numbersStack.pop();

/*
  if(numbersStack.empty()){
    cout<<"stack is empty"<<endl;
  }
  else{
    cout<<"stack is not empty"<<endl;
  }
  cout<<"stack size is"<<numbersStack.size()<<endl;*/
  printStackElements(numbersStack);
}
