#include <iostream>

class MyClass
{
private:
    int value;

public:
    MyClass(int v) : value(v)
    { // Constructor
        std::cout << "Object created with value " << value << std::endl;
    }
};
int main()
{
    MyClass obj(10); // Creating an object, which calls the constructor
    return 0;
}
