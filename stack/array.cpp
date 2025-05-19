#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of stack

class Stack {
private:
    int arr[MAX_SIZE];
    int topIndex;

public:
    Stack() {
        topIndex = -1; // Initialize stack as empty
    }

    // Push element onto stack
    void push(int value) {
        if (topIndex >= MAX_SIZE - 1) {
            cout << "Stack Overflow! Cannot push " << value << endl;
            return;
        }
        arr[++topIndex] = value;
    }

    // Remove and return top element
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Stack is empty." << endl;
            return -1;
        }
        return arr[topIndex--];
    }

    // Return top element without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return arr[topIndex];
    }

    // Check if stack is empty
    bool isEmpty() {
        return topIndex == -1;
    }

    // Get current stack size
    int size() {
        return topIndex + 1;
    }
};

int main() {
    Stack s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout << "Top element: " << s.peek() << endl;
    cout << "Stack size: " << s.size() << endl;
    
    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;
    
    cout << "Stack is empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    
    return 0;
}