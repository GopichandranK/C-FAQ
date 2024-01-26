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
    MyClass obj; // Destructor is called automatically when obj goes out of scope
    return 0;
}
