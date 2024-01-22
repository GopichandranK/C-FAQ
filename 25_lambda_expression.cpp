#include <iostream>

int main()
{
    auto sum = [](int a, int b) -> int
    { return a + b; };
    std::cout << "Sum: " << sum(5, 3); // Calling lambda expression
    return 0;
}
