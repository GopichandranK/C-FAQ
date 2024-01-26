#include <iostream>
#include <string>

template <typename T>
class MyClass
{
    T data;

public:
    MyClass(T d) : data(d) {}
    void display()
    {
        std::cout << data << std::endl;
    }
};
int main()
{
    MyClass<int> intObj(1);
    MyClass<std::string> stringObj("Hello");
    intObj.display();    // Displays 1
    stringObj.display(); // Displays Hello
    return 0;
}
