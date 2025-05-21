#include <iostream>
using namespace std;

const int MAX = 100;
int stack[MAX];
int top = -1;

void push(int value) {
    if (top >= MAX-1) {
        cout << "Stack Overflow\n";
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (top < 0) {
        cout << "Stack Underflow\n";
        return -1;
    }
    return stack[top--];
}

int peek() {
    if (top < 0) {
        cout << "Stack is Empty\n";
        return -1;
    }
    return stack[top];
}

bool isEmpty() {
    return top < 0;
}