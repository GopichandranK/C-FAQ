#include <iostream>

class EncapsulatedClass
{
private:
    int hiddenData; // Private data, not directly accessible from outside the class
public:
    void setData(int value)
    { // Public method to set the value
        hiddenData = value;
    }
    int getData()
    { // Public method to get the value
        return hiddenData;
    }
};
int main()
{
    EncapsulatedClass obj;
    obj.setData(5);
    std::cout << "Data: " << obj.getData() << std::endl;
    return 0;
}
