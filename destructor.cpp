#include <iostream>

class MyClass
{
public:
    MyClass()
    {
        std::cout << "Constructor called" << std::endl;
    }
    ~MyClass()
    {
        std::cout << "Destructor called" << std::endl;
    }
};
int main()
{
    MyClass obj; // Constructor and destructor are called automatically
    return 0;
}
