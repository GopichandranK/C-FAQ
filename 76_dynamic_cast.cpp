#include <iostream>

class Base
{
public:
    virtual void print() { std::cout << "Base class" << std::endl; }
};
class Derived : public Base
{
public:
    void print() { std::cout << "Derived class" << std::endl; }
};
int main()
{
    Base *b = new Derived();
    Derived *d = dynamic_cast<Derived *>(b); // Safe downcasting
    if (d)
        d->print();
    delete b;
    return 0;
}
