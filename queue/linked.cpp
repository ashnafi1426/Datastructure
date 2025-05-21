#include <iostream>

struct QNode {
    int data;
    QNode* next;
};

QNode* front = nullptr;
QNode* rear = nullptr;

void enqueue(int value) {
    QNode* newNode = new QNode();
    newNode->data = value;
    newNode->next = nullptr;
    
    if (rear == nullptr) {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

int dequeue() {
    if (front == nullptr) {
        std::cout << "Queue Underflow\n";
        return -1;
    }
    QNode* temp = front;
    int item = temp->data;
    front = front->next;
    if (front == nullptr) rear = nullptr;
    delete temp;
    return item;
}

void displayQueue() {
    QNode* current = front;
    std::cout << "Queue: ";
    while(current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << "\n";
}

int main() {
    enqueue(150);
    enqueue(250);
    enqueue(350);
    displayQueue();
    
    std::cout << "Dequeued: " << dequeue() << "\n";
    displayQueue();
    
    return 0;
}