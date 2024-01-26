#include <iostream>

class MyClass
{
public:
    static int staticValue;
    static void printStaticValue()
    {
        std::cout << "Static Value: " << staticValue << std::endl;
    }
};
int MyClass::staticValue = 5;
int main()
{
    MyClass::printStaticValue(); // Calling static member function
    return 0;
}
