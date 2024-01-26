#include <iostream>

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 10, b = 20;
    swap(a, b);
    std::cout << "a: " << a << ", b: " << b << std::endl; // a and b are swapped
    return 0;
}
