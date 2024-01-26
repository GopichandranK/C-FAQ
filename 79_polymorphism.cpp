#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    // Virtual function for calculating area
    virtual double area() const
    {
        return 0;
    }
};

// Derived class - Circle
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override the area function
    double area() const override
    {
        return 3.14159 * radius * radius;
    }
};

// Derived class - Rectangle
class Rectangle : public Shape
{
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Override the area function
    double area() const override
    {
        return width * height;
    }
};

// Function to display the area of a shape
void printArea(const Shape &shape)
{
    cout << "Area: " << shape.area() << endl;
}

int main()
{
    Circle circle(5);
    Rectangle rectangle(4, 5);

    printArea(circle);    // Prints area of the circle
    printArea(rectangle); // Prints area of the rectangle

    return 0;
}
