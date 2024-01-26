#include <iostream>

class FinalClass final
{ // This class cannot be inherited
public:
    void display()
    {
        std::cout << "Final class" << std::endl;
    }
};
//class DerivedClass : public FinalClass { }; // Error: cannot derive from 'final' base 'FinalClass'
int main()
{
    FinalClass obj;
    obj.display();
    return 0;
}
