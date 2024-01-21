#include <iostream>

class MoveableClass
{
private:
    int *data;

public:
    MoveableClass(int size) { data = new int[size]; }
    ~MoveableClass() { delete[] data; }
    // Move constructor
    MoveableClass(MoveableClass &&other) noexcept : data(other.data)
    {
        other.data = nullptr;
    }
    // Move assignment
    MoveableClass &operator=(MoveableClass &&other) noexcept
    {
        if (this != &other)
        {
            delete[] data;
            data = other.data;
            other.data = nullptr;
        }
        return *this;
    }
};
int main()
{
    MoveableClass a(100);
    MoveableClass b = std::move(a); // Move constructor is called
    return 0;
}
