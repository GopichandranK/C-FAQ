#include <iostream>

class Base
{
public:
    int value;
};
class Derived1 : public Base
{ /* ... */
};
class Derived2 : public Base
{ /* ... */
};
class FinalDerived : public Derived1, public Derived2
{
    // FinalDerived contains two copies of Base's members
};
int main()
{
    FinalDerived obj;
    // obj.value; // Ambiguity: which 'value' to access, Derived1's or Derived2's?
    return 0;
}
