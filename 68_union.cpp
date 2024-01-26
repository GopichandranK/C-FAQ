#include <iostream>

union MyUnion
{
    int intValue;
    char charValue;
};
int main()
{
    MyUnion u;
    u.intValue = 5;
    std::cout << u.intValue << std::endl; // Output: 5
    u.charValue = 'a';
    std::cout << u.charValue << std::endl; // Output: a
    return 0;
}
