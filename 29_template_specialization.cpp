#include <iostream>

template <typename T>
T max(T x, T y)
{
    return (x > y) ? x : y;
}
// Specialization for type 'char'
template <>
char max(char x, char y)
{
    std::cout << "Specialized template for char\n";
    return (x > y) ? x : y;
}
int main()
{
    std::cout << max(10, 15) << "\n";   // Uses generic template
    std::cout << max('A', 'B') << "\n"; // Uses specialized template
    return 0;
}
