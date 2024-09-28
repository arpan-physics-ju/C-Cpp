#include <iostream>
using namespace std;

void max(int x, int y){
    if (x > y)
    {
        cout << x << "is greater" << endl;
    } 
    else 
    {
        cout << y << "is greater" << endl;
    }

    return;
}

int main(){
    int a = 100, b = 200;
    max(a,b);

    return 0;
}