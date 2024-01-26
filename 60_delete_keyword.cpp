#include <iostream>

int main()
{
    int *ptr = new int(10); // Dynamically allocate memory
    // Use the allocated memory...
    delete ptr;    // Deallocate the memory
    ptr = nullptr; // Set ptr to nullptr to avoid dangling pointer
    return 0;
}
