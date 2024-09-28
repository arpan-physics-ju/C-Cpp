#include <iostream>
using namespace std;

void reference(){
    int x = 10;
    int &ref = x;
    ref = 20;
    cout << "x = " << x << endl;
    x = 30;
    cout << "ref = " << ref << endl;
    cout << "x = " << &x << endl;
    cout << "ref = " << &ref << endl;
}

int main(){reference();}