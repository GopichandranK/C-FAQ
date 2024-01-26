#include <vector>
#include <iostream>
int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    for (int val : vec)
    {
        std::cout << val << " ";
    }
    return 0;
}
