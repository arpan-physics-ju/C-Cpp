#include <iostream>
using namespace std;

struct complex{
    float re;
    float im;
};

int main(){
    struct complex arr[10];

    arr[0].re = 1;
    arr[0].im = 3;

    cout << arr[0].im << endl;

}