#include <iostream>
using namespace std;

template <typename T>
T add(T num1, T num2)
{
    return num1 + num2;
}
int main()
{
    int result1 = add<int>(3, 7);
    double result2 = add<double>(3.5, 2.5);
    cout << "Integer sum: " << result1 << endl;
    cout << "Double sum: " << result2 << endl;
    return 0;
}
