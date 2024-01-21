#include <iostream>

int main()
{
    int x = 10;
    int &ref = x;                         // Reference to x
    ref = 20;                             // Modifying ref also modifies x
    std::cout << "x: " << x << std::endl; // Output: x: 20
    return 0;
}
