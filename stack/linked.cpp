#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void push(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

int pop() {
    if (top == NULL) {
        cout << "Stack Underflow\n";
        return -1;
    }
    Node* temp = top;
    int popped = temp->data;
    top = top->next;
    delete temp;
    return popped;
}

int peek() {
    if (top == NULL) {
        cout << "Stack is Empty\n";
        return -1;
    }
    return top->data;
}

bool isEmpty() {
    return top == NULL;
}