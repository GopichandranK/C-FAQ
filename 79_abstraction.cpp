#include <iostream>
using namespace std;

// Abstract class
class Vehicle
{
public:
    // Pure virtual function
    virtual void startEngine() = 0;
    virtual void stopEngine() = 0;

    // A regular method
    void honk()
    {
        cout << "Beep! Beep!" << endl;
    }
};

// Derived class
class Car : public Vehicle
{
public:
    // Implementation of pure virtual functions
    void startEngine() override
    {
        cout << "Car engine started." << endl;
    }

    void stopEngine() override
    {
        cout << "Car engine stopped." << endl;
    }
};

// Another derived class
class Motorcycle : public Vehicle
{
public:
    // Implementation of pure virtual functions
    void startEngine() override
    {
        cout << "Motorcycle engine started." << endl;
    }

    void stopEngine() override
    {
        cout << "Motorcycle engine stopped." << endl;
    }
};

int main()
{
    Car myCar;
    Motorcycle myMotorcycle;

    myCar.startEngine();
    myCar.honk();
    myCar.stopEngine();

    myMotorcycle.startEngine();
    myMotorcycle.honk();
    myMotorcycle.stopEngine();

    return 0;
}
