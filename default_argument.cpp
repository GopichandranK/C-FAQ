#include <iostream>
#include <string>

void printDetails(std::string name, int age = 30)
{
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}
int main()
{
    printDetails("Alice");   // Uses default age
    printDetails("Bob", 25); // Overrides default age
    return 0;
}
