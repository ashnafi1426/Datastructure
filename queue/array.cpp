#include <iostream>
#define MAX_SIZE 100

class ArrayQueue {
private:
    int arr[MAX_SIZE];
    int front, rear;
public:
    ArrayQueue() : front(-1), rear(-1) {}
    
    void enqueue(int value) {
        if (rear == MAX_SIZE - 1) {
            std::cout << "Queue Overflow\n";
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = value;
    }
    
    int dequeue() {
        if (front == -1 || front > rear) {
            std::cout << "Queue Underflow\n";
            return -1;
        }
        return arr[front++];
    }
    
    int peek() {
        if (front == -1 || front > rear) {
            std::cout << "Queue is Empty\n";
            return -1;
        }
        return arr[front];
    }
    
    bool isEmpty() {
        return front == -1 || front > rear;
    }
};