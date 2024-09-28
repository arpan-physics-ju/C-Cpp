#include <iostream>
#include <deque>


template<typename T>
class Deque {
    private:
        std::deque<T> dq;

    public:
        void pushFront(const T& value) {
            dq.push_front(value);
        }
        void pushBack(const T& value) {
            dq.push_back(value);
        }
        void popFront() {
            if (dq.empty()) {
                std::cout << "Deque is empty" << std::endl;
            } else {
                dq.pop_front();
            }
        }
        void popBack() {
            if (dq.empty()) {
                std::cout << "Deque is empty" << std::endl;
            } else {
                dq.pop_back();
            }
        }
        T front() {
            if (dq.empty()) {
                std::cout << "Deque is empty" << std::endl;
            } else {
                return dq.front();
            }
        }
        T back() {
            if (dq.empty()) {
                std::cout << "Deque is empty" << std::endl;
            } else {
                return dq.back();
            }
        }
        bool isEmpty() {
            return dq.empty();
        }
        long size() {
            return dq.size();
        }
};

int main() {
    Deque<int> iDq;
    iDq.pushBack(100);
    iDq.pushFront(250);
    iDq.pushFront(150);

    std::cout << "Front element: " << iDq.front() << std::endl;
    iDq.popFront();
    std::cout << "Front element: " << iDq.front() << std::endl;
    std::cout << "Back element: " << iDq.back() << std::endl;
    iDq.popBack();
    std::cout << "Back element: " << iDq.back() << std::endl;

    return 0;
}