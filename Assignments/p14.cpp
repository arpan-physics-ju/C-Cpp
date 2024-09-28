/*************************MAIN-PROGRAM**********************************

Name:           ARPAN PURKAIT           Class Roll No.: 002320701045
Exam Roll No.:  UPHYS242053
Reg No.:        1661658 of 2023-24      Session:        2024

************************************************************************

PROBLEM STATEMENT:

    Suppose you are writing a C++ function that has three alternative ap-
proaches for accomplishing its requirements. Write a skeletal version of
this function so that if the first alternative raises any exception, the sec-
ond is tried, and if the second alternative raises any exception, the third
is executed. Write the code as if the three methods were procedures
named alt1, alt2, and alt3.

************************************************************************/

#include <iostream>

// prototypes
bool alt1();
bool alt2();
bool alt3();
void tryAlternatives();

// main program
int main() {
    tryAlternatives();
    return 0;
}

// functions definitions
bool alt1() {
    // Task - 1 
    return false;
}

bool alt2() {
    // Task - 2 
    return false;
}

bool alt3() {
    // Task - 3
    std::cout << "Alternative-3: executed successfully" << std::endl;
    return true;
}

void tryAlternatives() {
    if (!alt1()) {                                                  // Try the first alternative
        std::cerr << "Alternative-1: failed" << std::endl;
        if (!alt2()) {                                              // Try the second alternative if alt1 fails
            std::cerr << "Alternative-2: failed" << std::endl;
            if (!alt3()) {                                          // Try the third alternative if alt2 fails
                std::cerr << "Alternative-3: failed" << std::endl;   // Handle the failure of all alternatives here
            }
        }
    }
}