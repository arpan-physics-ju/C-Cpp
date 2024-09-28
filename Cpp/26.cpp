#include <iostream>
using namespace std;

class person{
public:
    string name;
    long id;
    void getdetails(){
        cout << name << id << endl;
    }
};

int main()
{

    person p1; 

    p1.id = 002320701045;
    p1.name = "ARPAN";
    p1.getdetails();

    return 0;
}
