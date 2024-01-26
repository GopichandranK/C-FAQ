#include <iostream>

int main()
{
    int result = 5 + 3  * 2; // Multiplication (*) has higher precedence than addition (+)
    std::cout << result;  // Output: 11, not 16
    return 0;
}
