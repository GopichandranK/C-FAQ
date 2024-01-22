#include <iostream>

class Box
{
private:
    double width;

public:
    Box(double wid) : width(wid) {}
    friend void printWidth(Box box);
};
void printWidth(Box box)
{
    // Direct access to private member
    std::cout << "Width of box: " << box.width << std::endl;
}
int main()
{
    Box box(10);
    printWidth(box); // Friend function accessing private data
    return 0;
}
