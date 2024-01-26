#include <iostream>

class Base
{
public:
    virtual void function() { std::cout << "Base Function\n"; }
};
class Derived : public Base
{
public:
    void function() override { std::cout << "Derived Function\n"; }
};
int main()
{
    Base *basePtr = new Derived();
    basePtr->function(); // Uses v-table to call the correct function
    delete basePtr;
    return 0;
}
