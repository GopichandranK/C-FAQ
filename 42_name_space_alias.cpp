#include <iostream>

namespace very_long_namespace_name
{
    void function()
    {
        std::cout << "In a long namespace" << std::endl;
    }
}
namespace vln = very_long_namespace_name; // Namespace alias
int main()
{
    vln::function(); // Using the alias
    return 0;
}
