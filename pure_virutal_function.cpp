#include <iostream>

class Base
{
public:
    virtual void show() = 0; // Pure virtual function
};
class Derived : public Base
{
public:
    void show() override
    {
        std::cout << "In Derived\n";
    }
};
int main()
{
    // Base b; // Error: cannot create an instance of the abstract class
    Derived d;
    d.show(); // Calls Derived's implementation
    return 0;
}
