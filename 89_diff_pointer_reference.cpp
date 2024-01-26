#include <iostream>

int main()
{
    int var = 10;
    int *ptr = &var; // Pointer to var
    int &ref = var;  // Reference to var
    *ptr = 20;       // Changing value via pointer
    ref = 30;        // Changing value via reference
    return 0;
}
