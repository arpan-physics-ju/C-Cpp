#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    q.push(11);
    q.push(22);
    q.push(33);
    q.push(44);

    std::cout << "Size is " << q.size() << std::endl;;
    // while (!q.empty()) {
    //     std::cout << "Front element: " << q.front() << std::endl; // Access front element
    //     q.pop(); // Remove front element
    // }
    std::cout << "Front element: " << q.front() << std::endl;
    std::cout << "Back element: " << q.back() << std::endl;
}