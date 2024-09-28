#include <iostream>
using namespace std;

enum week{SUN, MON, TUE, WED, THU, FRI, SAT};

int main(){
    enum week day;
    day = SUN;
    cout << day << endl;

    return 0;
}