#include <iostream>

class Print
{
public:
    void show(int i)
    {
        std::cout << "Integer: " << i << std::endl;
    }
    void show(double f)
    {
        std::cout << "Double: " << f << std::endl;
    }
};
int main()
{
    Print obj;
    obj.show(1);    // Calls show(int)
    obj.show(3.14); // Calls show(double)
    return 0;
}
