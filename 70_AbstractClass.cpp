#include <iostream>

class AbstractClass
{
public:
    virtual void pureVirtualFunction() = 0; // Pure virtual function
};
class DerivedClass : public AbstractClass
{
public:
    void pureVirtualFunction() override
    {
        std::cout << "Implemented pure virtual function" << std::endl;
    }
};
int main()
{
    // AbstractClass obj; // Error: cannot create an instance of the abstract class
    DerivedClass obj;
    obj.pureVirtualFunction();
    return 0;
}
