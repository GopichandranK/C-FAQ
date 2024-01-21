#include <iostream>

// Defining a namespace
namespace MyNamespace
{
    void myFunction()
    {
        std::cout << "Inside MyNamespace" << std::endl;
    }
}
int main()
{
    MyNamespace::myFunction(); // Accessing the function using namespace
    return 0;
}
