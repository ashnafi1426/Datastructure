#include <iostream>

struct Node {
    int data;
    Node* next;
};

Node* top = nullptr;

void push(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

int pop() {
    if (top == nullptr) {
        std::cout << "Stack Underflow\n";
        return -1;
    }
    Node* temp = top;
    int popped = temp->data;
    top = top->next;
    delete temp;
    return popped;
}

void displayStack() {
    Node* current = top;
    std::cout << "Stack: ";
    while(current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << "\n";
}

int main() {
    push(100);
    push(200);
    push(300);
    displayStack();
    
    std::cout << "Popped: " << pop() << "\n";
    displayStack();
    
    return 0;
}