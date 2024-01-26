#include <iostream>
using namespace std;

// Base class
class Animal
{
protected:
    string name;
    int age;

public:
    Animal(string n, int a) : name(n), age(a) {}

    void eat()
    {
        cout << name << " is eating." << endl;
    }

    void sleep()
    {
        cout << name << " is sleeping." << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    Dog(string n, int a) : Animal(n, a) {}

    void bark()
    {
        cout << name << " says Woof!" << endl;
    }
};

int main()
{
    Dog myDog("Buddy", 3);

    myDog.eat();   // Inherited from Animal
    myDog.sleep(); // Inherited from Animal
    myDog.bark();  // Specific to Dog

    return 0;
}
