#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    std::vector<int> vec = { 4, 1, 3, 5, 2 };
    std::sort(vec.begin(), vec.end());
    for (int i : vec)
    {
        std::cout << i << " ";
    }
    return 0;
}
