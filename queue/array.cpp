#include <iostream>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX-1) {
        std::cout << "Queue Overflow\n";
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = value;
}

int dequeue() {
    if (front == -1 || front > rear) {
        std::cout << "Queue Underflow\n";
        return -1;
    }
    return queue[front++];
}

void displayQueue() {
    if (front == -1) {
        std::cout << "Queue is empty\n";
        return;
    }
    std::cout << "Queue: ";
    for(int i = front; i <= rear; i++) {
        std::cout << queue[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    enqueue(15);
    enqueue(25);
    enqueue(35);
    displayQueue();
    
    std::cout << "Dequeued: " << dequeue() << "\n";
    displayQueue();
    
    return 0;
}