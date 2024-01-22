#include <iostream>

int main()
{
    int *ptr = new int(5);

    // Use the memory...

    delete ptr;    // Free the memory
    ptr = nullptr; // Set to nullptr to avoid dangling pointer
    return 0;
}
