#include <iostream>
#include <stdexcept>

class Base {
public:
    virtual void print() { std::cout << "Base class" << std::endl; }
};

class Derived : public Base {
public:
    void print() override { std::cout << "Derived class" << std::endl; }
};

int main() {
    // static_cast example
    double d = 3.14;
    int i = static_cast<int>(d);
    std::cout << "static_cast: " << i << std::endl;

    // dynamic_cast example
    Base *b = new Derived();
    Derived *dp = dynamic_cast<Derived*>(b);
    if (dp != nullptr) dp->print();
    else std::cout << "dynamic_cast failed" << std::endl;

    // const_cast example
    const int ci = 10;
    int* modifiable = const_cast<int*>(&ci);
    *modifiable = 20;
    std::cout << "const_cast: " << ci << ", " << *modifiable << std::endl;

    // reinterpret_cast example
    long address = reinterpret_cast<long>(&i);
    std::cout << "reinterpret_cast: " << address << std::endl;

    delete b;
    return 0;
}
