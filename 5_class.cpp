#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width, height; // Private data members
public:
    Rectangle(int w, int h) : width(w), height(h) {} // Constructor
    int area() { return width * height; }            // Public member function
};
int main()
{
    Rectangle rect(10, 20);
    cout << "Area: " << rect.area() << endl; // Accessing member function
    return 0;
}
