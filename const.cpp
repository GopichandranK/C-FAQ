#include <iostream>

class MyClass
{
public:
    int x;
    MyClass(int val) : x(val) {}
    // Constant function
    void printVal() const
    {
        std::cout << "The value is " << x << std::endl;
    }
};
int main()
{
    const int a = 10; // Constant integer
    MyClass obj(20);
    obj.printVal(); // Call to a constant function
    return 0;
}
