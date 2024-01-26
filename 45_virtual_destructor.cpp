#include <iostream>

class Base
{
public:
    virtual ~Base()
    {
        std::cout << "Base destructor\n";
    }
};
class Derived : public Base
{
public:
    ~Derived()
    {
        std::cout << "Derived destructor\n";
    }
};
int main()
{
    Base *b = new Derived();
    delete b; // First calls Derived's destructor, then Base's destructor
    return 0;
}
