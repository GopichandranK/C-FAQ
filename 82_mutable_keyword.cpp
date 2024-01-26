#include <iostream>

class MyClass
{
private:
    mutable int cachedValue; // This member can be modified in a const function
    int value;

public:
    MyClass(int v) : value(v), cachedValue(0) {}
    void setValue(int v) const
    {                    // Const function
        cachedValue = v; // Allowed because cachedValue is mutable
    }
};
int main()
{
    const MyClass obj(5);
    obj.setValue(10); // Allowed because setValue is a const function and cachedValue is mutable
    return 0;
}
