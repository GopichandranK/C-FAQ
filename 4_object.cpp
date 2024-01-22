#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string color;
    void drive()
    {
        cout << "Driving" << endl;
    }
};
int main()
{
    Car myCar; // myCar is an object of the Car class
    myCar.color = "Red";
    myCar.drive();
    return 0;
}
