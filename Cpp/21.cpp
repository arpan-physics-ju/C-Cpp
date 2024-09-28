#include <iostream>
using namespace std;

// PASS BY REFERENCE
void fun(int *x){
	*x = 30;

    return;
}

int main(){
	int x = 20;
	fun(&x);
	cout << "x = " << x << endl;

	return 0;
}