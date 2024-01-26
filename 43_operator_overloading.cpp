#include <iostream>

class Complex
{
public:
    int real, imag;
    Complex(int r, int i) : real(r), imag(i) {}
    Complex operator+(const Complex &obj)
    {
        return Complex(real + obj.real, imag + obj.imag);
    }
};
int main()
{
    Complex c1(5, 4), c2(2, 3);
    Complex c3 = c1 + c2; // Calls overloaded operator+
    std::cout << "New Complex number: " << c3.real << " + " << c3.imag << "i";
    return 0;
}
