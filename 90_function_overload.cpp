#include <iostream>

void print(int i)
{
    std::cout << "Integer: " << i << std::endl;
}
void print(double f)
{
    std::cout << "Double: " << f << std::endl;
}
void print(const std::string &str)
{
    std::cout << "String: " << str << std::endl;
}
int main()
{
    print(10);      // Calls print(int)
    print(10.5);    // Calls print(double)
    print("Hello"); // Calls print(const std::string&)
    return 0;
}
