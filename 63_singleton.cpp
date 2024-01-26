#include <iostream>

class Singleton
{
private:
    static Singleton *instance;
    Singleton() {} // Private constructor
public:
    static Singleton *getInstance()
    {
        if (!instance)
            instance = new Singleton();
        return instance;
    }
};
Singleton *Singleton::instance = nullptr;
int main()
{
    Singleton *singletonInstance = Singleton::getInstance();
    return 0;
}
