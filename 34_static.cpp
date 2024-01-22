#include <iostream>

class MyClass
{
public:
    static int count; // Static member variable
    MyClass()
    {
        count++;
    }
};
int MyClass::count = 0; // Initialize static member
int main()
{
    MyClass obj1, obj2;
    std::cout << "Count: " << MyClass::count << std::endl; // Accessing static member
    return 0;
}
