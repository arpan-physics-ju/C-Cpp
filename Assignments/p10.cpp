/*
Author - Arpan purkait
Problem - Design a queue abstract data type for float elements in C++, including
operations for enqueue, dequeue, and empty. The dequeue operation
removes the element and returns its value.
*/
#include <iostream>

// Structure
struct Node {       // structure to represent each element in the queue
    float data;     // Data part of the node
    Node* next;     // Pointer to the next node in the queue
};

// Class
class Queue {       // Queue class
private:
    Node* front;    // Pointer to the front of the queue
    Node* rear;     // Pointer to the rear of the queue

public:
    Queue() : front(nullptr), rear(nullptr) {}      // Constructor

    ~Queue() {                                      // Destructor
        while (!isEmpty()) {
            dequeue();                              // Dequeue until the queue is empty
        }
    }

    bool isEmpty() const {                  // Function to check if the queue is empty
        return front == nullptr;
    }

    void enqueue(float value) {             // Function to add an element to the queue (enqueue)
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (isEmpty()) {
            // If the queue is empty, the new node becomes both front and rear
            front = rear = newNode;
        } else {
            // Otherwise, add the new node at the end and update the rear
            rear->next = newNode;
            rear = newNode;
        }
    }

    float dequeue() {                       // Function to remove and return the front element from the queue (dequeue)
        if (isEmpty()) {
            std::cout << "Queue is empty - Cannot dequeue." << std::endl;
            // Return an error value or use exception handling
            return -1.0f;  
        }

        Node* temp = front;
        float value = front->data;
        front = front->next;

        // If the queue becomes empty after dequeue, set rear to nullptr
        if (front == nullptr) {
            rear = nullptr;
        }

        delete temp;  // Free the memory of the dequeued node
        return value;
    }
};

// Main function
int main() {
    Queue q;

    // Enqueue some float values
    q.enqueue(1.1f);
    q.enqueue(2.2f);
    q.enqueue(3.3f);

    // Dequeue and display the values
    while (!q.isEmpty()) {
        std::cout << "Dequeued: " << q.dequeue() << std::endl;
    }

    return 0;
}