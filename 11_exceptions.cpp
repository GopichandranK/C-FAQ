#include <iostream>
#include <stdexcept>

int main()
{
    try
    {
        throw std::runtime_error("A runtime error occurred");
    }
    catch (const std::exception &e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
