#include <iostream>

template <typename T>
class Deque {
private:
    struct Node {
        T data;
        Node* next;
        Node* prev;
    };

    Node* front;  // Pointer to the front of the deque
    Node* rear;   // Pointer to the rear of the deque

public:
    // Constructor to initialize an empty deque
    Deque() : front(nullptr), rear(nullptr) {}

    // Destructor to free allocated memory
    ~Deque() {
        while (!isEmpty()) {
            removeFront();
        }
    }

    // Function to check if the deque is empty
    bool isEmpty() const {
        return (front == nullptr);
    }

    // Function to add an element to the front of the deque
    void addFront(const T& value) {
        Node* newNode = new Node{value, front, nullptr};

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            front->prev = newNode;
            front = newNode;
        }
    }

    // Function to add an element to the rear of the deque
    void addRear(const T& value) {
        Node* newNode = new Node{value, nullptr, rear};

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Function to remove and return the front element from the deque
    T removeFront() {
        if (isEmpty()) {
            std::cerr << "Deque is empty. Cannot remove from front." << std::endl;
            exit(EXIT_FAILURE);
        }

        Node* temp = front;
        T value = front->data;
        front = front->next;

        if (front != nullptr) {
            front->prev = nullptr;
        } else {
            rear = nullptr;  // If the deque becomes empty
        }

        delete temp;
        return value;
    }

    // Function to remove and return the rear element from the deque
    T removeRear() {
        if (isEmpty()) {
            std::cerr << "Deque is empty. Cannot remove from rear." << std::endl;
            exit(EXIT_FAILURE);
        }

        Node* temp = rear;
        T value = rear->data;
        rear = rear->prev;

        if (rear != nullptr) {
            rear->next = nullptr;
        } else {
            front = nullptr;  // If the deque becomes empty
        }

        delete temp;
        return value;
    }

    // Function to get the front element without removing it
    T getFront() const {
        if (isEmpty()) {
            std::cerr << "Deque is empty. Cannot access front." << std::endl;
            exit(EXIT_FAILURE);
        }
        return front->data;
    }

    // Function to get the rear element without removing it
    T getRear() const {
        if (isEmpty()) {
            std::cerr << "Deque is empty. Cannot access rear." << std::endl;
            exit(EXIT_FAILURE);
        }
        return rear->data;
    }
};

int main() {
    Deque<int> deque;

    // Adding elements to the deque
    deque.addFront(10);
    deque.addRear(20);
    deque.addFront(5);
    deque.addRear(25);

    // Displaying front and rear elements
    std::cout << "Front: " << deque.getFront() << std::endl;
    std::cout << "Rear: " << deque.getRear() << std::endl;

    // Removing elements from the deque
    std::cout << "Removed from front: " << deque.removeFront() << std::endl;
    std::cout << "Removed from rear: " << deque.removeRear() << std::endl;

    // Displaying front and rear elements after removal
    std::cout << "Front: " << deque.getFront() << std::endl;
    std::cout << "Rear: " << deque.getRear() << std::endl;

    return 0;
}
