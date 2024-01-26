#include <tuple>
#include <iostream>

int main()
{
    std::tuple<int, std::string, float> myTuple(1, "Hello", 3.14f);
    std::cout << std::get<0>(myTuple) << " ";
    std::cout << std::get<1>(myTuple) << " ";
    std::cout << std::get<2>(myTuple) << std::endl;
    return 0;
}
