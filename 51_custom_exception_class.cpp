#include <iostream>
#include <exception>

class MyException : public std::exception
{
private:
    const char *message;

public:
    MyException(const char *msg) : message(msg) {}
    const char *what() const throw()
    {
        return message;
    }
};
int main()
{
    try
    {
        throw MyException("Custom exception occurred");
    }
    catch (const MyException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
