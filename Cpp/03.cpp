#include <iostream>
using namespace std;

class Calculate{
    public:
    int a = 50;
    int b = 20;
    void addition(){
        int result = a + b;
        cout << "result:" << result << endl;
    }
};

int main(){
    Calculate add;
    add.addition();
    return 0;
}