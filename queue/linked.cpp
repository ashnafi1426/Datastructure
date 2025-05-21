#include <iostream>

class QNode {
public:
    int data;
    QNode* next;
    QNode(int val) : data(val), next(nullptr) {}
};

class LinkedListQueue {
private:
    QNode *front, *rear;
public:
    LinkedListQueue() : front(nullptr), rear(nullptr) {}
    
    void enqueue(int value) {
        QNode* newNode = new QNode(value);
        if (!rear) {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }
    
    int dequeue() {
        if (!front) {
            std::cout << "Queue Underflow\n";
            return -1;
        }
        QNode* temp = front;
        int dequeued = temp->data;
        front = front->next;
        if (!front) rear = nullptr;
        delete temp;
        return dequeued;
    }
    
    int peek() {
        if (!front) {
            std::cout << "Queue is Empty\n";
            return -1;
        }
        return front->data;
    }
    
    bool isEmpty() {
        return front == nullptr;
    }
};