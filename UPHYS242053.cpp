
/*************************MAIN-PROGRAM**********************************

Name:           ARPAN PURKAIT           Class Roll No.: 002320701045
Exam Roll No.:  UPHYS242053
Reg No.:        1661658 of 2023-24      Session:        2024

************************************************************************

PROBLEM STATEMENT:

    A deque is a double-ended queue, with operations adding and removing 
elements from either end. Write an abstract data type for a deque whose
elements can be any primitive type. Use the Computer Language C++.

************************************************************************/

#include <iostream>
#include <fstream>
#include "Deque.h"      // This is the header file to add the Deque class

int main() {
    // Object Creation and type declaration
    Deque<int> deque;           

    // Opening files
    std::ifstream inFile("input.txt");
    std::ofstream outFile("output.txt");
    if (!inFile) 
        std::cerr << "Error opening file for reading." << std::endl;
    if (!outFile) 
        std::cerr << "Error opening file for writing." << std::endl;

    // Storring Data on Deque
    int number;
    while (inFile >> number) {
        deque.addRear(number);
    }
    
    inFile.close();     // Close the input file
    
    // Front Operation
    outFile << "Front element: " << deque.getFront() << std::endl;
    deque.removeFront();
    outFile << "After Popping one Element from Front, New Front element: " << deque.getFront() << std::endl;

    // Back Operation
    outFile << "Back element: " << deque.getRear() << std::endl;
    deque.removeRear();
    outFile << "After Popping one Element from Back, New Back element: " << deque.getRear() << std::endl;

    outFile.close();    // Close the output file

    return 0;
}
