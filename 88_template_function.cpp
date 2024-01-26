#include <iostream>

template <typename T>
T add(T num1, T num2)
{
    return num1 + num2;
}
int main()
{
    std::cout << add<int>(10, 20) << std::endl;        // For int
    std::cout << add<double>(10.5, 20.3) << std::endl; // For double
    return 0;
}
