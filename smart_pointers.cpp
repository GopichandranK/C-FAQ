#include <memory>
#include <iostream>
class MyClass
{
public:
    MyClass() { std::cout << "MyClass constructed\n"; }
    ~MyClass() { std::cout << "MyClass destructed\n"; }
    void greet() { std::cout << "Hello from MyClass\n"; }
};
int main()
{
    std::unique_ptr<MyClass> myClassPtr = std::make_unique<MyClass>();
    myClassPtr->greet();
    // No need to delete, automatically destructed when goes out of scope
    return 0;
}
