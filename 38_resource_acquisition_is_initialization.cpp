#include <iostream>

class RAIIWrapper
{
private:
    int *ptr;

public:
    RAIIWrapper(int value) : ptr(new int(value)) {}
    ~RAIIWrapper()
    {
        delete ptr;
    }
    int getValue() const { return *ptr; }
};
int main()
{
    RAIIWrapper wrapper(5);
    std::cout << wrapper.getValue() << std::endl;
    // Destructor automatically called here, releasing memory
    return 0;
}
