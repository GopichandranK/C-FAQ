#include <iostream>

struct MyStruct
{
    int data; // Public by default
};
class MyClass
{
    int data; // Private by default
public:
    int getData() { return data; }
    void setData(int value) { data = value; }
};
int main()
{
    MyStruct s;
    s.data = 10; // Direct access
    MyClass c;
    c.setData(10); // Access via method
    std::cout << c.getData() << std::endl;
    return 0;
}
