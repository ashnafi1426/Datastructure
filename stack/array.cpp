#include <iostream>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top >= MAX-1) {
        std::cout << "Stack Overflow\n";
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (top < 0) {
        std::cout << "Stack Underflow\n";
        return -1;
    }
    return stack[top--];
}

void displayStack() {
    std::cout << "Stack: ";
    for(int i = top; i >= 0; i--) {
        std::cout << stack[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    push(10);
    push(20);
    push(30);
    displayStack();
    
    std::cout << "Popped: " << pop() << "\n";
    displayStack();
    
    return 0;
}