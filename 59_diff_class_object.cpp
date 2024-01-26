#include <iostream>

class MyClass
{ // Class
public:
    void display()
    {
        std::cout << "Displaying from MyClass" << std::endl;
    }
};
int main()
{
    MyClass obj;   // Object of MyClass
    obj.display(); // Calling a method on the object
    return 0;
}
