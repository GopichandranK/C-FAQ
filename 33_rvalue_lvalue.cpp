#include <iostream>

int sum(int a, int b)
{
    return a + b; // return value is an rvalue
}

int main()
{
    int x = 10; // 'x' is an lvalue, 10 is an rvalue
    int y = x;  // 'y' is an lvalue
    // rvalues are often returned by functions
    std::cout << sum(5, 10) << std::endl;
    return 0;
}