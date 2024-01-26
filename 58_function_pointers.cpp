#include <iostream>

void hello()
{
    std::cout << "Hello" << std::endl;
}
void world()
{
    std::cout << "World" << std::endl;
}
int main()
{
    void (*funcPtr)(); // Declaration of a function pointer
    funcPtr = hello;   // Pointing to hello
    funcPtr();         // Calls hello
    funcPtr = world;   // Pointing to world
    funcPtr();         // Calls world
    return 0;
}
