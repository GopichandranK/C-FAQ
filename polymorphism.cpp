#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Some sound" << endl;
    }
};
class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Woof" << endl;
    }
};
class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Meow" << endl;
    }
};
int main()
{
    Animal *myAnimal = new Dog();
    myAnimal->sound(); // Outputs: Woof
    myAnimal = new Cat();
    myAnimal->sound(); // Outputs: Meow
    delete myAnimal;
    return 0;
}
