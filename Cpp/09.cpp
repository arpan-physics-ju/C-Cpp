#include <bits/stdc++.h> 
using namespace std; 

class Geeks { 
	// Access specifier 
public: 
	// Data Members 
	string geekname; 

	// Member Functions() 
	void printname() 
	{ 
		cout << "Geekname is: " << geekname << endl; 
	} 
}; 

int main() { 
	Geeks obj1; 
	obj1.geekname = "GeeksForArpan" ; 
	obj1.printname(); 

	return 0; 
}
