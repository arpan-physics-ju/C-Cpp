// Ternary Operator 


#include <iostream>
using namespace std;

int main(){
    int y = 10;
    if (y == 10)
    {
        cout << "y = 10" << endl;

    } else 
    {
        cout << "y != 10" << endl;
    }

    int x = (y == 10) ? 20 : 10;
    cout << x << endl;

    (y == 10 ) ? cout << "y = 10" << endl : cout << "y != 10" << endl;

    return 0;
}