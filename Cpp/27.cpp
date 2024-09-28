#include <iostream>
using namespace std;

class Car{
public:
    void displaySpeed(int speed){
        cout << "The car is moving with a velocity of " << speed << "Km/h" << endl;
    }
};

int main(){
    Car myCar;
    int speed = 180;
    myCar.displaySpeed(speed);

    return 0;
}