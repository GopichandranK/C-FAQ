#include <iostream>

int main()
{
    int *p = new int(5);          // Allocating memory for an integer
    std::cout << *p << std::endl; // Accessing the value
    delete p;                     // Freeing the allocated memory
    p = nullptr;                  // Avoiding dangling pointer
    return 0;
}
