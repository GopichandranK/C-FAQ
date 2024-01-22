#include <iostream>

enum Color
{
    RED,
    GREEN,
    BLUE
};
int main()
{
    Color c = RED;
    std::cout << c << std::endl; // Output: 0 (the position of RED in the enum)
    return 0;
}
