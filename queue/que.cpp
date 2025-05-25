#include<iostream>
using namespace std;
#include<queue>
void printQueue
int main(){
queue<int> myqueue;
myqueue.push(1);
myqueue.push(2);
myqueue.push(3);
myqueue.push(4);
cout<<"size is "<<myqueue.size()<<endl;
cout<<"first element is"<<myqueue.front()<<endl;

cout<<"last element is"<<myqueue.back()<<endl;
printQueue();
return 0;

}