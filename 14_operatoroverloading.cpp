#include <iostream>

class Point
{
public:
    int x, y;
    Point(int x1, int y1) : x(x1), y(y1) {}
    // Overloading the '+' operator
    Point operator+(const Point &p)
    {
        return Point(x + p.x, y + p.y);
    }
};
int main()
{
    Point p1(10, 5), p2(2, 4);
    Point p3 = p1 + p2; // An example of operator overloading
    std::cout << "p3.x = " << p3.x << ", p3.y = " << p3.y;
    return 0;
}
