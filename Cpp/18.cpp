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
    //goto end;
    cout << x << endl;

    //end:
    (y == 10 ) ? cout << "y = 10" << endl : cout << "y != 10" << endl;

    return 0;
}