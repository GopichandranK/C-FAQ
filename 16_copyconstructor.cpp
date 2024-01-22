#include <iostream>

class Box
{
public:
    int length;
    Box(int l) : length(l) {} // Normal constructor
    // Copy constructor
    Box(const Box &b)
    {
        length = b.length;
        std::cout << "Copy constructor called." << std::endl;
    }
};
int main()
{
    Box box1(10);    // Normal constructor
    Box box2 = box1; // Copy constructor is called here
    std::cout << "Box2 length: " << box2.length << std::endl;
    return 0;
}

