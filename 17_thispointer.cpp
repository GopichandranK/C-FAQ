#include <iostream>

class MyClass
{
public:
    int x;
    MyClass(int x)
    {
        this->x = x; // 'this' pointer is used to differentiate between the parameter 'x' and the member 'x'
    }
    void print()
    {
        std::cout << "MyClass.x = " << this->x << std::endl;
    }
};
int main()
{
    MyClass obj(42);
    obj.print();
    return 0;
}
