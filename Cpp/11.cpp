#include <iostream>

using namespace std;

union time{
    int x, y;
    int z;
};


int main(){
    union time t;
    t.x = 20;
    cout << t.x << t.y << t.z << endl;
    t.y = 303;
    cout << t.x << t.y << t.z << endl;

    return 0;
}